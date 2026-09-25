import { useEffect, useMemo, useRef, useState, type KeyboardEvent, type MutableRefObject, type ReactNode } from "react";
import type { IndexEntry, Meta, Scope } from "@/types";
import { GROUP_TAB, hitKey, type Group, type Hit, type PrepEntry } from "@/lib/search";
import { nv } from "@/lib/format";
import { TAB_LABEL, type Tab } from "@/lib/url";

const SHOWN = 8;

export type OpenHit = (h: Hit) => void;

const kindLetter = (k: string) => (k === "enum" ? "E" : k === "struct" ? "S" : "C");

// highlight every occurrence of q inside s
function Mark({ s, q }: { s: string; q: string }) {
  const ql = q.trim().toLowerCase();
  if (!ql) return <>{s}</>;
  const out: ReactNode[] = [];
  const low = s.toLowerCase();
  let i = 0;
  for (let j = low.indexOf(ql); j >= 0; j = low.indexOf(ql, i)) {
    if (j > i) out.push(s.slice(i, j));
    out.push(<mark key={j}>{s.slice(j, j + ql.length)}</mark>);
    i = j + ql.length;
  }
  out.push(s.slice(i));
  return <>{out}</>;
}

function HitRow({ h, q, hex }: { h: Hit; q: string; hex: boolean }) {
  switch (h.k) {
    case "field":
      return (<><span className="kb kb-field">F</span>
        <span className="rn">{h.entry.name}::<span className="mb"><Mark s={h.field} q={q} /></span></span>
        <span className="rc">{h.entry.scope} · <span className="num">{nv(h.off, hex)}</span></span></>);
    case "type":
      return (<><span className={"kb kb-" + h.entry.kind}>{kindLetter(h.entry.kind)}</span>
        <span className="rn"><Mark s={h.entry.name} q={q} />{h.entry.parent && <span className="mut"> : {h.entry.parent}</span>}</span>
        <span className="rc">{h.entry.scope}{h.entry.kind !== "enum" && ` · ${h.entry.nf} fields`}</span></>);
    case "convar":
      return (<><span className="kb kb-cv">V</span>
        <span className="rn"><Mark s={h.cv.name} q={q} /> <span className="num">{h.cv.defaultValue}</span></span>
        <span className="rc">{h.cv.help || h.cv.flags.join(", ")}</span></>);
    case "command":
      return (<><span className="kb kb-cc">&gt;</span>
        <span className="rn"><Mark s={h.cc.name} q={q} /></span>
        <span className="rc">{h.cc.help || h.cc.flags.join(", ")}</span></>);
    case "event":
      return (<><span className="kb kb-ev">E</span>
        <span className="rn"><Mark s={h.ev.name} q={q} />{h.fields.length > 0 && <span className="mut"> {"{ "}{h.fields.map((f, i) => <span key={f}>{i > 0 && ", "}<Mark s={f} q={q} /></span>)}{" }"}</span>}</span>
        <span className="rc">{h.ev.module} · {h.ev.fields.length} fields</span></>);
    case "vsfn":
      return (<><span className="kb kb-vs">ƒ</span>
        <span className="rn"><span className="ty">{h.fn.returnType}</span> {h.cls ? (h.cls.scriptName || h.cls.name) + "." : ""}<Mark s={h.fn.name} q={q} />()</span>
        <span className="rc">{h.fn.description}</span></>);
    case "vscls":
      return (<><span className="kb kb-vs">S</span>
        <span className="rn"><Mark s={h.cls.scriptName || h.cls.name} q={q} />{h.cls.base && <span className="mut"> : {h.cls.base}</span>}</span>
        <span className="rc">{h.cls.functions.length} functions</span></>);
    case "vsconst":
      return (<><span className="kb kb-vs">K</span>
        <span className="rn"><Mark s={h.name} q={q} /> = <span className="num">{h.value}</span></span>
        <span className="rc">{h.type}</span></>);
  }
}

export function AllResults({ q, setQ, groups, pending, hex, meta, prep, loadScope, onOpen, onTab, fieldLink, keyRef }: {
  q: string; setQ: (v: string) => void; groups: Group[]; pending: string[]; hex: boolean; meta: Meta | null;
  prep: PrepEntry[]; loadScope: (file: string) => Promise<Scope>;
  onOpen: OpenHit; onTab: (t: Tab) => void; fieldLink: (e: IndexEntry, field: string) => string;
  keyRef: MutableRefObject<((e: KeyboardEvent<HTMLInputElement>) => void) | null>;
}) {
  const [expanded, setExpanded] = useState<Set<string>>(new Set());
  const [active, setActive] = useState<string>("");
  const listRef = useRef<HTMLDivElement>(null);
  useEffect(() => setExpanded(new Set()), [q]);

  // the dumps contain genuine duplicates (overloads, events registered twice) -> number repeated keys
  const keyed = useMemo(() => {
    const seen = new Map<string, number>();
    return new Map(groups.map((g) => [g, g.hits.map((h) => {
      const k = hitKey(h), n = seen.get(k) ?? 0;
      seen.set(k, n + 1);
      return { h, key: n ? `${k}#${n}` : k };
    })]));
  }, [groups]);
  const visible = useMemo(() => groups.map((g) => ({ g, hits: expanded.has(g.key) ? keyed.get(g)! : keyed.get(g)!.slice(0, SHOWN) })), [groups, keyed, expanded]);
  const flat = useMemo(() => visible.flatMap((v) => v.hits), [visible]);
  const curItem = flat.find((x) => x.key === active) ?? flat[0];
  const cur = curItem?.h;
  const curKey = curItem?.key ?? "";

  useEffect(() => {
    listRef.current?.querySelector(".r.on")?.scrollIntoView({ block: "nearest" });
  }, [curKey]);

  useEffect(() => {
    keyRef.current = (e) => {
      if (!flat.length) return;
      const i = Math.max(0, flat.findIndex((x) => x.key === curKey));
      if (e.key === "ArrowDown" || e.key === "ArrowUp") {
        e.preventDefault();
        const n = e.key === "ArrowDown" ? Math.min(i + 1, flat.length - 1) : Math.max(i - 1, 0);
        setActive(flat[n].key);
      } else if (e.key === "Enter" && cur) { e.preventDefault(); onOpen(cur); }
      else if (e.key === "Tab" && visible.length > 1) {
        // jump between groups
        const gi = visible.findIndex((v) => v.hits.some((x) => x.key === curKey));
        const next = visible[(gi + (e.shiftKey ? visible.length - 1 : 1)) % visible.length];
        if (next?.hits[0]) { e.preventDefault(); setActive(next.hits[0].key); }
      }
    };
    return () => { keyRef.current = null; };
  });

  if (!q.trim()) return <Home setQ={setQ} meta={meta} onTab={onTab} />;

  return (
    <div className="allres">
      <div className="res" ref={listRef}>
        {pending.length > 0 && <div className="pend">loading {pending.join(", ")}…</div>}
        {groups.length === 0 && pending.length === 0 && <div className="empty">Nothing matches <b>{q}</b>. Try a shorter part of the name, or an offset like <code>0x2D0</code>.</div>}
        {visible.map(({ g, hits }) => (
          <section className="grp" key={g.key}>
            <div className="grp-h">
              <span>{g.title}<span className="cnt">{g.total.toLocaleString("en-US").replace(/,/g, " ")}</span></span>
              <button className="lnk" onClick={() => onTab(GROUP_TAB[g.key] as Tab)}>open in {TAB_LABEL[GROUP_TAB[g.key] as Tab]} →</button>
            </div>
            {hits.map(({ h, key }) => (
              <div key={key} className={"r" + (key === curKey ? " on" : "")} onMouseEnter={() => setActive(key)} onClick={() => onOpen(h)}>
                <HitRow h={h} q={q} hex={hex} />
              </div>
            ))}
            {g.hits.length > SHOWN && !expanded.has(g.key) && (
              <button className="more" onClick={() => setExpanded((s) => new Set(s).add(g.key))}>
                show {Math.min(g.hits.length, 60) - SHOWN} more{g.total > g.hits.length ? ` of ${g.total}` : ""}
              </button>
            )}
          </section>
        ))}
        <div className="keys"><kbd className="kk">↑</kbd><kbd className="kk">↓</kbd> move <kbd className="kk">⏎</kbd> open <kbd className="kk">Tab</kbd> next group <kbd className="kk">Esc</kbd> clear</div>
      </div>
      <aside className="pv">{cur && <Preview h={cur} hex={hex} prep={prep} loadScope={loadScope} onOpen={onOpen} fieldLink={fieldLink} />}</aside>
    </div>
  );
}

function Home({ setQ, meta, onTab }: { setQ: (v: string) => void; meta: Meta | null; onTab: (t: Tab) => void }) {
  const ex: [string, string][] = [["class", "CBaseEntity"], ["field", "m_iHealth"], ["offset", "720"], ["hex offset", "0x2D0"], ["convar", "sv_cheats"], ["event", "player_death"], ["vscript", "GetHealth"]];
  const fmt = (n?: number) => (n ?? 0).toLocaleString("en-US").replace(/,/g, " ");
  const cards: [Tab, string, string][] = meta ? [
    ["schema", fmt(meta.types), `${fmt(meta.classes)} classes · ${fmt(meta.enums)} enums · ${fmt(meta.networkFields)} networked fields`],
    ["convars", fmt(meta.convars), "console variables with defaults, limits and flags"],
    ["concommands", fmt(meta.concommands), "console commands with flags and help"],
    ["events", fmt(meta.events), "game events and their fields"],
    ["vscript", "API", "script classes, functions, instances and constants"],
  ] : [];
  return (
    <div className="home">
      <div className="ex">
        <span className="h">Try</span>
        {ex.map(([l, v]) => <button key={v} className="exq" onClick={() => setQ(v)}><span className="mut">{l}</span> {v}</button>)}
      </div>
      <div className="cards">
        {cards.map(([t, n, d]) => (
          <button key={t} className="card" onClick={() => onTab(t)}>
            <span className="h">{TAB_LABEL[t]}</span><b>{n}</b><span className="mut">{d}</span>
          </button>
        ))}
      </div>
    </div>
  );
}

function copy(text: string, el: HTMLElement) {
  navigator.clipboard?.writeText(text).then(() => { el.classList.add("ok"); setTimeout(() => el.classList.remove("ok"), 1200); }, () => {});
}

function Preview({ h, hex, prep, loadScope, onOpen, fieldLink }: {
  h: Hit; hex: boolean; prep: PrepEntry[]; loadScope: (file: string) => Promise<Scope>; onOpen: OpenHit;
  fieldLink: (e: IndexEntry, field: string) => string;
}) {
  const entry = h.k === "field" || h.k === "type" ? h.entry : null;
  const [scope, setScope] = useState<Scope | null>(null);
  useEffect(() => {
    if (!entry) return;
    let alive = true;
    loadScope(entry.file).then((s) => alive && setScope(s), () => {});
    return () => { alive = false; };
  }, [entry, loadScope]);
  const cls = entry && scope?.scope === entry.scope ? scope.classes.find((c) => c.name === entry.name) : undefined;

  if (h.k === "field") {
    const f = cls?.fields.find((x) => x.name === h.field);
    const p = prep.find((x) => x.e === h.entry);
    const rows = p ? p.names.map((n, i) => ({ n, o: p.offs[i] })).sort((a, b) => a.o - b.o) : [];
    const at = rows.findIndex((r) => r.n === h.field);
    const near = rows.slice(Math.max(0, at - 4), at + 5);
    const dm = cls?.datamap.filter((d) => d.target && d.target.split("+")[0] === h.field) ?? [];
    return (
      <div className="pvb">
        <span className="h">field</span>
        <div className="pvt">{h.entry.name}::<span className="mb">{h.field}</span></div>
        <div className="pvm">
          {f ? <><span className="ty">{f.type}</span> · </> : null}
          <span className="num">{nv(h.off, hex)}</span>{f && <> · {nv(f.size, hex)} B</>}
          {f?.networked && <span className="netpill">NET</span>}
          {f?.metadata.map((m) => <span className="meta" key={m}> {m}</span>)}
        </div>
        <div className="pva">
          <button className="btn pri" onClick={() => onOpen(h)}>Open class <kbd className="kk">⏎</kbd></button>
          <button className="btn" onClick={(e) => copy(fieldLink(h.entry, h.field), e.currentTarget)}>§ link</button>
          {f && <button className="btn" onClick={(e) => copy(`${f.type} ${f.name}; // ${nv(f.offset, true)}`, e.currentTarget)}>⧉ decl</button>}
        </div>
        <span className="h">neighbours in {h.entry.name}</span>
        <div className="nb">
          {near.map((r, i) => (
            <div key={r.n + i} className={r.n === h.field ? "on" : ""} onClick={() => onOpen({ ...h, field: r.n, off: r.o })}>
              <span className="num">{nv(r.o, hex)}</span>
              <span className="ty">{cls?.fields.find((x) => x.name === r.n)?.type ?? ""}</span>
              <span className="mb">{r.n}</span>
            </div>
          ))}
        </div>
        {dm.length > 0 && (<>
          <span className="h">datamap → this field</span>
          <div className="kv">{dm.map((d) => <span key={d.kind + d.name} style={{ display: "contents" }}><span className="mb">{d.name}</span><span className="mut">{d.kind} · {d.type.replace("FIELD_", "")}</span></span>)}</div>
        </>)}
      </div>
    );
  }
  if (h.k === "type") {
    const e = h.entry;
    const p = prep.find((x) => x.e === e);
    const en = e.kind === "enum" ? scope?.enums.find((x) => x.name === e.name) : undefined;
    return (
      <div className="pvb">
        <span className="h">{e.kind} · {e.scope}</span>
        <div className="pvt">{e.name}</div>
        <div className="pvm">
          {e.parent && <>: <span className="ty">{e.parent}</span> · </>}
          {cls && <>sizeof <span className="num">{nv(cls.size, hex)}</span> · </>}
          {e.kind !== "enum" ? `${e.nf} fields` : en ? `${en.values.length} values` : ""}
          {(e.ni > 0 || e.no > 0 || e.nk > 0) && ` · in ${e.ni} / out ${e.no} / key ${e.nk}`}
        </div>
        <div className="pva"><button className="btn pri" onClick={() => onOpen(h)}>Open {e.kind} <kbd className="kk">⏎</kbd></button></div>
        {p && p.names.length > 0 && (<>
          <span className="h">first fields</span>
          <div className="nb">{p.names.slice(0, 14).map((n, i) => <div key={n + i} onClick={() => onOpen({ k: "field", entry: e, field: n, off: p.offs[i] })}><span className="num">{nv(p.offs[i], hex)}</span><span className="ty">{cls?.fields.find((x) => x.name === n)?.type ?? ""}</span><span className="mb">{n}</span></div>)}</div>
        </>)}
        {en && (<>
          <span className="h">values</span>
          <div className="nb">{en.values.slice(0, 14).map((v, i) => <div key={v.name + i}><span className="num">{nv(v.value, hex)}</span><span /><span className="mb">{v.name}</span></div>)}</div>
        </>)}
      </div>
    );
  }
  if (h.k === "convar") {
    const c = h.cv;
    return (
      <div className="pvb">
        <span className="h">convar · {c.module}</span>
        <div className="pvt">{c.name}</div>
        <div className="kv">
          <span>type</span><span className="ty">{c.type}</span>
          <span>default</span><span className="num">{c.defaultValue || "—"}</span>
          <span>min</span><span className="num">{c.minValue || "—"}</span>
          <span>max</span><span className="num">{c.maxValue || "—"}</span>
        </div>
        {c.flags.length > 0 && <div className="flags">{c.flags.map((f) => <span className="flag" key={f}>{f}</span>)}</div>}
        {c.help && <p className="help">{c.help}</p>}
        <div className="pva">
          <button className="btn pri" onClick={() => onOpen(h)}>Show in convars <kbd className="kk">⏎</kbd></button>
          <button className="btn" onClick={(e) => copy(c.name, e.currentTarget)}>⧉ name</button>
        </div>
      </div>
    );
  }
  if (h.k === "command") {
    const c = h.cc;
    return (
      <div className="pvb">
        <span className="h">command · {c.module}</span>
        <div className="pvt">{c.name}</div>
        {c.flags.length > 0 && <div className="flags">{c.flags.map((f) => <span className="flag" key={f}>{f}</span>)}</div>}
        {c.help && <p className="help">{c.help}</p>}
        <div className="pva">
          <button className="btn pri" onClick={() => onOpen(h)}>Show in commands <kbd className="kk">⏎</kbd></button>
          <button className="btn" onClick={(e) => copy(c.name, e.currentTarget)}>⧉ name</button>
        </div>
      </div>
    );
  }
  if (h.k === "event") {
    return (
      <div className="pvb">
        <span className="h">event · {h.ev.module}</span>
        <div className="pvt">{h.ev.name}</div>
        <div className="nb ev">{h.ev.fields.map((f, i) => <div key={f.name + i} className={h.fields.includes(f.name) ? "on" : ""}><span className="mb">{f.name}</span><span className="ty">{f.type}</span></div>)}</div>
        {h.ev.fields.length === 0 && <div className="mut">no fields</div>}
        <div className="pva"><button className="btn pri" onClick={() => onOpen(h)}>Open in events <kbd className="kk">⏎</kbd></button></div>
      </div>
    );
  }
  if (h.k === "vsfn") {
    const f = h.fn;
    return (
      <div className="pvb">
        <span className="h">{h.cls ? `method · ${h.cls.scriptName || h.cls.name}` : "global function"}</span>
        <div className="pvt">{f.name}</div>
        <code className="sig"><span className="ty">{f.returnType}</span> <span className="mb">{f.name}</span>({f.params.map((p, i) => <span key={i}>{i > 0 && ", "}<span className="ty">{p.type}</span>{p.name && " " + p.name}</span>)})</code>
        {f.description && <p className="help">{f.description}</p>}
        <div className="pva"><button className="btn pri" onClick={() => onOpen(h)}>Open in vscript <kbd className="kk">⏎</kbd></button></div>
      </div>
    );
  }
  if (h.k === "vscls") {
    const c = h.cls;
    return (
      <div className="pvb">
        <span className="h">script class{c.scriptName && c.scriptName !== c.name ? ` · ${c.name}` : ""}</span>
        <div className="pvt">{c.scriptName || c.name}</div>
        <div className="pvm">{c.base && <>: <span className="ty">{c.base}</span> · </>}{c.functions.length} functions</div>
        {c.description && <p className="help">{c.description}</p>}
        <div className="nb">{c.functions.slice(0, 12).map((f, i) => <div key={f.name + i}><span className="ty">{f.returnType}</span><span /><span className="mb">{f.name}()</span></div>)}</div>
        <div className="pva"><button className="btn pri" onClick={() => onOpen(h)}>Open in vscript <kbd className="kk">⏎</kbd></button></div>
      </div>
    );
  }
  return (
    <div className="pvb">
      <span className="h">script constant</span>
      <div className="pvt">{h.name}</div>
      <div className="kv"><span>type</span><span className="ty">{h.type}</span><span>value</span><span className="num">{h.value}</span></div>
      <div className="pva"><button className="btn pri" onClick={() => onOpen(h)}>Open in vscript <kbd className="kk">⏎</kbd></button></div>
    </div>
  );
}
