import { useEffect, useMemo, useRef, useState } from "react";
import {
  PLATFORMS,
  type Platform,
  loadMeta,
  loadIndex,
  loadScope,
  loadConVars,
  loadConCommands,
} from "@/lib/data";
import type {
  Meta,
  IndexEntry,
  Scope,
  ClassInfo,
  EnumInfo,
  Field,
  ConVar,
  ConCommand,
} from "@/types";
import { Tabs, TabsList, TabsTrigger, TabsContent } from "@/components/ui/tabs";
import { Switch } from "@/components/ui/switch";
import { Select, SelectTrigger, SelectValue, SelectContent, SelectItem } from "@/components/ui/select";
import { Command, CommandInput, CommandList, CommandItem } from "@/components/ui/command";
import { Tooltip, TooltipTrigger, TooltipContent, TooltipProvider } from "@/components/ui/tooltip";

// ---------------------------------------------------------------- helpers ----
const nv = (n: number, hex: boolean) =>
  hex ? (n < 0 ? "-0x" + (-n).toString(16) : "0x" + n.toString(16)) : String(n);

type Cat = "cptr" | "ctmpl" | "cprim" | "cagg" | "cpad";
function catVar(type: string): Cat {
  if (type.includes("*")) return "cptr";
  if (type.includes("<")) return "ctmpl";
  const base = type.replace(/\s+/g, "");
  if (/^(void|bool|char|short|int|long|float|double|unsigned|signed|w?char_t|u?int\d*(_t)?|float\d+|size_t)$/.test(base))
    return "cprim";
  return "cagg";
}
const barW = (size: number) => Math.max(20, Math.min(160, size * 6));

const Arr = () => (
  <svg className="ar" viewBox="0 0 24 24" fill="none" stroke="currentColor" strokeWidth="2.4" strokeLinecap="round" strokeLinejoin="round">
    <path d="M4 12h13M12 6l6 6-6 6" />
  </svg>
);

function TypeText({ type, known, onNav }: { type: string; known: Set<string>; onNav: (n: string) => void }) {
  const parts = type.match(/([A-Za-z_][\w:]*|[^A-Za-z_]+)/g) ?? [type];
  return (
    <>
      {parts.map((p, i) =>
        /^[A-Za-z_]/.test(p) && known.has(p) ? (
          <a key={i} className="ty" onClick={() => onNav(p)}>{p}</a>
        ) : (
          <span key={i}>{p}</span>
        )
      )}
    </>
  );
}

type Row = { field?: Field; pad?: number; offset: number; size: number };
function layout(fields: Field[], classSize: number): Row[] {
  const rows: Row[] = [];
  let cursor = 0;
  for (const f of [...fields].sort((a, b) => a.offset - b.offset)) {
    if (f.offset > cursor) rows.push({ pad: f.offset - cursor, offset: cursor, size: f.offset - cursor });
    rows.push({ field: f, offset: f.offset, size: f.size });
    cursor = Math.max(cursor, f.offset + f.size);
  }
  if (classSize > cursor) rows.push({ pad: classSize - cursor, offset: cursor, size: classSize - cursor });
  return rows;
}

// ---------------------------------------------------------------- search -----
type Suggestion =
  | { kind: "type"; entry: IndexEntry }
  | { kind: "field"; entry: IndexEntry; field: string }
  | { kind: "offset"; entry: IndexEntry; field: string; off: string };

function buildSuggestions(q: string, index: IndexEntry[]): Suggestion[] {
  const s = q.trim();
  if (!s) return [];
  const offMatch = /^0x([0-9a-fA-F]+)$/.exec(s) || /^(\d+)$/.exec(s);
  if (offMatch) {
    const n = s.startsWith("0x") ? parseInt(offMatch[1], 16) : parseInt(offMatch[1], 10);
    const hex = "0x" + n.toString(16);
    const out: Suggestion[] = [];
    for (const e of index) {
      if (e.kind === "enum") continue;
      const idx = e.offsets.split(" ").indexOf(hex);
      if (idx >= 0) {
        out.push({ kind: "offset", entry: e, field: e.fields.split(" ")[idx] ?? "", off: hex });
        if (out.length >= 60) break;
      }
    }
    return out;
  }
  const ql = s.toLowerCase();
  const typeHits = index
    .map((e) => ({ e, pos: e.name.toLowerCase().indexOf(ql) }))
    .filter((x) => x.pos >= 0)
    .sort((a, b) => a.pos - b.pos || a.e.name.length - b.e.name.length)
    .slice(0, 40)
    .map((x): Suggestion => ({ kind: "type", entry: x.e }));
  const fieldHits: Suggestion[] = [];
  if (typeHits.length < 40) {
    for (const e of index) {
      if (e.kind === "enum") continue;
      const f = e.fields.split(" ").find((x) => x.toLowerCase().includes(ql));
      if (f) fieldHits.push({ kind: "field", entry: e, field: f });
      if (fieldHits.length >= 25) break;
    }
  }
  return [...typeHits, ...fieldHits];
}

function SearchBox({ index, query, setQuery, onPick, autoFocus }: {
  index: IndexEntry[];
  query: string;
  setQuery: (v: string) => void;
  onPick: (e: IndexEntry, field?: string) => void;
  autoFocus?: boolean;
}) {
  const [open, setOpen] = useState(false);
  const suggestions = useMemo(() => buildSuggestions(query, index), [query, index]);
  const pick = (s: Suggestion) => { setOpen(false); onPick(s.entry, "field" in s ? s.field : undefined); };
  const kbCls = (k: string) => (k === "enum" ? "kb-enum" : k === "struct" ? "kb-struct" : "kb-class");
  const kbLtr = (k: string) => (k === "enum" ? "E" : k === "struct" ? "S" : "C");
  // what the row matched on, for the badge/label
  const rowKind = (s: Suggestion) => (s.kind === "type" ? s.entry.kind : s.kind);
  return (
    <Command shouldFilter={false} loop className="overflow-visible bg-transparent">
      <CommandInput
        autoFocus={autoFocus}
        value={query}
        onValueChange={(v) => { setQuery(v); setOpen(true); }}
        onFocus={() => setOpen(true)}
        onBlur={() => setTimeout(() => setOpen(false), 150)}
        placeholder="search…"
      />
      {open && suggestions.length > 0 && (
        <div className="suggpop">
          <CommandList>
            {suggestions.map((s, i) => (
              <CommandItem key={i} value={String(i)} onSelect={() => pick(s)} className="s-it">
                <span className={"kb " + kbCls(s.entry.kind)}>{kbLtr(s.entry.kind)}</span>
                <span className="s-n">
                  {s.entry.name}
                  {s.kind === "field" && <span className="s-f">::{s.field}</span>}
                  {s.kind === "offset" && <span className="s-f"> {s.off} {s.field}</span>}
                </span>
                <span className={"s-tag t-" + rowKind(s)}>{rowKind(s)}</span>
                <span className="s-m">{s.entry.scope}</span>
              </CommandItem>
            ))}
          </CommandList>
        </div>
      )}
    </Command>
  );
}

// ---------------------------------------------------------------- top bar ----
function TopBar({
  meta, platform, setPlatform, hex, setHex, pad, setPad,
}: {
  meta: Meta | null;
  platform: Platform;
  setPlatform: (p: Platform) => void;
  hex: boolean;
  setHex: (v: boolean) => void;
  pad: boolean;
  setPad: (v: boolean) => void;
}) {
  const pill = "cursor-pointer rounded-md bg-secondary px-3 py-1 text-[13px] font-normal text-muted-foreground hover:text-foreground data-[state=active]:bg-primary data-[state=active]:text-white data-[state=active]:shadow-none";
  return (
    <div className="top">
      <span className="brand">Source 2 Schema</span>
      <span className="sp" />
      <span className="ver">
        {meta ? `PatchVersion ${meta.patchVersion} · ServerVersion ${meta.serverVersion}` : "…"}
      </span>
      <label className={"tgl" + (pad ? " on" : "")} title="show padding fields">
        <Switch checked={pad} onCheckedChange={(v) => setPad(!!v)} />padding
      </label>
      <label className={"tgl" + (hex ? " on" : "")} title="show all numbers as hex">
        <Switch checked={hex} onCheckedChange={(v) => setHex(!!v)} />hex
      </label>
      <TabsList className="ml-1 h-auto gap-1.5 rounded-none bg-transparent p-0">
        <TabsTrigger className={pill} value="schema">schema</TabsTrigger>
        <TabsTrigger className={pill} value="convars">convars{meta ? " " + meta.convars : ""}</TabsTrigger>
        <TabsTrigger className={pill} value="concommands">commands{meta ? " " + meta.concommands : ""}</TabsTrigger>
      </TabsList>
      <Tabs value={platform} onValueChange={(v) => setPlatform(v as Platform)}>
        <TabsList className="h-auto gap-1.5 rounded-none bg-transparent p-0">
          {PLATFORMS.map((p) => <TabsTrigger key={p} className={pill} value={p}>{p}</TabsTrigger>)}
        </TabsList>
      </Tabs>
    </div>
  );
}

// ---------------------------------------------------------------- home -------
const SORTS: [string, string][] = [
  ["name", "A → Z"],
  ["dep", "inheritance depth"],
  ["nf", "field count"],
  ["ni", "inputs"],
  ["no", "outputs"],
  ["nk", "keyfields"],
];
const KIND_META: [string, string, string, string][] = [
  ["class", "kb-class", "C", "classes"],
  ["struct", "kb-struct", "S", "structs"],
  ["enum", "kb-enum", "E", "enums"],
];

const metricOf = (e: IndexEntry, sort: string) =>
  sort === "dep" ? e.depth : sort === "nf" ? e.nf : sort === "ni" ? e.ni : sort === "no" ? e.no : sort === "nk" ? e.nk : null;

// persistent search + filters (stays put while the block below swaps between the type list and a detail view)
function Hero({
  index, query, setQuery, sort, setSort, libs, toggleLib, kinds, toggleKind, scopes, onPick,
}: {
  index: IndexEntry[];
  query: string;
  setQuery: (v: string) => void;
  sort: string;
  setSort: (v: string) => void;
  libs: Set<string>;
  toggleLib: (s: string) => void;
  kinds: Set<string>;
  toggleKind: (k: string) => void;
  scopes: string[];
  onPick: (e: IndexEntry, field?: string) => void;
}) {
  const libCounts = useMemo(() => {
    const m = new Map<string, number>();
    for (const e of index) m.set(e.scope, (m.get(e.scope) ?? 0) + 1);
    return m;
  }, [index]);
  const kindCounts = useMemo(() => {
    const m = new Map<string, number>();
    for (const e of index) m.set(e.kind, (m.get(e.kind) ?? 0) + 1);
    return m;
  }, [index]);

  return (
    <div className="hero">
      <div className="ex">
        by class name <code onClick={() => setQuery("CBaseEntity")}>CBaseEntity</code> ·{" "}
        by field name <code onClick={() => setQuery("m_iHealth")}>m_iHealth</code> ·{" "}
        by offset <code onClick={() => setQuery("720")}>720</code> ·{" "}
        hex <code onClick={() => setQuery("0x2D0")}>0x2D0</code>
      </div>
      <div className="herosearch">
        <SearchBox index={index} query={query} setQuery={setQuery} onPick={onPick} autoFocus />
      </div>
      <div className="filters">
        <div className="fline">
          <div className="fbsort">
            <span className="sortl">sort</span>
            <Select value={sort} onValueChange={setSort}>
              <SelectTrigger className="h-7 w-44 text-[12.5px]"><SelectValue /></SelectTrigger>
              <SelectContent>
                {SORTS.map(([k, l]) => <SelectItem key={k} value={k}>{l}</SelectItem>)}
              </SelectContent>
            </Select>
          </div>
          <span className="fsep" />
          {KIND_META.map(([k, cls, ltr, plural]) => (
            <button key={k} className={"fchip" + (kinds.has(k) ? " on" : "")} onClick={() => toggleKind(k)}>
              <span className={"kb " + cls}>{ltr}</span>{plural}<span className="ct">{kindCounts.get(k) ?? 0}</span>
            </button>
          ))}
        </div>
        <div className="fline">
          {scopes.map((sc) => (
            <button key={sc} className={"fchip" + (libs.has(sc) ? " on" : "")} onClick={() => toggleLib(sc)}>
              {sc}<span className="ct">{libCounts.get(sc) ?? 0}</span>
            </button>
          ))}
        </div>
      </div>
    </div>
  );
}

function TypesList({ entries, sort, onPick }: { entries: IndexEntry[]; sort: string; onPick: (e: IndexEntry) => void }) {
  const groups = useMemo(() => {
    const cmp = (a: IndexEntry, b: IndexEntry) => {
      if (sort === "name") return a.name.localeCompare(b.name);
      return (metricOf(b, sort) as number) - (metricOf(a, sort) as number) || a.name.localeCompare(b.name);
    };
    const m = new Map<string, IndexEntry[]>();
    for (const e of entries) {
      const arr = m.get(e.scope) ?? (m.set(e.scope, []), m.get(e.scope)!);
      arr.push(e);
    }
    for (const v of m.values()) v.sort(cmp);
    return [...m.entries()].sort((a, b) => a[0].localeCompare(b[0]));
  }, [entries, sort]);

  const kb = (k: string) => (k === "enum" ? "kb-enum" : k === "struct" ? "kb-struct" : "kb-class");
  const letter = (k: string) => (k === "enum" ? "E" : k === "struct" ? "S" : "C");

  return (
    <div className="types">
      <div className="typecount">{entries.length} types</div>
      {groups.map(([scope, es]) => (
        <div className="grp" key={scope}>
          <div className="grp-h">{scope} <span className="c">{es.length}</span></div>
          <div className="cols">
            {es.map((e) => {
              const mv = metricOf(e, sort);
              return (
                <button className="it" key={e.name} onClick={() => onPick(e)}>
                  <span className={"kb " + kb(e.kind)}>{letter(e.kind)}</span>
                  <span className="nm">{e.name}</span>
                  {mv != null && mv > 0 && <span className="mv">{mv}</span>}
                </button>
              );
            })}
          </div>
        </div>
      ))}
    </div>
  );
}

// ---------------------------------------------------------------- class ------
function ClassDetail({
  cls, chain, known, hex, onNav, onBack, targetField,
}: {
  cls: ClassInfo;
  chain: string[];
  known: Set<string>;
  hex: boolean;
  onNav: (n: string) => void;
  onBack: () => void;
  targetField?: string;
}) {
  const rows = useMemo(() => layout(cls.fields, cls.size), [cls]);
  // flashed field is React-controlled state so it survives re-renders (scope loads, etc.)
  const [flashName, setFlashName] = useState<string | undefined>();
  const flash = (fieldName: string) => {
    const n = fieldName.split("+")[0];
    setFlashName(n);
    setTimeout(() => document.getElementById(`${cls.name}__${n}`)?.scrollIntoView({ block: "center" }), 0);
    setTimeout(() => setFlashName((x) => (x === n ? undefined : x)), 1800);
  };
  // datamap member → jump to that field in the class (updates hash so it's a real redirect + scroll + flash)
  const goField = (m: string) => { location.hash = `${cls.name}/${m.split("+")[0]}`; };
  useEffect(() => { if (targetField) flash(targetField); /* eslint-disable-next-line react-hooks/exhaustive-deps */ }, [targetField, cls]);

  const copySchema = () => {
    const fields = cls.fields.map((f) => `\tSCHEMA_FIELD(${f.type}, ${f.name})`).join("\n");
    navigator.clipboard.writeText(
      `class ${cls.name}\n{\npublic:\n\tDECLARE_SCHEMA_CLASS(${cls.name})\n\n${fields}\n};`
    );
  };
  const copyFields = () => navigator.clipboard.writeText(cls.fields.map((f) => `${f.type} ${f.name};`).join("\n"));

  const dmGroup = (kind: string, label: string) => {
    const items = cls.datamap.filter((d) => d.kind === kind);
    if (!items.length) return null;
    return (
      <div className="dmsec">
        <div className="dsub">{label} <span className="dcnt">{items.length}</span></div>
        <div className="dmg">
          {items.map((d, i) => (
            <div className="dment" key={i}>
              <span className="k">{d.name}</span>
              {d.target && <span className="arr"><Arr /></span>}
              {d.target && (kind === "input"
                ? <span className="tg">{d.target}</span>
                : <a className="tg mlink" onClick={() => goField(d.target)}>{d.target}</a>)}
              <span className="dt">{d.type.replace("FIELD_", "")}</span>
            </div>
          ))}
        </div>
      </div>
    );
  };

  return (
    <div id="detail">
      <div className="dtop">
        <Tooltip>
          <TooltipTrigger asChild><button className="back" onClick={onBack}>←</button></TooltipTrigger>
          <TooltipContent>back to index</TooltipContent>
        </Tooltip>
        <span className="chain-row">
          <span className="chip cur">{cls.name}</span>
          {chain.slice(1).map((c) => (
            <span key={c} style={{ display: "contents" }}>
              <span className="arr"><Arr /></span>
              <a className="chip" onClick={() => known.has(c) && onNav(c)}>{c}</a>
            </span>
          ))}
        </span>
      </div>

      <div className="cls">
        <div className="sig">
          <Tooltip>
            <TooltipTrigger asChild><button className="tag cp" onClick={copySchema}>⧉ copy as schema</button></TooltipTrigger>
            <TooltipContent>copy as schema declaration</TooltipContent>
          </Tooltip>
          <Tooltip>
            <TooltipTrigger asChild><button className="tag cp" onClick={copyFields}>⧉ copy fields</button></TooltipTrigger>
            <TooltipContent>copy field declarations</TooltipContent>
          </Tooltip>
          <span className="tag sz">sizeof<b>{nv(cls.size, hex)}</b></span>
          {cls.project && <span className="tag proj">{cls.project}</span>}
          {!cls.entity && <span className="tag emb">embedded</span>}
          {cls.flags.map((f) => <span className="tag fl" key={f}>{f}</span>)}
          <span className="kw">{cls.isStruct ? "struct" : "class"}</span> <span className="cn">{cls.name}</span>
          {cls.baseClasses.length > 0 && (
            <>
              {" : "}<span className="kw">public</span>{" "}
              {cls.baseClasses.map((b, i) => (
                <span key={b.name}>
                  {i > 0 && ", "}
                  {known.has(b.name) ? <a className="ty" onClick={() => onNav(b.name)}>{b.name}</a> : <span className="ty">{b.name}</span>}
                </span>
              ))}
            </>
          )}
        </div>

        <div className="cbody">
          <div className="map">
            {rows.map((r, i) => (
              <span
                key={i}
                className={r.pad ? "pseg" : undefined}
                title={r.pad ? `padding · ${r.size} B` : `${r.field!.name} · ${r.size} B`}
                style={{ flex: r.size, background: r.pad ? "var(--cpad)" : `var(--${catVar(r.field!.type)})`, opacity: r.pad ? 1 : 0.9 }}
              />
            ))}
          </div>
          <div className="capc">sizeof <b>{nv(cls.size, hex)}</b></div>

          <div className="tbl">
            <div className="tr thr">
              <span className="th">offset</span>
              <span className="th">size</span>
              <span className="th">type</span>
              <span className="th c-name">name</span>
              <span className="th">align</span>
            </div>
            {rows.map((r, i) =>
              r.pad ? (
                <div className="tr padrow" key={i}>
                  <span className="td c-off"><span>{nv(r.offset, hex)}</span></span>
                  <span className="td c-size"><span className="bar" style={{ minWidth: barW(r.size), background: "var(--cpad)" }}><span>{nv(r.size, hex)}</span></span></span>
                  <span className="td c-type"><span className="ty">char</span></span>
                  <span className="td c-name padc">_pad[<span>{nv(r.size, hex)}</span>]</span>
                  <span className="td c-align"><span>{nv(1, hex)}</span></span>
                </div>
              ) : (
                <div className="tr" key={i}>
                  <span className="td c-off"><span>{nv(r.offset, hex)}</span></span>
                  <span className="td c-size"><span className="bar" style={{ minWidth: barW(r.size), background: `var(--${catVar(r.field!.type)})` }}><span>{nv(r.size, hex)}</span></span></span>
                  <span className="td c-type"><TypeText type={r.field!.type} known={known} onNav={onNav} /></span>
                  <span className="td c-name">
                    <span className={"mb" + (flashName === r.field!.name ? " flash" : "")} id={`${cls.name}__${r.field!.name}`}>{r.field!.name}</span>
                    {r.field!.bits > 0 && <span className="num">:{r.field!.bits}</span>}
                    {r.field!.networked && <span className="netpill" title="networked">NETWORKED</span>}
                    {r.field!.metadata.map((m) => <span className="meta" key={m}> {m}</span>)}
                    <Tooltip>
                      <TooltipTrigger asChild>
                        <a className="fl" onClick={(e) => {
                          navigator.clipboard.writeText(`${location.origin}${location.pathname}#${cls.name}/${r.field!.name}`);
                          const t = e.currentTarget; t.classList.add("ok"); setTimeout(() => t.classList.remove("ok"), 1200);
                        }}>§</a>
                      </TooltipTrigger>
                      <TooltipContent>copy link to field</TooltipContent>
                    </Tooltip>
                  </span>
                  <span className="td c-align">
                    {r.field!.align > 0 ? (
                      <>
                        <span className="abar" style={{ width: Math.max(3, r.field!.align * 3), background: `var(--${catVar(r.field!.type)})` }} />
                        <span className="c-align-n"><span>{nv(r.field!.align, hex)}</span></span>
                      </>
                    ) : null}
                  </span>
                </div>
              )
            )}
          </div>
        </div>

        {(cls.datamap.length > 0 || cls.refs.length > 0) && (
          <div className="side">
            {cls.datamap.length > 0 && (
              <div className="dm">
                <div className="sec-h">datamap <span className="cnt">{cls.datamap.length}</span></div>
                <div className="dmsecs">
                  {dmGroup("input", "inputs")}
                  {dmGroup("output", "outputs")}
                  {dmGroup("keyfield", "keyfields")}
                  {dmGroup("field", "fields")}
                </div>
              </div>
            )}
            {cls.refs.length > 0 && (
              <div className="refs">
                <div className="sec-h">referenced by <span className="cnt">{cls.refs.length}</span></div>
                <div className="chips">
                  {cls.refs.map((r) => (
                    <a className="chip" key={r} onClick={() => known.has(r) && onNav(r)}>{r}</a>
                  ))}
                </div>
              </div>
            )}
          </div>
        )}
      </div>
    </div>
  );
}

// ---------------------------------------------------------------- enum -------
function EnumDetail({ en, hex, onBack }: { en: EnumInfo; hex: boolean; onBack: () => void }) {
  return (
    <div id="detail">
      <div className="dtop">
        <Tooltip>
          <TooltipTrigger asChild><button className="back" onClick={onBack}>←</button></TooltipTrigger>
          <TooltipContent>back to index</TooltipContent>
        </Tooltip>
        <span className="chain-row"><span className="chip cur">{en.name}</span></span>
      </div>
      <div className="cls">
        <div className="sig">
          <span className="tag sz">size<b>{nv(en.size, hex)}</b></span>
          {en.project && <span className="tag proj">{en.project}</span>}
          <span className="kw">enum</span> <span className="cn">{en.name}</span> : <span className="ty">{en.underlying}</span>
        </div>
        <div className="cbody">
          <div className="tbl">
            <div className="tr thr"><span className="th">name</span><span className="th c-name">value</span></div>
            {en.values.map((v) => (
              <div className="tr" key={v.name}>
                <span className="td"><span className="mb">{v.name}</span></span>
                <span className="td c-name"><span className="num">{nv(v.value, hex)}</span></span>
              </div>
            ))}
          </div>
        </div>
      </div>
    </div>
  );
}

// ---------------------------------------------------------------- convars ----
function ConVarsView({ platform }: { platform: Platform }) {
  const [rows, setRows] = useState<ConVar[]>([]);
  const [q, setQ] = useState("");
  useEffect(() => { loadConVars(platform).then(setRows).catch(() => setRows([])); }, [platform]);
  const filtered = useMemo(() => {
    const ql = q.toLowerCase();
    return rows.filter((r) => r.name.toLowerCase().includes(ql) || r.help.toLowerCase().includes(ql));
  }, [rows, q]);
  return (
    <div className="cvcard">
      <div className="cvhead"><input value={q} onChange={(e) => setQ(e.target.value)} placeholder={`filter ${rows.length} convars…`} /></div>
      <div>
        {filtered.map((c) => (
          <div className="cvrow" key={c.name}>
            <span className="cvn">{c.name}</span>
            <span className="cvd">{c.defaultValue}</span>
            <span className="cvh">{c.help}</span>
            {c.flags.length > 0 && <span className="cvf">{c.flags.map((f) => <span key={f}>{f}</span>)}</span>}
          </div>
        ))}
      </div>
    </div>
  );
}

function ConCommandsView({ platform }: { platform: Platform }) {
  const [rows, setRows] = useState<ConCommand[]>([]);
  const [q, setQ] = useState("");
  useEffect(() => { loadConCommands(platform).then(setRows).catch(() => setRows([])); }, [platform]);
  const filtered = useMemo(() => {
    const ql = q.toLowerCase();
    return rows.filter((r) => r.name.toLowerCase().includes(ql) || r.help.toLowerCase().includes(ql));
  }, [rows, q]);
  return (
    <div className="cvcard">
      <div className="cvhead"><input value={q} onChange={(e) => setQ(e.target.value)} placeholder={`filter ${rows.length} commands…`} /></div>
      <div>
        {filtered.map((c) => (
          <div className="cvrow cmd" key={c.name}>
            <span className="cvn cmd">{c.name}</span>
            <span className="cvh">{c.help}</span>
            {c.flags.length > 0 && <span className="cvf">{c.flags.map((f) => <span key={f}>{f}</span>)}</span>}
          </div>
        ))}
      </div>
    </div>
  );
}

// ---------------------------------------------------------------- app --------
type Selected = { name: string; file: string; targetField?: string };

export default function App() {
  const [platform, setPlatform] = useState<Platform>("win64");
  const [tab, setTab] = useState("schema");
  const [meta, setMeta] = useState<Meta | null>(null);
  const [index, setIndex] = useState<IndexEntry[]>([]);
  const [err, setErr] = useState<string | null>(null);

  const [query, setQuery] = useState("");
  const [sort, setSort] = useState("name");
  const [libs, setLibs] = useState<Set<string>>(new Set());
  const [kinds, setKinds] = useState<Set<string>>(new Set());
  const [hex, setHex] = useState(false);
  const [pad, setPad] = useState(false);

  const [selected, setSelected] = useState<Selected | null>(null);
  const scopeCache = useRef<Map<string, Scope>>(new Map());
  const [scopeData, setScopeData] = useState<Scope | null>(null);

  useEffect(() => { document.body.classList.toggle("showpad", pad); }, [pad]);

  useEffect(() => {
    setErr(null); setMeta(null); setIndex([]); setSelected(null); scopeCache.current.clear();
    Promise.all([loadMeta(platform), loadIndex(platform)])
      .then(([m, ix]) => { setMeta(m); setIndex(ix); })
      .catch((e) => setErr(String(e)));
  }, [platform]);

  const nameMap = useMemo(() => {
    const m = new Map<string, IndexEntry>();
    for (const e of index) m.set(e.name, e);
    return m;
  }, [index]);
  const known = useMemo(() => new Set(index.map((e) => e.name)), [index]);
  const scopeNames = useMemo(() => (meta ? meta.scopes.map((s) => s.scope) : []), [meta]);

  useEffect(() => {
    if (!selected) { setScopeData(null); return; }
    const cached = scopeCache.current.get(selected.file);
    if (cached) { setScopeData(cached); return; }
    setScopeData(null);
    loadScope(platform, selected.file).then((s) => { scopeCache.current.set(selected.file, s); setScopeData(s); });
  }, [selected, platform]);

  // navigation is hash-driven: selection derives from location.hash so deep links (#Class/field) work
  const pick = (e: IndexEntry, field?: string) => { location.hash = field ? `${e.name}/${field}` : e.name; };
  const navByName = (name: string) => { if (nameMap.has(name)) location.hash = name; };
  const goBack = () => { if (location.hash) location.hash = ""; else setSelected(null); };

  useEffect(() => {
    if (!index.length) return;
    const apply = () => {
      const h = decodeURIComponent(location.hash.replace(/^#/, ""));
      if (!h) { setSelected(null); return; }
      const slash = h.indexOf("/");
      const name = slash >= 0 ? h.slice(0, slash) : h;
      const field = slash >= 0 ? h.slice(slash + 1) : undefined;
      const e = nameMap.get(name);
      if (e) { setTab("schema"); setSelected({ name: e.name, file: e.file, targetField: field || undefined }); }
    };
    apply();
    window.addEventListener("hashchange", apply);
    return () => window.removeEventListener("hashchange", apply);
  }, [index, nameMap]);

  const chain = useMemo(() => {
    if (!selected) return [];
    const out = [selected.name];
    let cur = nameMap.get(selected.name);
    const seen = new Set(out);
    while (cur?.parent && nameMap.has(cur.parent) && !seen.has(cur.parent)) {
      out.push(cur.parent); seen.add(cur.parent); cur = nameMap.get(cur.parent);
    }
    return out;
  }, [selected, nameMap]);

  const filteredIndex = useMemo(
    () => index.filter((e) => (libs.size === 0 || libs.has(e.scope)) && (kinds.size === 0 || kinds.has(e.kind))),
    [index, libs, kinds]
  );

  const toggleSet = (set: Set<string>, setter: (s: Set<string>) => void, v: string) => {
    const n = new Set(set); if (n.has(v)) n.delete(v); else n.add(v); setter(n);
  };

  const selCls = scopeData && selected ? scopeData.classes.find((c) => c.name === selected.name) : null;
  const selEnum = scopeData && selected ? scopeData.enums.find((c) => c.name === selected.name) : null;

  return (
    <TooltipProvider>
      <Tabs value={tab} onValueChange={setTab}>
        <TopBar
          meta={meta} platform={platform} setPlatform={setPlatform}
          hex={hex} setHex={setHex} pad={pad} setPad={setPad}
        />

        {err && <div className="loading" style={{ padding: 18 }}>no data for {platform}: {err}</div>}

        <TabsContent value="schema" className="mt-0">
          {!err && (
            <main>
              <div id="home">
                <Hero
                  index={index}
                  query={query} setQuery={setQuery} sort={sort} setSort={setSort}
                  libs={libs} toggleLib={(s) => toggleSet(libs, setLibs, s)}
                  kinds={kinds} toggleKind={(k) => toggleSet(kinds, setKinds, k)}
                  scopes={scopeNames} onPick={pick}
                />
                <div className="content">
                  {selected ? (
                    scopeData == null ? (
                      <div className="loading">loading…</div>
                    ) : selCls ? (
                      <ClassDetail cls={selCls} chain={chain} known={known} hex={hex} onNav={navByName} onBack={goBack} targetField={selected.targetField} />
                    ) : selEnum ? (
                      <EnumDetail en={selEnum} hex={hex} onBack={goBack} />
                    ) : (
                      <div className="loading">not found: {selected.name}</div>
                    )
                  ) : (
                    <TypesList entries={filteredIndex} sort={sort} onPick={pick} />
                  )}
                </div>
              </div>
            </main>
          )}
        </TabsContent>

        <TabsContent value="convars" className="mt-0">{!err && <main><ConVarsView platform={platform} /></main>}</TabsContent>
        <TabsContent value="concommands" className="mt-0">{!err && <main><ConCommandsView platform={platform} /></main>}</TabsContent>
      </Tabs>
    </TooltipProvider>
  );
}
