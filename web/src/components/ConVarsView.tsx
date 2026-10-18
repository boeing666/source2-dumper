import { useEffect, useState } from "react";
import type { ConVar } from "@/types";
import { getConVars, type Game, type Platform } from "@/lib/data";
import { FacetSidebar } from "@/components/FacetSidebar";
import { useFacetedRows } from "@/lib/useFacetedRows";
import { useHighlight } from "@/lib/useHighlight";

export type CvProps = {
  game: Game; platform: Platform; q: string;
  flags: Set<string>; toggleFlag: (f: string) => void;
  libs: Set<string>; toggleLib: (m: string) => void;
  clearFilters: () => void;
  hl?: string;
};

export function ConVarsView({ game, platform, q, flags, toggleFlag, libs, toggleLib, clearFilters, hl }: CvProps) {
  const [rows, setRows] = useState<ConVar[] | null>(null);
  useEffect(() => { setRows(null); getConVars(game, platform).then(setRows, () => setRows([])); }, [game, platform]);
  const { matched, filtered } = useFacetedRows(rows, q, libs, flags);
  useHighlight(hl, rows != null);
  if (!rows) return <div className="loading">loading convars…</div>;
  return (
    <div className="page">
      <div className="cvlayout">
        <FacetSidebar all={rows} matched={matched} libs={libs} toggleLib={toggleLib} flags={flags} toggleFlag={toggleFlag}
                      onClear={clearFilters} shown={filtered.length} noun="convars" />
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
    </div>
  );
}
