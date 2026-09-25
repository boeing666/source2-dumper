import { useEffect, useRef, type KeyboardEvent } from "react";
import { TAB_LABEL, type Tab } from "@/lib/url";
const ORDER: Tab[] = ["all", "schema", "convars", "concommands", "events", "vscript"];

const fmt = (n: number) => n.toLocaleString("en-US").replace(/,/g, " ");

export function SearchBar({ q, setQ, tab, setTab, counts, onKey }: {
  q: string; setQ: (v: string) => void; tab: Tab; setTab: (t: Tab) => void;
  counts: Partial<Record<Tab, number>>; onKey?: (e: KeyboardEvent<HTMLInputElement>) => void;
}) {
  const ref = useRef<HTMLInputElement>(null);
  // "/" focuses the search from anywhere (unless already typing somewhere)
  useEffect(() => {
    const h = (e: globalThis.KeyboardEvent) => {
      const t = e.target as HTMLElement;
      if (e.key === "/" && !t.closest("input,textarea,select,[contenteditable]")) { e.preventDefault(); ref.current?.focus(); ref.current?.select(); }
    };
    document.addEventListener("keydown", h);
    return () => document.removeEventListener("keydown", h);
  }, []);
  return (
    <div className="sbar">
      <label className="qbox">
        <svg viewBox="0 0 16 16" width="15" height="15" fill="none" stroke="currentColor" strokeWidth="1.6" strokeLinecap="round" aria-hidden="true"><circle cx="7" cy="7" r="5" /><path d="m11 11 3.5 3.5" /></svg>
        <input ref={ref} value={q} spellCheck={false} autoComplete="off" aria-label="search"
               placeholder="types, fields, offsets (720 / 0x2D0), convars, commands, events, vscript…"
               onChange={(e) => setQ(e.target.value)}
               onKeyDown={(e) => {
                 if (e.key === "Escape") { if (q) setQ(""); else ref.current?.blur(); return; }
                 onKey?.(e);
               }} />
        {q ? <button className="qclear" title="clear (Esc)" onClick={() => { setQ(""); ref.current?.focus(); }}>×</button> : <kbd className="kk">/</kbd>}
      </label>
      <nav className="stabs" aria-label="section">
        {ORDER.map((t) => (
          <button key={t} className={tab === t ? "on" : ""} aria-current={tab === t} onClick={() => setTab(t)}>
            {TAB_LABEL[t]}
            {counts[t] != null && <span className="cnt">{fmt(counts[t]!)}</span>}
          </button>
        ))}
      </nav>
    </div>
  );
}
