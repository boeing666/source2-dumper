import { useEffect, useMemo, useState } from "react";
import type { ConCommand } from "@/types";
import { getConCommands } from "@/lib/data";
import { FlagFilter } from "@/components/FlagFilter";
import type { CvProps } from "@/components/ConVarsView";
import { useHighlight } from "@/lib/useHighlight";

export function ConCommandsView({ game, platform, q, flags, toggleFlag, hl }: CvProps) {
  const [rows, setRows] = useState<ConCommand[] | null>(null);
  useEffect(() => { setRows(null); getConCommands(game, platform).then(setRows, () => setRows([])); }, [game, platform]);
  const filtered = useMemo(() => {
    const ql = q.trim().toLowerCase();
    return (rows ?? []).filter((r) => (r.name.toLowerCase().includes(ql) || r.help.toLowerCase().includes(ql)) && [...flags].every((f) => r.flags.includes(f)));
  }, [rows, q, flags]);
  useHighlight(hl, rows != null);
  if (!rows) return <div className="loading">loading commands…</div>;
  return (
    <div className="page">
      <FlagFilter rows={rows} sel={flags} toggle={toggleFlag} count={`${filtered.length} / ${rows.length} commands`} />
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
  );
}
