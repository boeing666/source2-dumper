import type { McpServer } from "@modelcontextprotocol/server";
import { z } from "zod";
import {
  GAMES, PLATFORMS, NotDumped, type Game, type Platform, type ClassInfo, type EnumInfo, type IndexEntry,
  type ConVar, type ConCommand, type ScriptFunction, type ProtoType, type ProtoService, type Protobufs,
  loadMeta, loadIndex, loadScope, loadConVars, loadConCommands, loadEvents, loadScriptApi, loadProtobufs,
} from "./data.js";

const MAX_CHARS = 30_000; // keep a single answer well inside a model's context

const target = {
  game: z.enum(GAMES).default("cs2").describe("cs2 | dota2 | deadlock"),
  platform: z.enum(PLATFORMS).default("win64").describe("win64 | linux (offsets can differ between them)"),
};
const READ_ONLY = { readOnlyHint: true, idempotentHint: true, openWorldHint: false } as const;

type Reply = { content: { type: "text"; text: string }[]; isError?: boolean };
const reply = (text: string): Reply => ({
  content: [{ type: "text", text: text.length > MAX_CHARS ? text.slice(0, MAX_CHARS) + "\n… (truncated: narrow the query or lower `limit`)" : text }],
});
const fail = (text: string): Reply => ({ content: [{ type: "text", text }], isError: true });

// Turns a missing dump into a readable answer instead of a protocol error.
async function guarded(g: Game, p: Platform, run: () => Promise<Reply>): Promise<Reply> {
  try {
    return await run();
  } catch (e) {
    if (e instanceof NotDumped) return fail(`There is no ${p} dump for ${g} (deadlock ships no Linux binaries yet).`);
    throw e;
  }
}

const hex = (n: number) => "0x" + n.toString(16).toUpperCase();
// 0 = exact, 1 = prefix, 2 = substring, -1 = no match (case-insensitive)
function rank(name: string, q: string): number {
  const n = name.toLowerCase();
  return n === q ? 0 : n.startsWith(q) ? 1 : n.includes(q) ? 2 : -1;
}
function best<T>(items: T[], key: (t: T) => string, q: string): T[] {
  const ql = q.toLowerCase();
  return items
    .map((t) => ({ t, r: rank(key(t), ql) }))
    .filter((x) => x.r >= 0)
    .sort((a, b) => a.r - b.r || key(a.t).length - key(b.t).length || key(a.t).localeCompare(key(b.t)))
    .map((x) => x.t);
}
// Near-miss names for "did you mean": substring hits first, then small edit distance (typos).
function editDistance(a: string, b: string, max: number): number {
  if (Math.abs(a.length - b.length) > max) return max + 1;
  let prev = Array.from({ length: b.length + 1 }, (_, i) => i);
  for (let i = 1; i <= a.length; i++) {
    const cur = [i];
    for (let j = 1; j <= b.length; j++) cur[j] = Math.min(prev[j] + 1, cur[j - 1] + 1, prev[j - 1] + (a[i - 1] === b[j - 1] ? 0 : 1));
    prev = cur;
  }
  return prev[b.length];
}
function similar(names: string[], q: string, n = 10): string[] {
  const ql = q.toLowerCase();
  const sub = best(names, (s) => s, ql);
  const max = Math.max(2, Math.floor(ql.length / 5));
  const typo = names
    .map((s) => ({ s, d: editDistance(s.toLowerCase(), ql, max) }))
    .filter((x) => x.d <= max && !sub.includes(x.s))
    .sort((a, b) => a.d - b.d)
    .map((x) => x.s);
  return [...new Set([...typo, ...sub])].slice(0, n);
}
const page = <T>(items: T[], offset: number, limit: number) => items.slice(offset, offset + limit);
const range = (total: number, offset: number, shown: number) =>
  total === 0 ? "no matches" : `${total} matches, showing ${offset + 1}-${offset + shown}`;
function countBy<T>(items: T[], key: (t: T) => string): string {
  const m = new Map<string, number>();
  for (const t of items) m.set(key(t), (m.get(key(t)) ?? 0) + 1);
  return [...m].sort((a, b) => b[1] - a[1]).map(([k, n]) => `${k} ${n}`).join(", ");
}

// ---- schema ---------------------------------------------------------------

// Every module a type is bound in; the caller's module wins, then the game's main ones.
function bindings(index: IndexEntry[], name: string): IndexEntry[] {
  let hits = index.filter((e) => e.name === name);
  if (!hits.length) hits = index.filter((e) => e.name.toLowerCase() === name.toLowerCase());
  const pref = ["server.dll", "libserver.so", "client.dll", "libclient.so"];
  return hits.sort((a, b) => (pref.indexOf(a.scope) + 1 || 99) - (pref.indexOf(b.scope) + 1 || 99));
}
function pickBinding(index: IndexEntry[], name: string, module?: string) {
  const all = bindings(index, name);
  const want = module?.toLowerCase();
  const chosen = want ? all.find((e) => e.scope.toLowerCase() === want || e.scope.toLowerCase().replace(/^lib|\.(dll|so)$/g, "") === want) : all[0];
  return { chosen, all };
}
async function findClass(g: Game, p: Platform, index: IndexEntry[], name: string, scope: string): Promise<ClassInfo | undefined> {
  const e = index.find((x) => x.name === name && x.scope === scope) ?? bindings(index, name)[0];
  if (!e || e.kind === "enum") return undefined;
  return (await loadScope(g, p, e.file)).classes.find((c) => c.name === e.name);
}
// [self, parent, ...] — the dumper's in-scope chain when present, else walked through the index.
async function chainOf(g: Game, p: Platform, index: IndexEntry[], cls: ClassInfo, scope: string): Promise<ClassInfo[]> {
  const out = [cls];
  const names = cls.chain?.slice(1) ?? [];
  let cur = cls;
  for (let i = 0; i < 32; i++) {
    const next = names[i] ?? cur.parent;
    if (!next) break;
    const c = await findClass(g, p, index, next, scope);
    if (!c) break;
    out.push(c);
    cur = c;
  }
  return out;
}
const fieldLine = (f: ClassInfo["fields"][number]) => {
  const tags = [f.networked ? "networked" : "", f.bits ? `bits:${f.bits}` : "", ...f.metadata].filter(Boolean);
  return `  ${hex(f.offset).padEnd(8)} ${f.type} ${f.name};  // size ${f.size}${tags.length ? " · " + tags.join(" · ") : ""}`;
};
function classText(c: ClassInfo, scope: string): string {
  const head = `${c.isStruct ? "struct" : "class"} ${c.name}${c.parent ? " : " + c.parent : ""}  // ${scope}, size ${hex(c.size)} (${c.size}), align ${c.align}${c.entity ? ", entity" : ""}`;
  const lines = [head];
  if (c.flags.length) lines.push(`flags: ${c.flags.join(", ")}`);
  if (c.metadata.length) lines.push(`metadata: ${c.metadata.join(", ")}`);
  lines.push(`fields (${c.fields.length}):`, ...c.fields.map(fieldLine));
  return lines.join("\n");
}
const enumText = (e: EnumInfo, scope: string) =>
  [`enum ${e.name} : ${e.underlying}  // ${scope}, size ${e.size}${e.metadata.length ? ", " + e.metadata.join(", ") : ""}`,
    ...e.values.map((v) => `  ${v.name} = ${v.value}`)].join("\n");

// ---- convars / commands ---------------------------------------------------

const listFilter = {
  query: z.string().optional().describe("substring of the name or help text"),
  libraries: z.array(z.string()).optional().describe("registering library, any of (e.g. client, server, engine2, soundsystem)"),
  flags: z.array(z.string()).optional().describe("must have ALL of these flags (e.g. cheat, replicated, release)"),
  exclude_flags: z.array(z.string()).optional().describe("must have NONE of these flags (e.g. hidden, developmentonly)"),
  limit: z.number().int().min(1).max(200).default(50),
  offset: z.number().int().min(0).default(0),
};
type ListArgs = { query?: string; libraries?: string[]; flags?: string[]; exclude_flags?: string[] };
function applyListFilter<T extends { name: string; help: string; module: string; flags: string[] }>(rows: T[], a: ListArgs): T[] {
  const q = a.query?.toLowerCase();
  const libs = a.libraries?.map((l) => l.toLowerCase());
  let out = rows.filter((r) =>
    (!q || r.name.toLowerCase().includes(q) || r.help.toLowerCase().includes(q)) &&
    (!libs?.length || libs.includes(r.module.toLowerCase())) &&
    (a.flags ?? []).every((f) => r.flags.includes(f)) &&
    !(a.exclude_flags ?? []).some((f) => r.flags.includes(f)));
  if (q) out = [...best(out.filter((r) => r.name.toLowerCase().includes(q)), (r) => r.name, q), ...out.filter((r) => !r.name.toLowerCase().includes(q))];
  return out;
}
const convarLine = (c: ConVar) => {
  const bounds = c.minValue || c.maxValue ? ` [${c.minValue || "…"}..${c.maxValue || "…"}]` : "";
  return `${c.name} = ${c.defaultValue || '""'}${bounds} (${c.type || "?"}) · ${c.module} · ${c.flags.join(" ") || "-"}${c.help ? "\n    " + c.help : ""}`;
};
const commandLine = (c: ConCommand) => `${c.name} · ${c.module} · ${c.flags.join(" ") || "-"}${c.help ? "\n    " + c.help : ""}`;

// ---- vscript ----------------------------------------------------------------

const signature = (f: ScriptFunction, owner?: string) =>
  `${f.returnType} ${owner ? owner + "." : ""}${f.name}(${f.params.map((p) => (p.name ? `${p.type} ${p.name}` : p.type)).join(", ")})${f.description ? "  // " + f.description : ""}`;

// ---- registration -----------------------------------------------------------

export function registerTools(server: McpServer) {
  server.registerTool("get_version", {
    title: "Dump versions",
    description: "Game patch version, dump statistics and schema modules for each game/platform. Call first to see what is available.",
    inputSchema: z.object({ game: z.enum(GAMES).optional().describe("omit for all games") }),
    annotations: READ_ONLY,
  }, async ({ game }) => {
    const lines: string[] = [];
    for (const g of game ? [game] : GAMES) {
      for (const p of PLATFORMS) {
        try {
          const m = await loadMeta(g, p);
          lines.push(`${g} ${p}: patch ${m.patchVersion || "?"} (server ${m.serverVersion || "?"}) · ${m.classes} classes, ${m.enums} enums, ${m.networkFields} networked fields, ${m.convars} convars, ${m.concommands} commands, ${m.events} events`);
          lines.push(`  modules: ${m.scopes.map((s) => `${s.scope} ${s.classes + s.enums}`).join(", ")}`);
        } catch (e) {
          if (!(e instanceof NotDumped)) throw e;
          lines.push(`${g} ${p}: no dump`);
        }
      }
    }
    return reply(lines.join("\n"));
  });

  server.registerTool("search", {
    title: "Search everything",
    description: "Find types, fields, convars, commands, game events and vscript API by name substring in one call. Use the specific tools afterwards for details.",
    inputSchema: z.object({ query: z.string().min(2), ...target, limit: z.number().int().min(1).max(50).default(10).describe("per category") }),
    annotations: READ_ONLY,
  }, async ({ query, game, platform, limit }) => guarded(game, platform, async () => {
    const q = query.toLowerCase();
    const [index, convars, commands, events, vs, pb] = await Promise.all([
      loadIndex(game, platform), loadConVars(game, platform), loadConCommands(game, platform),
      loadEvents(game, platform), loadScriptApi(game, platform).catch(() => null), loadProtobufs(game).catch(() => null),
    ]);
    const out: string[] = [];
    const section = <T>(title: string, items: T[], line: (t: T) => string) => {
      if (!items.length) return;
      out.push(`## ${title} (${items.length}${items.length > limit ? `, first ${limit}` : ""})`, ...items.slice(0, limit).map(line), "");
    };
    section("types", best(index, (e) => e.name, q), (e) => `${e.kind} ${e.name}${e.parent ? " : " + e.parent : ""} · ${e.scope} · ${e.nf} fields`);
    const fields: { cls: string; scope: string; name: string; off: string }[] = [];
    for (const e of index) {
      if (!e.fields.toLowerCase().includes(q)) continue;
      const names = e.fields.split(" "), offs = e.offsets.split(" ");
      names.forEach((n, i) => { if (n.toLowerCase().includes(q)) fields.push({ cls: e.name, scope: e.scope, name: n, off: offs[i] ?? "?" }); });
    }
    section("fields", best(fields, (f) => f.name, q), (f) => `${f.cls}::${f.name} @ ${f.off} · ${f.scope}`);
    section("convars", best(convars, (c) => c.name, q), (c) => `${c.name} = ${c.defaultValue || '""'} · ${c.module}`);
    section("commands", best(commands, (c) => c.name, q), (c) => `${c.name} · ${c.module}`);
    section("events", best(events, (e) => e.name, q), (e) => `${e.name} (${e.module}) · ${e.fields.length} fields`);
    if (vs) {
      const fns = [...vs.functions.map((f) => ({ f, owner: "" })), ...vs.classes.flatMap((c) => c.functions.map((f) => ({ f, owner: c.scriptName })))];
      section("vscript functions", best(fns, (x) => x.f.name, q), (x) => signature(x.f, x.owner || undefined));
      section("vscript classes", best(vs.classes, (c) => c.scriptName, q), (c) => `${c.scriptName}${c.base ? " : " + c.base : ""} · ${c.functions.length} functions`);
      section("vscript constants", best(vs.constants, (c) => c.name, q), (c) => `${c.name} = ${c.value}`);
    }
    if (pb) section("protobufs", best(pb.types, (t) => t.name, q), (t) => `${t.kind} ${t.name} · ${t.file} · ${(t.fields ?? t.values ?? []).length} ${t.kind === "enum" ? "values" : "fields"}`);
    return reply(out.length ? `${game} ${platform}, query "${query}"\n\n${out.join("\n")}` : `Nothing matches "${query}" in ${game} ${platform}.`);
  }));

  server.registerTool("get_type", {
    title: "Get class / struct / enum",
    description: "Full schema of a class, struct or enum: fields with offsets (hex), types, sizes, networked flag and metadata; enums list their values. Optionally includes inherited fields and the entity datamap (inputs/outputs/keyfields).",
    inputSchema: z.object({
      name: z.string().describe("exact type name, e.g. C_CSPlayerPawn, CCSPlayerController, EntityFlags_t"),
      module: z.string().optional().describe("module when the type exists in several (e.g. server, client.dll)"),
      ...target,
      include_inherited: z.boolean().default(false).describe("also list fields of every base class"),
      include_datamap: z.boolean().default(false).describe("also list the datamap (entity I/O and keyfields)"),
    }),
    annotations: READ_ONLY,
  }, async ({ name, module, game, platform, include_inherited, include_datamap }) => guarded(game, platform, async () => {
    const index = await loadIndex(game, platform);
    const { chosen, all } = pickBinding(index, name, module);
    if (!chosen) {
      const near = similar([...new Set(index.map((e) => e.name))], name, 15);
      return fail(`No type named "${name}" in ${game} ${platform}.${near.length ? " Did you mean: " + near.join(", ") : ""}`);
    }
    const scope = await loadScope(game, platform, chosen.file);
    const others = all.filter((e) => e !== chosen).map((e) => e.scope);
    const note = others.length ? `\n(also bound in: ${others.join(", ")} — pass \`module\` to pick one)` : "";
    if (chosen.kind === "enum") {
      const en = scope.enums.find((e) => e.name === chosen.name)!;
      return reply(enumText(en, chosen.scope) + note);
    }
    const cls = scope.classes.find((c) => c.name === chosen.name)!;
    const parts = [classText(cls, chosen.scope)];
    const chain = await chainOf(game, platform, index, cls, chosen.scope);
    if (chain.length > 1) parts.push(`inheritance: ${chain.map((c) => c.name).join(" > ")}`);
    if (include_inherited) {
      for (const base of chain.slice(1)) parts.push(`\ninherited from ${base.name} (${base.fields.length}):\n${base.fields.map(fieldLine).join("\n")}`);
    }
    if (include_datamap && cls.datamap.length) {
      parts.push(`\ndatamap (${cls.datamap.length}):\n` + cls.datamap.map((d) => `  ${d.kind.padEnd(8)} ${d.name}${d.target ? " -> " + d.target : ""} (${d.type})`).join("\n"));
    }
    return reply(parts.join("\n") + note);
  }));

  server.registerTool("get_field_offset", {
    title: "Field offset",
    description: "Offset of one field, searched in the class and all of its base classes, e.g. C_CSPlayerPawn::m_iHealth.",
    inputSchema: z.object({
      class_name: z.string().describe("class that has (or inherits) the field"),
      field: z.string().describe("field name, e.g. m_iHealth"),
      module: z.string().optional(),
      ...target,
    }),
    annotations: READ_ONLY,
  }, async ({ class_name, field, module, game, platform }) => guarded(game, platform, async () => {
    const index = await loadIndex(game, platform);
    const { chosen } = pickBinding(index, class_name, module);
    if (!chosen || chosen.kind === "enum") {
      const near = similar([...new Set(index.filter((e) => e.kind !== "enum").map((e) => e.name))], class_name, 10);
      return fail(`No class named "${class_name}" in ${game} ${platform}.${near.length ? " Did you mean: " + near.join(", ") : ""}`);
    }
    const cls = (await loadScope(game, platform, chosen.file)).classes.find((c) => c.name === chosen.name)!;
    const chain = await chainOf(game, platform, index, cls, chosen.scope);
    const fl = field.toLowerCase();
    for (const c of chain) {
      const f = c.fields.find((x) => x.name === field) ?? c.fields.find((x) => x.name.toLowerCase() === fl);
      if (f) {
        const tags = [f.networked ? "networked" : "", f.bits ? `bitfield ${f.bits} bits` : "", ...f.metadata].filter(Boolean);
        return reply(`${chosen.name}::${f.name} @ ${hex(f.offset)} (${f.offset}) · ${f.type}, size ${f.size}${c !== cls ? ` · declared in ${c.name}` : ""} · ${chosen.scope} ${game} ${platform}${tags.length ? "\n" + tags.join(" · ") : ""}`);
      }
    }
    const owner = new Map(chain.flatMap((c) => c.fields.map((x) => [x.name, `${c.name}::${x.name} @ ${hex(x.offset)}`] as const)));
    const near = similar([...owner.keys()], field, 10).map((n) => owner.get(n)!);
    return fail(`${chosen.name} has no field "${field}" (searched ${chain.length} classes).${near.length ? " Did you mean: " + near.join(", ") : ""}`);
  }));

  server.registerTool("list_convars", {
    title: "List convars",
    description: "Console variables with default/min/max, type, registering library, flags and help. Filter by text, libraries (any), flags (all) and excluded flags.",
    inputSchema: z.object({ ...listFilter, ...target }),
    annotations: READ_ONLY,
  }, async ({ game, platform, limit, offset, ...f }) => guarded(game, platform, async () => {
    const rows = applyListFilter(await loadConVars(game, platform), f);
    const shown = page(rows, offset, limit);
    return reply([`${game} ${platform} convars: ${range(rows.length, offset, shown.length)}`, rows.length ? `by library: ${countBy(rows, (r) => r.module)}` : "", "", ...shown.map(convarLine)].join("\n"));
  }));

  server.registerTool("list_commands", {
    title: "List console commands",
    description: "Console commands with registering library, flags and help. Same filters as list_convars.",
    inputSchema: z.object({ ...listFilter, ...target }),
    annotations: READ_ONLY,
  }, async ({ game, platform, limit, offset, ...f }) => guarded(game, platform, async () => {
    const rows = applyListFilter(await loadConCommands(game, platform), f);
    const shown = page(rows, offset, limit);
    return reply([`${game} ${platform} commands: ${range(rows.length, offset, shown.length)}`, rows.length ? `by library: ${countBy(rows, (r) => r.module)}` : "", "", ...shown.map(commandLine)].join("\n"));
  }));

  server.registerTool("get_events", {
    title: "Game events",
    description: "Game events (game.gameevents / mod / core) with their fields and types. Exact name returns one event; otherwise a substring search.",
    inputSchema: z.object({
      query: z.string().optional().describe("event name or substring, e.g. player_death"),
      module: z.enum(["game", "mod", "core"]).optional(),
      ...target,
      limit: z.number().int().min(1).max(100).default(20),
    }),
    annotations: READ_ONLY,
  }, async ({ query, module, game, platform, limit }) => guarded(game, platform, async () => {
    let rows = (await loadEvents(game, platform)).filter((e) => !module || e.module === module);
    if (query) {
      const exact = rows.filter((e) => e.name === query);
      rows = exact.length ? exact : best(rows, (e) => e.name, query);
    }
    if (!rows.length) return fail(`No game events match${query ? ` "${query}"` : ""} in ${game} ${platform}.`);
    const text = rows.slice(0, limit).map((e) => [`${e.name} (${e.module})`, ...e.fields.map((f) => `  ${f.type} ${f.name}`)].join("\n"));
    return reply(`${game} ${platform} events: ${rows.length}${rows.length > limit ? `, first ${limit}` : ""}\n\n${text.join("\n\n")}`);
  }));

  server.registerTool("get_vscript", {
    title: "VScript API",
    description: "Script API bindings: global functions, classes with their methods (an exact class name lists every method), instances and constants.",
    inputSchema: z.object({
      query: z.string().describe("function, class, instance or constant name or substring"),
      kind: z.enum(["any", "function", "class", "instance", "constant"]).default("any"),
      ...target,
      limit: z.number().int().min(1).max(100).default(30),
    }),
    annotations: READ_ONLY,
  }, async ({ query, kind, game, platform, limit }) => guarded(game, platform, async () => {
    const vs = await loadScriptApi(game, platform);
    const q = query.toLowerCase();
    const out: string[] = [];
    const want = (k: string) => kind === "any" || kind === k;
    if (want("class")) {
      const exact = vs.classes.find((c) => c.scriptName.toLowerCase() === q || c.name.toLowerCase() === q);
      if (exact) {
        out.push(`class ${exact.scriptName} (C++ ${exact.name})${exact.base ? " : " + exact.base : ""}${exact.description ? "  // " + exact.description : ""}`,
          ...exact.functions.map((f) => "  " + signature(f)), "");
      }
      const cls = best(vs.classes, (c) => c.scriptName, q).filter((c) => c !== exact).slice(0, limit);
      if (cls.length) out.push("## classes", ...cls.map((c) => `${c.scriptName}${c.base ? " : " + c.base : ""} · ${c.functions.length} functions${c.description ? " · " + c.description : ""}`), "");
    }
    if (want("function")) {
      const fns = [...vs.functions.map((f) => ({ f, owner: "" })), ...vs.classes.flatMap((c) => c.functions.map((f) => ({ f, owner: c.scriptName })))];
      const hits = best(fns, (x) => x.f.name, q);
      if (hits.length) out.push(`## functions (${hits.length})`, ...hits.slice(0, limit).map((x) => signature(x.f, x.owner || undefined)), "");
    }
    if (want("instance")) {
      const hits = best(vs.instances, (i) => i.name, q);
      if (hits.length) out.push("## instances", ...hits.slice(0, limit).map((i) => `${i.name}: ${i.className}`), "");
    }
    if (want("constant")) {
      const hits = best(vs.constants, (c) => c.name, q);
      if (hits.length) out.push(`## constants (${hits.length})`, ...hits.slice(0, limit).map((c) => `${c.name} = ${c.value} (${c.type})`), "");
    }
    return out.length ? reply(out.join("\n")) : fail(`Nothing in the ${game} ${platform} vscript API matches "${query}".`);
  }));

  const gameOnly = { game: z.enum(GAMES).default("cs2").describe("cs2 | dota2 | deadlock") };

  server.registerTool("search_protobufs", {
    title: "Search protobufs",
    description: "Find protobuf messages, enums and services (GC, network, user messages, demo) by name, or by a field / enum value name. Definitions come from SteamTracking/Protobufs and are the same for win64 and linux.",
    inputSchema: z.object({ query: z.string().min(2), ...gameOnly, limit: z.number().int().min(1).max(100).default(30) }),
    annotations: READ_ONLY,
  }, async ({ query, game, limit }) => withProtobufs(game, async (pb) => {
    const q = query.toLowerCase();
    const byName = best(pb.types, (t) => t.name, q);
    const named = new Set(byName);
    const byMember = pb.types.filter((t) => !named.has(t) && (t.fields ?? t.values ?? []).some((m) => m.name.toLowerCase().includes(q)));
    const svcs = pb.services.filter((s) => s.name.toLowerCase().includes(q) || s.methods.some((m) => m.name.toLowerCase().includes(q)));
    const line = (t: ProtoType) => {
      const members = (t.fields ?? t.values ?? []).filter((m) => m.name.toLowerCase().includes(q)).map((m) => m.name);
      return `${t.kind} ${t.name} · ${t.file} · ${(t.fields ?? t.values ?? []).length} ${t.kind === "enum" ? "values" : "fields"}${members.length ? ` · matches ${members.slice(0, 6).join(", ")}` : ""}`;
    };
    const out = [`${game} protobufs (${sourceOf(pb)})`];
    if (byName.length) out.push(`\n## by name (${byName.length})`, ...byName.slice(0, limit).map(line));
    if (byMember.length) out.push(`\n## by field / value name (${byMember.length})`, ...byMember.slice(0, limit).map(line));
    if (svcs.length) out.push(`\n## services`, ...svcs.map((s) => `service ${s.name} · ${s.file} · ${s.methods.length} rpcs`));
    return out.length > 1 ? reply(out.join("\n")) : fail(`No ${game} protobuf definition matches "${query}".`);
  }));

  server.registerTool("get_protobuf", {
    title: "Get protobuf definition",
    description: "One protobuf message, enum or service as .proto source (field numbers, labels, types, defaults, oneofs, descriptions), plus which messages and RPCs use it.",
    inputSchema: z.object({ name: z.string().describe("message / enum / service name; nested types as Outer.Inner"), ...gameOnly }),
    annotations: READ_ONLY,
  }, async ({ name, game }) => withProtobufs(game, async (pb) => {
    const nl = name.toLowerCase().replace(/^\./, "");
    const t = pb.types.find((x) => x.name === name) ?? pb.types.find((x) => x.name.toLowerCase() === nl);
    const s = t ? undefined : pb.services.find((x) => x.name.toLowerCase() === nl);
    if (!t && !s) {
      const near = similar([...pb.types.map((x) => x.name), ...pb.services.map((x) => x.name)], name, 12);
      return fail(`No ${game} protobuf named "${name}".${near.length ? " Did you mean: " + near.join(", ") : ""}`);
    }
    if (s) return reply(`// ${s.file} · ${sourceOf(pb)}\n${serviceProto(s)}`);
    const used: string[] = [];
    for (const m of pb.types) for (const f of m.fields ?? []) if (f.ref === t!.name) used.push(`${m.name}.${f.name}`);
    for (const sv of pb.services) for (const m of sv.methods) {
      if (m.requestRef === t!.name) used.push(`rpc ${sv.name}.${m.name} (request)`);
      if (m.responseRef === t!.name) used.push(`rpc ${sv.name}.${m.name} (response)`);
    }
    return reply(`// ${t!.file} · ${sourceOf(pb)}\n${typeProto(t!)}${used.length ? `\n\nused by (${used.length}): ${used.slice(0, 40).join(", ")}${used.length > 40 ? ", …" : ""}` : ""}`);
  }));
}

// ---- protobufs ----------------------------------------------------------------

async function withProtobufs(g: Game, run: (pb: Protobufs) => Promise<Reply>): Promise<Reply> {
  try {
    return await run(await loadProtobufs(g));
  } catch (e) {
    if (e instanceof NotDumped) return fail(`No protobuf definitions are published for ${g} yet.`);
    throw e;
  }
}
const sourceOf = (pb: Protobufs) => `${pb.source.repo}/${pb.source.path}${pb.source.commit ? "@" + pb.source.commit.slice(0, 7) : ""}`;
const protoComment = (c?: string) => (c ? `  // ${c.replace(/\n/g, " ")}` : "");
function typeProto(t: ProtoType): string {
  const short = t.name.split(".").pop();
  const head = t.comment ? t.comment.split("\n").map((l) => `// ${l}`).join("\n") + "\n" : "";
  if (t.kind === "enum") {
    return `${head}enum ${short} {\n${t.values!.map((v) => `  ${v.name} = ${v.value};${protoComment(v.comment)}`).join("\n")}\n}`;
  }
  const fields = t.fields!.map((f) => {
    const def = f.default !== undefined ? ` [default = ${f.default}]` : "";
    const oneof = f.oneof ? `  // oneof ${f.oneof}` : "";
    return `  ${f.rule ? f.rule + " " : ""}${f.type.replace(/^\./, "")} ${f.name} = ${f.id}${def};${oneof}${protoComment(f.comment)}`;
  });
  return `${head}message ${short} {\n${fields.join("\n")}\n}`;
}
const serviceProto = (s: ProtoService) =>
  `${s.comment ? `// ${s.comment}\n` : ""}service ${s.name} {\n${s.methods.map((m) => `  rpc ${m.name} (${m.request.replace(/^\./, "")}) returns (${m.response.replace(/^\./, "")});${protoComment(m.comment)}`).join("\n")}\n}`;

export const INSTRUCTIONS = `Source 2 engine data dumped offline from the game binaries of Counter-Strike 2, Dota 2 and Deadlock
(Windows win64 and Linux), refreshed on every game update: schema classes/structs/enums with field offsets,
console variables and commands, game events and the VScript API, plus the game's protobuf definitions (GC,
network and user messages) from SteamTracking/Protobufs. Offsets are only valid for the patch that get_version
reports and can differ between win64 and linux. Start with \`search\` when unsure of a name, then use
get_type / get_field_offset / list_convars / list_commands / get_events / get_vscript / search_protobufs /
get_protobuf. Tools take \`game\` (default cs2) and, except the protobuf ones, \`platform\` (default win64).`;
