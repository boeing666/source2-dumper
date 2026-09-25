// Unified search over every section: schema types + fields (from the compact index), convars, commands,
// game events and the vscript API. One query string, results grouped per section.
import type { ConCommand, ConVar, GameEvent, IndexEntry, ScriptApi, ScriptClass, ScriptFunction } from "@/types";

export type PrepEntry = { e: IndexEntry; names: string[]; lower: string[]; offs: number[] };

// split the index's space-joined field/offset strings once, not on every keystroke
export function prepIndex(index: IndexEntry[]): PrepEntry[] {
  return index.map((e) => {
    const names = e.kind === "enum" || !e.fields ? [] : e.fields.split(" ");
    const offs = e.kind === "enum" || !e.offsets ? [] : e.offsets.split(" ").map((o) => parseInt(o, 16));
    return { e, names, lower: names.map((n) => n.toLowerCase()), offs };
  });
}

// "720" / "0x2D0" -> offset search
export function parseOffset(q: string): number | null {
  const s = q.trim();
  if (/^0x[0-9a-f]+$/i.test(s)) return parseInt(s, 16);
  if (/^\d+$/.test(s)) return parseInt(s, 10);
  return null;
}

export type Hit =
  | { k: "field"; entry: IndexEntry; field: string; off: number }
  | { k: "type"; entry: IndexEntry }
  | { k: "convar"; cv: ConVar }
  | { k: "command"; cc: ConCommand }
  | { k: "event"; ev: GameEvent; fields: string[] }
  | { k: "vsfn"; fn: ScriptFunction; cls: ScriptClass | null }
  | { k: "vscls"; cls: ScriptClass }
  | { k: "vsconst"; name: string; type: string; value: string };

export type GroupKey = "fields" | "types" | "convars" | "commands" | "events" | "vscript";
export type Group = { key: GroupKey; title: string; total: number; hits: Hit[] };

export const GROUP_TAB: Record<GroupKey, string> = {
  fields: "schema", types: "schema", convars: "convars", commands: "concommands", events: "events", vscript: "vscript",
};

const LIMIT = 60;

// best-first: exact, prefix (ignoring the m_ / m_fl... hungarian prefix), substring; shorter names first
function rank(name: string, ql: string): number {
  if (name === ql) return 0;
  if (name.startsWith(ql)) return 1;
  const bare = name.replace(/^m_[a-z]*(?=[A-Z])/, "").toLowerCase();
  if (bare.startsWith(ql)) return 2;
  return 3;
}
function top<T>(items: T[], score: (t: T) => number, len: (t: T) => number): T[] {
  return items.sort((a, b) => score(a) - score(b) || len(a) - len(b)).slice(0, LIMIT);
}

export function searchSchema(prep: PrepEntry[], q: string): { fields: Group; types: Group; matched: Set<IndexEntry> } {
  const matched = new Set<IndexEntry>();
  const fields: Extract<Hit, { k: "field" }>[] = [];
  const types: Extract<Hit, { k: "type" }>[] = [];
  let nf = 0;
  const off = parseOffset(q);
  if (off != null) {
    for (const p of prep) {
      const i = p.offs.indexOf(off);
      if (i < 0) continue;
      matched.add(p.e); nf++;
      if (fields.length < 500) fields.push({ k: "field", entry: p.e, field: p.names[i], off });
    }
  } else {
    const ql = q.trim().toLowerCase();
    for (const p of prep) {
      if (p.e.name.toLowerCase().includes(ql)) { types.push({ k: "type", entry: p.e }); matched.add(p.e); }
      for (let i = 0; i < p.lower.length; i++) {
        if (!p.lower[i].includes(ql)) continue;
        nf++; matched.add(p.e);
        if (fields.length < 4000) fields.push({ k: "field", entry: p.e, field: p.names[i], off: p.offs[i] });
      }
    }
  }
  const ql = q.trim().toLowerCase();
  const fr = off != null ? fields.slice(0, LIMIT) : top(fields, (h) => rank(h.field.toLowerCase(), ql) * 2 + (h.entry.scope === "server.dll" || h.entry.scope === "client.dll" ? 0 : 1), (h) => h.field.length + h.entry.name.length / 100);
  const tr = top(types, (h) => rank(h.entry.name.toLowerCase(), ql), (h) => h.entry.name.length);
  return {
    fields: { key: "fields", title: "Fields", total: nf, hits: fr },
    types: { key: "types", title: "Types", total: types.length, hits: tr },
    matched,
  };
}

// schema list filter shared by the schema tab and the section counter
export function schemaMatches(prep: PrepEntry[], q: string): Set<IndexEntry> | null {
  return q.trim() ? searchSchema(prep, q).matched : null;
}

const hasQ = (s: string, ql: string) => s.toLowerCase().includes(ql);

export function searchConVars(rows: ConVar[], q: string): Group {
  const ql = q.trim().toLowerCase();
  const hits = rows.filter((r) => hasQ(r.name, ql) || hasQ(r.help, ql));
  return { key: "convars", title: "ConVars", total: hits.length,
    hits: top(hits, (r) => (hasQ(r.name, ql) ? rank(r.name.toLowerCase(), ql) : 9), (r) => r.name.length).map((cv) => ({ k: "convar", cv })) };
}

export function searchCommands(rows: ConCommand[], q: string): Group {
  const ql = q.trim().toLowerCase();
  const hits = rows.filter((r) => hasQ(r.name, ql) || hasQ(r.help, ql));
  return { key: "commands", title: "Commands", total: hits.length,
    hits: top(hits, (r) => (hasQ(r.name, ql) ? rank(r.name.toLowerCase(), ql) : 9), (r) => r.name.length).map((cc) => ({ k: "command", cc })) };
}

export function searchEvents(rows: GameEvent[], q: string): Group {
  const ql = q.trim().toLowerCase();
  const hits: Extract<Hit, { k: "event" }>[] = [];
  for (const ev of rows) {
    const fs = ev.fields.filter((f) => hasQ(f.name, ql)).map((f) => f.name);
    if (hasQ(ev.name, ql) || fs.length) hits.push({ k: "event", ev, fields: fs });
  }
  return { key: "events", title: "Events", total: hits.length,
    hits: top(hits, (h) => (hasQ(h.ev.name, ql) ? rank(h.ev.name, ql) : 9), (h) => h.ev.name.length) };
}

export function searchScript(api: ScriptApi, q: string): Group {
  const ql = q.trim().toLowerCase();
  const hits: Hit[] = [];
  for (const c of api.classes) {
    if (hasQ(c.name, ql) || hasQ(c.scriptName, ql)) hits.push({ k: "vscls", cls: c });
    for (const fn of c.functions) if (hasQ(fn.name, ql)) hits.push({ k: "vsfn", fn, cls: c });
  }
  for (const fn of api.functions) if (hasQ(fn.name, ql)) hits.push({ k: "vsfn", fn, cls: null });
  for (const c of api.constants) if (hasQ(c.name, ql)) hits.push({ k: "vsconst", ...c });
  const nameOf = (h: Hit) => (h.k === "vscls" ? h.cls.name : h.k === "vsfn" ? h.fn.name : h.k === "vsconst" ? h.name : "");
  return { key: "vscript", title: "VScript", total: hits.length,
    hits: top(hits, (h) => rank(nameOf(h).toLowerCase(), ql), (h) => nameOf(h).length) };
}

// stable identity for keyboard selection / preview
export function hitKey(h: Hit): string {
  switch (h.k) {
    case "field": return `f:${h.entry.scope}:${h.entry.name}:${h.field}`;
    case "type": return `t:${h.entry.scope}:${h.entry.name}`;
    case "convar": return `cv:${h.cv.name}`;
    case "command": return `cc:${h.cc.name}`;
    case "event": return `ev:${h.ev.module}:${h.ev.name}`;
    case "vsfn": return `vf:${h.cls?.name ?? ""}:${h.fn.name}`;
    case "vscls": return `vc:${h.cls.name}`;
    case "vsconst": return `vk:${h.name}`;
  }
}

export const vsTotal = (api: ScriptApi) => api.functions.length + api.classes.reduce((n, c) => n + c.functions.length, 0);
