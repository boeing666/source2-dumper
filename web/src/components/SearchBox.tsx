import { useEffect, useMemo, useState } from "react";
import type { IndexEntry } from "@/types";

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

const kbCls = (k: string) => (k === "enum" ? "kb-enum" : k === "struct" ? "kb-struct" : "kb-class");
const kbLtr = (k: string) => (k === "enum" ? "E" : k === "struct" ? "S" : "C");
const rowKind = (s: Suggestion) => (s.kind === "type" ? s.entry.kind : s.kind);

export function SearchBox({ index, query, setQuery, onPick, autoFocus }: {
  index: IndexEntry[]; query: string; setQuery: (v: string) => void;
  onPick: (e: IndexEntry, field?: string) => void; autoFocus?: boolean;
}) {
  const [open, setOpen] = useState(false);
  const [active, setActive] = useState(0);
  const sugg = useMemo(() => buildSuggestions(query, index), [query, index]);
  useEffect(() => setActive(0), [query]);
  const pick = (s: Suggestion) => { setOpen(false); onPick(s.entry, "field" in s ? s.field : undefined); };
  return (
    <>
      <input
        className="q" autoFocus={autoFocus} value={query} spellCheck={false} autoComplete="off" placeholder="search…"
        onChange={(e) => { setQuery(e.target.value); setOpen(true); }}
        onFocus={() => setOpen(true)}
        onBlur={() => setTimeout(() => setOpen(false), 150)}
        onKeyDown={(e) => {
          if (e.key === "ArrowDown") { e.preventDefault(); setActive((a) => Math.min(a + 1, sugg.length - 1)); }
          else if (e.key === "ArrowUp") { e.preventDefault(); setActive((a) => Math.max(a - 1, 0)); }
          else if (e.key === "Enter" && sugg[active]) { e.preventDefault(); pick(sugg[active]); }
          else if (e.key === "Escape") setOpen(false);
        }}
      />
      {open && sugg.length > 0 && (
        <div className="suggpop">
          {sugg.map((s, i) => (
            <a key={i} className={"s-it" + (i === active ? " sel" : "")}
               onMouseDown={(e) => { e.preventDefault(); pick(s); }} onMouseEnter={() => setActive(i)}>
              <span className={"kb " + kbCls(s.entry.kind)}>{kbLtr(s.entry.kind)}</span>
              <span className="s-n">
                {s.entry.name}
                {s.kind === "field" && <span className="s-f">::{s.field}</span>}
                {s.kind === "offset" && <span className="s-f"> {s.off} {s.field}</span>}
              </span>
              <span className={"s-tag t-" + rowKind(s)}>{rowKind(s)}</span>
              <span className="s-m">{s.entry.scope}</span>
            </a>
          ))}
        </div>
      )}
    </>
  );
}
