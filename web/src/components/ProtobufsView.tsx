import { useEffect, useMemo, useState, type ReactNode } from "react";
import type { ProtoService, ProtoType, Protobufs } from "@/types";
import { getProtobufs, type Game } from "@/lib/data";

// tree item / selection key: a message or enum by name, a service as "service:<name>"
type Item = { key: string; name: string; kind: "message" | "enum" | "service"; file: string; size: number; t?: ProtoType; s?: ProtoService };
const SVC = "service:";

export type PbProps = { game: Game; q: string; sel: string; setSel: (k: string) => void };

export function ProtobufsView({ game, q, sel, setSel }: PbProps) {
  const [pb, setPb] = useState<Protobufs | null>(null);
  const [failed, setFailed] = useState(false);
  useEffect(() => { setPb(null); setFailed(false); getProtobufs(game).then(setPb, () => setFailed(true)); }, [game]);

  const items = useMemo<Item[]>(() => pb ? [
    ...pb.types.map((t) => ({ key: t.name, name: t.name, kind: t.kind, file: t.file, size: (t.fields ?? t.values ?? []).length, t })),
    ...pb.services.map((s) => ({ key: SVC + s.name, name: s.name, kind: "service" as const, file: s.file, size: s.methods.length, s })),
  ] : [], [pb]);
  const byName = useMemo(() => new Map(items.map((i) => [i.key, i])), [items]);

  const filtered = useMemo(() => {
    const ql = q.trim().toLowerCase();
    if (!ql) return items;
    return items.filter((i) => i.name.toLowerCase().includes(ql) ||
      (i.t?.fields ?? i.t?.values ?? i.s?.methods ?? []).some((m) => m.name.toLowerCase().includes(ql)));
  }, [items, q]);
  // tree: one group per .proto file, services in their own group on top
  const groups = useMemo(() => {
    const m = new Map<string, Item[]>();
    for (const i of filtered) {
      const g = i.kind === "service" ? "services" : i.file;
      if (!m.has(g)) m.set(g, []);
      m.get(g)!.push(i);
    }
    return [...m].sort((a, b) => (a[0] === "services" ? -1 : b[0] === "services" ? 1 : a[0].localeCompare(b[0])));
  }, [filtered]);

  const selected = byName.get(sel) ?? null;
  useEffect(() => { if (pb && !byName.has(sel) && groups.length) setSel(groups[0][1][0].key); }, [pb, sel, byName, groups, setSel]);

  // who points at the selected type: message fields and service methods
  const usedBy = useMemo(() => {
    if (!selected || selected.kind === "service" || !pb) return [];
    const out: { key: string; label: string }[] = [];
    for (const t of pb.types) for (const f of t.fields ?? []) if (f.ref === selected.name) out.push({ key: t.name, label: `${t.name}.${f.name}` });
    for (const s of pb.services) for (const m of s.methods) {
      if (m.requestRef === selected.name) out.push({ key: SVC + s.name, label: `${s.name}.${m.name} (request)` });
      if (m.responseRef === selected.name) out.push({ key: SVC + s.name, label: `${s.name}.${m.name} (response)` });
    }
    return out;
  }, [selected, pb]);

  if (failed) return <div className="empty">No protobuf definitions published for {game}.</div>;
  if (!pb) return <div className="loading">loading protobufs…</div>;

  const link = (ref: string | undefined, text: string): ReactNode =>
    ref && byName.has(ref) ? <span className="ty pblink" onClick={() => setSel(ref)}>{text}</span> : <span className="ty">{text}</span>;

  return (
    <div className="page">
      <div className="fbar">
        <span className="mut">
          {pb.source.repo}/{pb.source.path}
          {pb.source.commit && <> @ <a className="lnk" href={`https://github.com/${pb.source.repo}/tree/${pb.source.commit}/${pb.source.path}`} target="_blank" rel="noreferrer">{pb.source.commit.slice(0, 7)}</a></>}
          {pb.source.date && <> · {pb.source.date.slice(0, 10)}</>}
        </span>
        <span className="fcount">{filtered.length} / {items.length} definitions · {pb.files.length} files</span>
      </div>
      <div className="evtp">
        <div className="evtree">
          {groups.map(([file, list]) => (
            <div key={file}>
              <div className="evtph">{file.replace(/\.proto$/, "")} <span className="evtc">{list.length}</span></div>
              {list.map((i) => (
                <div key={i.file + i.key} className={"evte" + (i.key === sel ? " on" : "")} onClick={() => setSel(i.key)}>
                  <span className="evten">{i.kind === "enum" && <span className="pbkind">enum </span>}{i.name}</span>
                  <span className="evtef">{i.size}</span>
                </div>
              ))}
            </div>
          ))}
          {groups.length === 0 && <div className="evempty">no definitions match</div>}
        </div>
        <div className="evdet">
          {selected ? (
            <>
              <div className="evdhdr">
                <span className="evdn">{selected.name}</span>
                <span className="evmod">{selected.kind}</span>
                <span className="evcount">{selected.file}</span>
              </div>
              {(selected.t?.comment ?? selected.s?.comment) && <p className="help">{selected.t?.comment ?? selected.s?.comment}</p>}
              <pre className="pbcode">{selected.t ? <TypeCode t={selected.t} link={link} /> : <ServiceCode s={selected.s!} link={link} />}</pre>
              {usedBy.length > 0 && (
                <div className="evcat">
                  <div className="evcath">used by · {usedBy.length}</div>
                  <div className="pbused">{usedBy.map((u, i) => <span key={u.label + i} className="mb pblink" onClick={() => setSel(u.key)}>{u.label}</span>)}</div>
                </div>
              )}
            </>
          ) : <div className="evempty">select a definition</div>}
        </div>
      </div>
    </div>
  );
}

type Link = (ref: string | undefined, text: string) => ReactNode;
const tail = (c?: string) => (c ? <span className="cm">{"  // " + c.replace(/\n/g, " ")}</span> : null);

function TypeCode({ t, link }: { t: ProtoType; link: Link }) {
  const short = t.name.split(".").pop();
  if (t.kind === "enum") {
    return (<>
      <span className="kw">enum</span> {short} {"{\n"}
      {t.values!.map((v) => <span key={v.name}>{"  "}<span className="mb">{v.name}</span> = <span className="num">{v.value}</span>;{tail(v.comment)}{"\n"}</span>)}
      {"}"}
    </>);
  }
  return (<>
    <span className="kw">message</span> {short} {"{\n"}
    {t.fields!.map((f) => (
      <span key={f.name}>
        {"  "}{f.rule && <span className="kw">{f.rule} </span>}{link(f.ref, f.type.replace(/^\./, ""))} <span className="mb">{f.name}</span> = <span className="num">{f.id}</span>
        {f.default !== undefined && <> [<span className="kw">default</span> = <span className="num">{f.default}</span>]</>};
        {f.oneof && <span className="cm">{"  // oneof " + f.oneof}</span>}{tail(f.comment)}{"\n"}
      </span>
    ))}
    {"}"}
  </>);
}

function ServiceCode({ s, link }: { s: ProtoService; link: Link }) {
  return (<>
    <span className="kw">service</span> {s.name} {"{\n"}
    {s.methods.map((m) => (
      <span key={m.name}>
        {"  "}<span className="kw">rpc</span> <span className="mb">{m.name}</span> ({link(m.requestRef, m.request.replace(/^\./, ""))}) <span className="kw">returns</span> ({link(m.responseRef, m.response.replace(/^\./, ""))});{tail(m.comment)}{"\n"}
      </span>
    ))}
    {"}"}
  </>);
}
