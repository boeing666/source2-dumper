import { useEffect, useMemo, useState } from "react";
import type { ConVar } from "@/types";
import { loadConVars, type Platform } from "@/lib/data";
import { FlagFilter } from "@/components/FlagFilter";

export type CvProps = { platform: Platform; q: string; setQ: (v: string) => void; flags: Set<string>; toggleFlag: (f: string) => void };

export function ConVarsView({ platform, q, setQ, flags, toggleFlag }: CvProps) {
  const [rows, setRows] = useState<ConVar[]>([]);
  useEffect(() => { loadConVars(platform).then(setRows).catch(() => setRows([])); }, [platform]);
  const filtered = useMemo(() => {
    const ql = q.toLowerCase();
    return rows.filter((r) => (r.name.toLowerCase().includes(ql) || r.help.toLowerCase().includes(ql)) && (flags.size === 0 || [...flags].every((f) => r.flags.includes(f))));
  }, [rows, q, flags]);
  return (
    <div id="home">
      <div className="hero">
        <div className="herosearch"><input className="q" value={q} onChange={(e) => setQ(e.target.value)} placeholder={`search ${rows.length} convars…`} /></div>
        <FlagFilter rows={rows} sel={flags} toggle={toggleFlag} />
      </div>
      <div className="content">
        <div className="cvcard">
          <div className="cvhdr cv"><span>name</span><span>default</span><span>flags</span><span>help</span></div>
          <div className="cvlist">
            {filtered.map((c) => (
              <div className="cvrow cv" key={c.name}>
                <span className="cvn" title={c.name}>{c.name}</span>
                <span className="cvd" title={c.defaultValue}>{c.defaultValue}</span>
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
