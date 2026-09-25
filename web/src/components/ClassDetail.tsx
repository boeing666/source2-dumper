import { useEffect, useMemo, useState, type MouseEvent as ReactMouseEvent, type ReactNode } from "react";
import type { ClassInfo, Datamap, Field, IndexEntry } from "@/types";
import { nv, barW, catVar, layout } from "@/lib/format";
import { TypeText } from "@/components/TypeText";
import { VariantChips } from "@/components/VariantChips";
import { Arr } from "@/components/icons";

const DM_KINDS: [string, string][] = [["input", "inputs"], ["output", "outputs"], ["keyfield", "keyfields"], ["field", "fields"]];

export function ClassDetail({
  cls, chain, known, hex, onNav, onBack, onField, fieldLink, targetField, scope, variants, onVariant, backLabel,
  bases, inherit, setInherit,
}: {
  cls: ClassInfo; chain: string[]; known: Set<string>; hex: boolean;
  onNav: (n: string) => void; onBack: () => void; onField: (f: string) => void; fieldLink: (f: string, owner?: string) => string; targetField?: string;
  scope: string; variants: IndexEntry[]; onVariant: (e: IndexEntry) => void; backLabel: string;
  bases: ClassInfo[]; inherit: boolean; setInherit: (v: boolean) => void;
}) {
  // "inherited" view: the parents' fields and datamap merged in, each tagged with the class that declares it
  const showInh = inherit && bases.length > 0;
  const baseFieldCount = useMemo(() => bases.reduce((n, b) => n + b.fields.length, 0), [bases]);
  const { fields, owner } = useMemo(() => {
    const owner = new Map<Field, string>();
    const all: Field[] = [...cls.fields];
    for (const f of cls.fields) owner.set(f, cls.name);
    if (showInh) for (const b of bases) for (const f of b.fields) { owner.set(f, b.name); all.push(f); }
    return { fields: all, owner };
  }, [cls, bases, showInh]);
  const datamap = useMemo(() => {
    const dm: (Datamap & { owner: string })[] = cls.datamap.map((d) => ({ ...d, owner: cls.name }));
    if (showInh) for (const b of bases) for (const d of b.datamap) dm.push({ ...d, owner: b.name });
    return dm;
  }, [cls, bases, showInh]);
  // per-owner offset range + field count, shown on the group header rows
  const ranges = useMemo(() => {
    const m = new Map<string, { lo: number; hi: number; n: number }>();
    for (const f of fields) {
      const o = owner.get(f)!, r = m.get(o);
      if (r) { r.lo = Math.min(r.lo, f.offset); r.hi = Math.max(r.hi, f.offset + f.size); r.n++; }
      else m.set(o, { lo: f.offset, hi: f.offset + f.size, n: 1 });
    }
    return m;
  }, [fields, owner]);
  const rows = useMemo(() => layout(fields, cls.size), [fields, cls.size]);

  const [flashName, setFlashName] = useState<string | undefined>();
  const [tip, setTip] = useState<{ x: number; y: number; text: string } | null>(null);
  const flash = (fieldName: string) => {
    const n = fieldName.split("+")[0];
    setFlashName(n);
    setTimeout(() => document.querySelector(`[data-field="${CSS.escape(n)}"]`)?.scrollIntoView({ block: "center" }), 0);
    setTimeout(() => setFlashName((x) => (x === n ? undefined : x)), 1800);
  };
  const goField = (m: string) => onField(m.split("+")[0]);
  useEffect(() => { if (targetField) flash(targetField); /* eslint-disable-next-line react-hooks/exhaustive-deps */ }, [targetField, cls, showInh]);

  const copySchema = () => {
    const fields = cls.fields.map((f) => `\tSCHEMA_FIELD(${f.type}, ${f.name})`).join("\n");
    navigator.clipboard.writeText(`class ${cls.name}\n{\npublic:\n\tDECLARE_SCHEMA_CLASS(${cls.name})\n\n${fields}\n};`);
  };
  const copyFields = () => navigator.clipboard.writeText(cls.fields.map((f) => `${f.type} ${f.name};`).join("\n"));

  // datamap: one tab per kind, a full-width table below; in the inherited view rows are grouped by declaring class
  const [dmKind, setDmKind] = useState("input");
  const dmKinds = DM_KINDS.filter(([k]) => datamap.some((d) => d.kind === k));
  const curKind = dmKinds.some(([k]) => k === dmKind) ? dmKind : dmKinds[0]?.[0];
  const dmRows = useMemo(() => {
    const order = new Map([cls.name, ...chain.slice(1)].map((n, i) => [n, i]));
    return datamap.filter((d) => d.kind === curKind).sort((a, b) => (order.get(a.owner) ?? 99) - (order.get(b.owner) ?? 99));
  }, [datamap, curKind, cls.name, chain]);
  const dmBody: ReactNode[] = [];
  let lastDmOwner: string | undefined;
  dmRows.forEach((d, i) => {
    if (showInh && d.owner !== lastDmOwner) {
      lastDmOwner = d.owner;
      const n = dmRows.filter((x) => x.owner === d.owner).length;
      dmBody.push(
        <tr className="dmgrp" key={"g" + i}>
          <td colSpan={3}>
            <span className="ownk">{d.owner === cls.name ? "own" : "from"}</span>{" "}
            {d.owner === cls.name ? <b>{d.owner}</b> : <a className="ty" onClick={() => onNav(d.owner)}>{d.owner}</a>}
            <span className="ownr"> · {n}</span>
          </td>
        </tr>
      );
    }
    dmBody.push(
      <tr key={i}>
        <td className="k">{d.name}</td>
        <td>{d.target
          ? (d.kind === "input" ? <span className="tg">{d.target}</span> : <a className="tg mlink" onClick={() => goField(d.target)}>{d.target}</a>)
          : <span className="mut">—</span>}</td>
        <td className="dt">{d.type.replace("FIELD_", "")}</td>
      </tr>
    );
  });

  // header row before the first field of each declaring class (inherited view only)
  const ownerHeader = (o: string, key: string): ReactNode => {
    const g = ranges.get(o)!;
    return (
      <div className={"tr ownrow" + (o === cls.name ? " self" : "")} key={key}>
        <span className="td c-off"><span>{nv(g.lo, hex)}</span></span>
        <span className="td c-size" />
        <span className="td c-type">
          <span className="ownk">{o === cls.name ? "own" : "from"}</span>{" "}
          {o === cls.name ? <b>{o}</b> : <a className="ty" onClick={() => onNav(o)}>{o}</a>}
        </span>
        <span className="td c-name">
          <span className="ownr">{nv(g.lo, hex)} – {nv(g.hi, hex)} · {g.n} {g.n === 1 ? "field" : "fields"}</span>
        </span>
        <span className="td c-align" />
      </div>
    );
  };

  const body: ReactNode[] = [];
  let lastOwner: string | undefined;
  rows.forEach((r, i) => {
    const o = r.field ? owner.get(r.field) : undefined;
    if (showInh && o && o !== lastOwner) { body.push(ownerHeader(o, "own-" + i)); lastOwner = o; }
    if (r.pad) {
      body.push(
        <div className="tr padrow" key={i}>
          <span className="td c-off"><span>{nv(r.offset, hex)}</span></span>
          <span className="td c-size"><span className="bar" style={{ minWidth: barW(r.size), background: "var(--cpad)" }}><span>{nv(r.size, hex)}</span></span></span>
          <span className="td c-type"><span className="ty">char</span></span>
          <span className="td c-name padc">_pad[<span>{nv(r.size, hex)}</span>]</span>
          <span className="td c-align"><span>{nv(1, hex)}</span></span>
        </div>
      );
      return;
    }
    const f = r.field!;
    body.push(
      <div className="tr" key={i}>
        <span className="td c-off"><span>{nv(r.offset, hex)}</span></span>
        <span className="td c-size"><span className="bar" style={{ minWidth: barW(r.size), background: `var(--${catVar(f.type)})` }}><span>{nv(r.size, hex)}</span></span></span>
        <span className="td c-type"><TypeText type={f.type} known={known} onNav={onNav} /></span>
        <span className="td c-name">
          <span className={"mb" + (flashName === f.name ? " flash" : "")} id={`${o}__${f.name}`} data-field={f.name}>{f.name}</span>
          {f.bits > 0 && <span className="num">:{f.bits}</span>}
          {f.networked && <span className="netpill" title="networked">NETWORKED</span>}
          {f.metadata.map((m) => <span className="meta" key={m}> {m}</span>)}
          <a className="fl" title="copy link to field" onClick={(e) => {
            navigator.clipboard.writeText(fieldLink(f.name, o === cls.name ? undefined : o));
            const t = e.currentTarget; t.classList.add("ok"); setTimeout(() => t.classList.remove("ok"), 1200);
          }}>§</a>
        </span>
        <span className="td c-align">
          {f.align > 0 ? (
            <>
              <span className="abar" style={{ width: Math.max(3, f.align * 3), background: `var(--${catVar(f.type)})` }} />
              <span className="c-align-n"><span>{nv(f.align, hex)}</span></span>
            </>
          ) : null}
        </span>
      </div>
    );
  });

  return (
    <div id="detail">
      <div className="dtop">
        <button className="back" title={`back to ${backLabel}`} onClick={onBack}>← {backLabel}</button>
        <span className="chain-row">
          <span className="chip cur">{cls.name}</span>
          {chain.slice(1).map((c) => (
            <span key={c} style={{ display: "contents" }}>
              <span className="arr"><Arr /></span>
              <a className="chip" onClick={() => known.has(c) && onNav(c)}>{c}</a>
            </span>
          ))}
        </span>
        <VariantChips scope={scope} variants={variants} onVariant={onVariant} />
      </div>

      <div className="cls">
        <div className="sig">
          <button className="tag cp" title="copy as schema declaration" onClick={copySchema}>⧉ copy as schema</button>
          <button className="tag cp" title="copy field declarations" onClick={copyFields}>⧉ copy fields</button>
          {chain.length > 1 && (
            <button className={"tag cp inh" + (showInh ? " on" : "")} aria-pressed={showInh} disabled={!bases.length}
                    title={bases.length ? `show fields and datamap of ${chain.slice(1).join(", ")}` : "loading parent classes…"}
                    onClick={() => setInherit(!inherit)}>
              ⇡ inherited <b>{bases.length ? baseFieldCount : "…"}</b>
            </button>
          )}
          <span className="sinfo sz">sizeof <b>{nv(cls.size, hex)}</b></span>
          {cls.stateChanged !== undefined && cls.stateChanged >= 0 && (
            <span className="sinfo nsc" title="NetworkStateChanged vtable index">netstate <b>{cls.stateChanged}</b></span>
          )}
          {cls.project && <span className="sinfo proj">{cls.project}</span>}
          {!cls.entity && <span className="sinfo emb">embedded</span>}
          {cls.flags.map((f) => <span className="sinfo fl" key={f}>{f}</span>)}
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
          <div className="map" onMouseLeave={() => setTip(null)}>
            {rows.map((r, i) => {
              const txt = r.pad ? `padding · ${r.size} B` : `${showInh ? owner.get(r.field!) + "::" : ""}${r.field!.name} · ${r.size} B`;
              const move = (e: ReactMouseEvent) => setTip({ x: e.clientX, y: e.clientY, text: txt });
              return (
                <span key={i} className={r.pad ? "pseg" : undefined} onMouseEnter={move} onMouseMove={move}
                  style={{ flex: r.size, background: r.pad ? "var(--cpad)" : `var(--${catVar(r.field!.type)})`, opacity: r.pad ? 1 : 0.9 }} />
              );
            })}
          </div>

          <div className="tbl">
            <div className="tr thr">
              <span className="th">offset</span><span className="th">size</span><span className="th">type</span>
              <span className="th c-name">name</span><span className="th">align</span>
            </div>
            {body}
          </div>
        </div>

        {(datamap.length > 0 || cls.refs.length > 0) && (
          <div className="side">
            {datamap.length > 0 && (
              <div className="dm">
                <div className="sec-h">
                  datamap <span className="cnt">{cls.datamap.length}</span>
                  {showInh && datamap.length > cls.datamap.length && <span className="cnt">+{datamap.length - cls.datamap.length} inherited</span>}
                </div>
                <div className="dmtabs" role="tablist">
                  {dmKinds.map(([k, l]) => (
                    <button key={k} role="tab" aria-selected={k === curKind} className={k === curKind ? "on" : ""} onClick={() => setDmKind(k)}>
                      {l}<span className="cnt">{datamap.filter((d) => d.kind === k).length}</span>
                    </button>
                  ))}
                </div>
                <table className="dmt">
                  <thead><tr><th>name</th><th>{curKind === "input" ? "handler" : "target"}</th><th>type</th></tr></thead>
                  <tbody>{dmBody}</tbody>
                </table>
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

      {tip && <div className="maptip" style={{ left: tip.x, top: tip.y }}>{tip.text}</div>}
    </div>
  );
}
