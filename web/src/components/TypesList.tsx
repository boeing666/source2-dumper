import { useMemo } from "react";
import type { IndexEntry } from "@/types";

// the sortable metric for a type entry (null = sort by name)
export const metricOf = (e: IndexEntry, sort: string) =>
  sort === "dep" ? e.depth : sort === "nf" ? e.nf : sort === "ni" ? e.ni : sort === "no" ? e.no : sort === "nk" ? e.nk : null;

export function TypesList({ entries, sort, onPick }: { entries: IndexEntry[]; sort: string; onPick: (e: IndexEntry) => void }) {
  const groups = useMemo(() => {
    const cmp = (a: IndexEntry, b: IndexEntry) => {
      if (sort === "name") return a.name.localeCompare(b.name);
      return (metricOf(b, sort) as number) - (metricOf(a, sort) as number) || a.name.localeCompare(b.name);
    };
    const m = new Map<string, IndexEntry[]>();
    for (const e of entries) { const arr = m.get(e.scope) ?? (m.set(e.scope, []), m.get(e.scope)!); arr.push(e); }
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
