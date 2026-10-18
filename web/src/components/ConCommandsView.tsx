import { useEffect, useState } from "react";
import type { ConCommand } from "@/types";
import { getConCommands } from "@/lib/data";
import { FacetSidebar } from "@/components/FacetSidebar";
import type { CvProps } from "@/components/ConVarsView";
import { useFacetedRows } from "@/lib/useFacetedRows";
import { useHighlight } from "@/lib/useHighlight";

export function ConCommandsView({ game, platform, q, flags, toggleFlag, libs, toggleLib, clearFilters, hl }: CvProps) {
  const [rows, setRows] = useState<ConCommand[] | null>(null);
  useEffect(() => { setRows(null); getConCommands(game, platform).then(setRows, () => setRows([])); }, [game, platform]);
  const { matched, filtered } = useFacetedRows(rows, q, libs, flags);
  useHighlight(hl, rows != null);
  if (!rows) return <div className="loading">loading commands…</div>;
  return (
    <div className="page">
      <div className="cvlayout">
        <FacetSidebar all={rows} matched={matched} libs={libs} toggleLib={toggleLib} flags={flags} toggleFlag={toggleFlag}
                      onClear={clearFilters} shown={filtered.length} noun="commands" />
        <div className="cvcard">
          <div className="cvhdr cmd"><span>name</span><span>lib</span><span>flags</span><span>help</span></div>
          {filtered.map((c) => (
            <div className={"cvrow cmd" + (c.name === hl ? " hl" : "")} key={c.name} id={"row-" + c.name}>
              <span className="cvn" title={c.name}>{c.name}</span>
              <span className="cvlib" title={c.module && `registered by ${c.module}`}>{c.module}</span>
              <span className="cvflags">{c.flags.map((f) => <span className="flag" key={f} title={f}>{f}</span>)}</span>
              <span className="cvh" title={c.help}>{c.help}</span>
            </div>
          ))}
          {filtered.length === 0 && <div className="empty">No commands match these filters.</div>}
        </div>
      </div>
    </div>
  );
}
