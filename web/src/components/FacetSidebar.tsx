import { useMemo, useState } from "react";

type FacetRow = { module: string; flags: string[] };

const LIB_PREVIEW = 8;

const Check = (
  <svg viewBox="0 0 12 12" width="10" height="10" aria-hidden="true">
    <path d="M2.5 6.5l2.5 2.5 4.5-5" fill="none" stroke="currentColor" strokeWidth="2" strokeLinecap="round" strokeLinejoin="round" />
  </svg>
);

// Facet rail for convars / commands: libraries match ANY selected, flags must ALL be present.
// Each count is how many rows would remain with that option toggled on, so empty combinations show up front.
export function FacetSidebar({ all, matched, libs, toggleLib, flags, toggleFlag, onClear, shown, noun }: {
  all: FacetRow[]; // every row, for the option lists
  matched: FacetRow[]; // rows matching the text query
  libs: Set<string>; toggleLib: (m: string) => void;
  flags: Set<string>; toggleFlag: (f: string) => void;
  onClear: () => void;
  shown: number; noun: string;
}) {
  const [showAllLibs, setShowAllLibs] = useState(false);

  // biggest libraries first; flags alphabetical
  const libOrder = useMemo(() => {
    const m = new Map<string, number>();
    for (const r of all) if (r.module) m.set(r.module, (m.get(r.module) ?? 0) + 1);
    return [...m].sort((a, b) => b[1] - a[1] || a[0].localeCompare(b[0])).map(([lib]) => lib);
  }, [all]);
  const flagOrder = useMemo(() => [...new Set(all.flatMap((r) => r.flags))].sort(), [all]);

  const { libCounts, flagCounts } = useMemo(() => {
    const hasFlags = (r: FacetRow) => [...flags].every((f) => r.flags.includes(f));
    const lc = new Map<string, number>(), fc = new Map<string, number>();
    for (const r of matched) {
      if (!hasFlags(r)) continue;
      lc.set(r.module, (lc.get(r.module) ?? 0) + 1);
      if (libs.size && !libs.has(r.module)) continue;
      for (const f of r.flags) fc.set(f, (fc.get(f) ?? 0) + 1);
    }
    return { libCounts: lc, flagCounts: fc };
  }, [matched, libs, flags]);

  const visibleLibs = showAllLibs ? libOrder : libOrder.filter((lib, i) => i < LIB_PREVIEW || libs.has(lib));
  const hidden = libOrder.length - visibleLibs.length;
  const option = (name: string, on: boolean, count: number, toggle: () => void) => (
    <button key={name} className={"fopt" + (on ? " on" : "")} onClick={toggle} disabled={!on && count === 0} aria-pressed={on}>
      <span className="fbox">{on && Check}</span>
      <span className="fn">{name}</span>
      <span className="fc">{count}</span>
    </button>
  );

  return (
    <aside className="facets">
      <div className="fhead">
        <span><b>{shown}</b> / {all.length} {noun}</span>
        {(libs.size > 0 || flags.size > 0) && <button className="lnk" onClick={onClear}>clear</button>}
      </div>
      <div className="evtph">library</div>
      {visibleLibs.map((lib) => option(lib, libs.has(lib), libCounts.get(lib) ?? 0, () => toggleLib(lib)))}
      {libOrder.length > LIB_PREVIEW && (
        <button className="lnk fmore" onClick={() => setShowAllLibs((v) => !v)}>{showAllLibs ? "show less" : `show ${hidden} more`}</button>
      )}
      <div className="evtph">flags</div>
      {flagOrder.map((f) => option(f, flags.has(f), flagCounts.get(f) ?? 0, () => toggleFlag(f)))}
    </aside>
  );
}
