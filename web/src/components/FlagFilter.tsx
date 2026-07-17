import { useMemo } from "react";

// multi-select flag filter (rows must contain ALL selected flags) — same chip style as schema filters
export function FlagFilter({ rows, sel, toggle }: { rows: { flags: string[] }[]; sel: Set<string>; toggle: (f: string) => void }) {
  const flags = useMemo(() => {
    const s = new Set<string>();
    for (const r of rows) for (const f of r.flags) s.add(f);
    return [...s].sort();
  }, [rows]);
  if (!flags.length) return null;
  return (
    <div className="filters">
      <div className="fline">
        {flags.map((f) => (
          <button key={f} className={"fchip" + (sel.has(f) ? " on" : "")} onClick={() => toggle(f)}>{f}</button>
        ))}
      </div>
    </div>
  );
}
