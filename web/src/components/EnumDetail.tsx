import type { EnumInfo } from "@/types";
import { nv } from "@/lib/format";

export function EnumDetail({ en, hex, onBack }: { en: EnumInfo; hex: boolean; onBack: () => void }) {
  return (
    <div id="detail">
      <div className="dtop">
        <button className="back" title="back to index" onClick={onBack}>←</button>
        <span className="chain-row"><span className="chip cur">{en.name}</span></span>
      </div>
      <div className="cls">
        <div className="sig">
          <span className="tag sz">size<b>{nv(en.size, hex)}</b></span>
          {en.project && <span className="tag proj">{en.project}</span>}
          <span className="kw">enum</span> <span className="cn">{en.name}</span> : <span className="ty">{en.underlying}</span>
        </div>
        <div className="cbody">
          <div className="tbl">
            <div className="tr thr"><span className="th">name</span><span className="th c-name">value</span></div>
            {en.values.map((v) => (
              <div className="tr" key={v.name}>
                <span className="td"><span className="mb">{v.name}</span></span>
                <span className="td c-name"><span className="num">{nv(v.value, hex)}</span></span>
              </div>
            ))}
          </div>
        </div>
      </div>
    </div>
  );
}
