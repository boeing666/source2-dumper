import { useEffect, useMemo, useState } from "react";
import type { ClassInfo } from "@/types";
import type { Platform } from "@/lib/data";
import { nv, barW, catVar, layout } from "@/lib/format";
import { TypeText } from "@/components/TypeText";
import { Arr } from "@/components/icons";

export function ClassDetail({
  cls, chain, known, hex, onNav, onBack, onField, platform, targetField,
}: {
  cls: ClassInfo; chain: string[]; known: Set<string>; hex: boolean;
  onNav: (n: string) => void; onBack: () => void; onField: (f: string) => void; platform: Platform; targetField?: string;
}) {
  const rows = useMemo(() => layout(cls.fields, cls.size), [cls]);
  const [flashName, setFlashName] = useState<string | undefined>();
  const flash = (fieldName: string) => {
    const n = fieldName.split("+")[0];
    setFlashName(n);
    setTimeout(() => document.getElementById(`${cls.name}__${n}`)?.scrollIntoView({ block: "center" }), 0);
    setTimeout(() => setFlashName((x) => (x === n ? undefined : x)), 1800);
  };
  const goField = (m: string) => onField(m.split("+")[0]);
  useEffect(() => { if (targetField) flash(targetField); /* eslint-disable-next-line react-hooks/exhaustive-deps */ }, [targetField, cls]);

  const copySchema = () => {
    const fields = cls.fields.map((f) => `\tSCHEMA_FIELD(${f.type}, ${f.name})`).join("\n");
    navigator.clipboard.writeText(`class ${cls.name}\n{\npublic:\n\tDECLARE_SCHEMA_CLASS(${cls.name})\n\n${fields}\n};`);
  };
  const copyFields = () => navigator.clipboard.writeText(cls.fields.map((f) => `${f.type} ${f.name};`).join("\n"));

  const dmGroup = (kind: string, label: string) => {
    const items = cls.datamap.filter((d) => d.kind === kind);
    if (!items.length) return null;
    return (
      <div className="dmsec">
        <div className="dsub">{label} <span className="dcnt">{items.length}</span></div>
        <div className="dmg">
          {items.map((d, i) => (
            <div className="dment" key={i}>
              <span className="k">{d.name}</span>
              {d.target && <span className="arr"><Arr /></span>}
              {d.target && (kind === "input"
                ? <span className="tg">{d.target}</span>
                : <a className="tg mlink" onClick={() => goField(d.target)}>{d.target}</a>)}
              <span className="dt">{d.type.replace("FIELD_", "")}</span>
            </div>
          ))}
        </div>
      </div>
    );
  };

  return (
    <div id="detail">
      <div className="dtop">
        <button className="back" title="back to index" onClick={onBack}>←</button>
        <span className="chain-row">
          <span className="chip cur">{cls.name}</span>
          {(cls.chain && cls.chain.length ? cls.chain : chain).slice(1).map((c) => (
            <span key={c} style={{ display: "contents" }}>
              <span className="arr"><Arr /></span>
              <a className="chip" onClick={() => known.has(c) && onNav(c)}>{c}</a>
            </span>
          ))}
        </span>
      </div>

      <div className="cls">
        <div className="sig">
          <button className="tag cp" title="copy as schema declaration" onClick={copySchema}>⧉ copy as schema</button>
          <button className="tag cp" title="copy field declarations" onClick={copyFields}>⧉ copy fields</button>
          <span className="tag sz">sizeof<b>{nv(cls.size, hex)}</b></span>
          {cls.project && <span className="tag proj">{cls.project}</span>}
          {!cls.entity && <span className="tag emb">embedded</span>}
          {cls.flags.map((f) => <span className="tag fl" key={f}>{f}</span>)}
          <span className="kw">{cls.isStruct ? "struct" : "class"}</span> <span className="cn">{cls.name}</span>
          {cls.baseClasses.length > 0 && (
            <>
              {" : "}<span className="kw">public</span>{" "}
              {cls.baseClasses.map((b, i) => (
                <span key={b.name}>
                  {i > 0 && ", "}
                  {known.has(b.name) ? <a className="ty" onClick={() => onNav(b.name)}>{b.name}</a> : <span className="ty">{b.name}</span>}
                </span>
              ))}
            </>
          )}
        </div>

        <div className="cbody">
          <div className="map">
            {rows.map((r, i) => (
              <span key={i} className={r.pad ? "pseg" : undefined}
                title={r.pad ? `padding · ${r.size} B` : `${r.field!.name} · ${r.size} B`}
                style={{ flex: r.size, background: r.pad ? "var(--cpad)" : `var(--${catVar(r.field!.type)})`, opacity: r.pad ? 1 : 0.9 }} />
            ))}
          </div>

          <div className="tbl">
            <div className="tr thr">
              <span className="th">offset</span><span className="th">size</span><span className="th">type</span>
              <span className="th c-name">name</span><span className="th">align</span>
            </div>
            {rows.map((r, i) =>
              r.pad ? (
                <div className="tr padrow" key={i}>
                  <span className="td c-off"><span>{nv(r.offset, hex)}</span></span>
                  <span className="td c-size"><span className="bar" style={{ minWidth: barW(r.size), background: "var(--cpad)" }}><span>{nv(r.size, hex)}</span></span></span>
                  <span className="td c-type"><span className="ty">char</span></span>
                  <span className="td c-name padc">_pad[<span>{nv(r.size, hex)}</span>]</span>
                  <span className="td c-align"><span>{nv(1, hex)}</span></span>
                </div>
              ) : (
                <div className="tr" key={i}>
                  <span className="td c-off"><span>{nv(r.offset, hex)}</span></span>
                  <span className="td c-size"><span className="bar" style={{ minWidth: barW(r.size), background: `var(--${catVar(r.field!.type)})` }}><span>{nv(r.size, hex)}</span></span></span>
                  <span className="td c-type"><TypeText type={r.field!.type} known={known} onNav={onNav} /></span>
                  <span className="td c-name">
                    <span className={"mb" + (flashName === r.field!.name ? " flash" : "")} id={`${cls.name}__${r.field!.name}`}>{r.field!.name}</span>
                    {r.field!.bits > 0 && <span className="num">:{r.field!.bits}</span>}
                    {r.field!.networked && <span className="netpill" title="networked">NETWORKED</span>}
                    {r.field!.metadata.map((m) => <span className="meta" key={m}> {m}</span>)}
                    <a className="fl" title="copy link to field" onClick={(e) => {
                      navigator.clipboard.writeText(`${location.origin}${location.pathname}#schema/${cls.name}/${r.field!.name}${platform !== "win64" ? `?p=${platform}` : ""}`);
                      const t = e.currentTarget; t.classList.add("ok"); setTimeout(() => t.classList.remove("ok"), 1200);
                    }}>§</a>
                  </span>
                  <span className="td c-align">
                    {r.field!.align > 0 ? (
                      <>
                        <span className="abar" style={{ width: Math.max(3, r.field!.align * 3), background: `var(--${catVar(r.field!.type)})` }} />
                        <span className="c-align-n"><span>{nv(r.field!.align, hex)}</span></span>
                      </>
                    ) : null}
                  </span>
                </div>
              )
            )}
          </div>
        </div>

        {(cls.datamap.length > 0 || cls.refs.length > 0) && (
          <div className="side">
            {cls.datamap.length > 0 && (
              <div className="dm">
                <div className="sec-h">datamap <span className="cnt">{cls.datamap.length}</span></div>
                <div className="dmsecs">
                  {dmGroup("input", "inputs")}
                  {dmGroup("output", "outputs")}
                  {dmGroup("keyfield", "keyfields")}
                  {dmGroup("field", "fields")}
                </div>
              </div>
            )}
            {cls.refs.length > 0 && (
              <div className="refs">
                <div className="sec-h">referenced by <span className="cnt">{cls.refs.length}</span></div>
                <div className="chips">
                  {cls.refs.map((r) => <a className="chip" key={r} onClick={() => known.has(r) && onNav(r)}>{r}</a>)}
                </div>
              </div>
            )}
          </div>
        )}
      </div>
    </div>
  );
}
