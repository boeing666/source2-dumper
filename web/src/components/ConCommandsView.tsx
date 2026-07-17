import { useEffect, useMemo, useState } from "react";
import type { ConCommand } from "@/types";
import { loadConCommands } from "@/lib/data";
import { FlagFilter } from "@/components/FlagFilter";
import type { CvProps } from "@/components/ConVarsView";

export function ConCommandsView({ platform, q, setQ, flags, toggleFlag }: CvProps) {
  const [rows, setRows] = useState<ConCommand[]>([]);
  useEffect(() => { loadConCommands(platform).then(setRows).catch(() => setRows([])); }, [platform]);
  const filtered = useMemo(() => {
    const ql = q.toLowerCase();
    return rows.filter((r) => (r.name.toLowerCase().includes(ql) || r.help.toLowerCase().includes(ql)) && (flags.size === 0 || [...flags].every((f) => r.flags.includes(f))));
  }, [rows, q, flags]);
  return (
    <div id="home">
      <div className="hero">
        <div className="herosearch"><input className="q" value={q} onChange={(e) => setQ(e.target.value)} placeholder={`search ${rows.length} commands…`} /></div>
        <FlagFilter rows={rows} sel={flags} toggle={toggleFlag} />
      </div>
      <div className="content">
        <div className="cvcard">
          <div className="cvhdr cmd"><span>name</span><span>flags</span><span>help</span></div>
          <div className="cvlist">
            {filtered.map((c) => (
              <div className="cvrow cmd" key={c.name}>
                <span className="cvn" title={c.name}>{c.name}</span>
                <span className="cvflags">{c.flags.map((f) => <span className="cvflag" key={f} title={f}>{f}</span>)}</span>
                <span className="cvh" title={c.help}>{c.help}</span>
              </div>
            ))}
          </div>
        </div>
      </div>
    </div>
  );
}
