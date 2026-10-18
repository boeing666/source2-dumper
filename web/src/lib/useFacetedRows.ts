import { useMemo } from "react";

type Row = { name: string; help: string; module: string; flags: string[] };

// convars / commands: text query on name and help, then facets on top (library ANY selected, flags ALL selected).
// `matched` (query only) feeds the facet counts; `filtered` is what the table shows.
export function useFacetedRows<T extends Row>(rows: T[] | null, q: string, libs: Set<string>, flags: Set<string>) {
  const matched = useMemo(() => {
    const ql = q.trim().toLowerCase();
    return (rows ?? []).filter((r) => r.name.toLowerCase().includes(ql) || r.help.toLowerCase().includes(ql));
  }, [rows, q]);
  const filtered = useMemo(
    () => matched.filter((r) => (libs.size === 0 || libs.has(r.module)) && [...flags].every((f) => r.flags.includes(f))),
    [matched, libs, flags],
  );
  return { matched, filtered };
}
