import { useMemo } from "react";

// multi-select flag filter (rows must contain ALL selected flags)
export function FlagFilter({ rows, sel, toggle, count }: { rows: { flags: string[] }[]; sel: Set<string>; toggle: (f: string) => void; count?: string }) {
  const flags = useMemo(() => {
    const m = new Map<string, number>();
    for (const r of rows) for (const f of r.flags) m.set(f, (m.get(f) ?? 0) + 1);
    return [...m].sort((a, b) => a[0].localeCompare(b[0]));
  }, [rows]);
  return (
    <div className="fbar">
      {flags.map(([f, n]) => (
        <button key={f} className={"fchip" + (sel.has(f) ? " on" : "")} onClick={() => toggle(f)}>{f}<span className="ct">{n}</span></button>
      ))}
      {count && <span className="fcount">{count}</span>}
    </div>
  );
}
