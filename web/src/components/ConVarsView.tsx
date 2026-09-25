import { useEffect, useMemo, useState } from "react";
import type { ConVar } from "@/types";
import { getConVars, type Game, type Platform } from "@/lib/data";
import { FlagFilter } from "@/components/FlagFilter";
import { useHighlight } from "@/lib/useHighlight";

export type CvProps = { game: Game; platform: Platform; q: string; flags: Set<string>; toggleFlag: (f: string) => void; hl?: string };

export function ConVarsView({ game, platform, q, flags, toggleFlag, hl }: CvProps) {
  const [rows, setRows] = useState<ConVar[] | null>(null);
  useEffect(() => { setRows(null); getConVars(game, platform).then(setRows, () => setRows([])); }, [game, platform]);
  const filtered = useMemo(() => {
    const ql = q.trim().toLowerCase();
    return (rows ?? []).filter((r) => (r.name.toLowerCase().includes(ql) || r.help.toLowerCase().includes(ql)) && [...flags].every((f) => r.flags.includes(f)));
  }, [rows, q, flags]);
  useHighlight(hl, rows != null);
  if (!rows) return <div className="loading">loading convars…</div>;
  return (
    <div className="page">
      <FlagFilter rows={rows} sel={flags} toggle={toggleFlag} count={`${filtered.length} / ${rows.length} convars`} />
      <div className="cvcard">
        <div className="cvhdr cv"><span>name</span><span>lib</span><span>min</span><span>max</span><span>default</span><span>flags</span><span>help</span></div>
        {filtered.map((c) => (
          <div className={"cvrow cv" + (c.name === hl ? " hl" : "")} key={c.name} id={"row-" + c.name}>
            <span className="cvn" title={c.name}>{c.name}</span>
            <span className="cvlib" title={c.module && `registered by ${c.module}`}>{c.module}</span>
            <span className="cvlim" title={c.minValue}>{c.minValue}</span>
            <span className="cvlim" title={c.maxValue}>{c.maxValue}</span>
            <span className="cvd" title={c.defaultValue}>{c.defaultValue}</span>
            <span className="cvflags">{c.flags.map((f) => <span className="flag" key={f} title={f}>{f}</span>)}</span>
            <span className="cvh" title={c.help}>{c.help}</span>
          </div>
        ))}
        {filtered.length === 0 && <div className="empty">No convars match these filters.</div>}
      </div>
    </div>
  );
}
