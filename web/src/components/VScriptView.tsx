import { useEffect, useMemo, useState } from "react";
import type { ScriptApi, ScriptClass, ScriptFunction } from "@/types";
import { getScriptApi, type Game, type Platform } from "@/lib/data";

// selection keys: the global function list, the constants, or one class ("cls:<C++ name>")
const FN = "functions";
const CONST = "constants";
const clsKey = (name: string) => "cls:" + name;

const fnMatches = (f: ScriptFunction, ql: string) =>
  f.name.toLowerCase().includes(ql) || f.description.toLowerCase().includes(ql);
const clsNameMatches = (c: ScriptClass, ql: string) =>
  c.name.toLowerCase().includes(ql) || c.scriptName.toLowerCase().includes(ql);
// a class is listed when its name, its script name or any of its functions matches the search
const clsMatches = (c: ScriptClass, ql: string) =>
  !ql || clsNameMatches(c, ql) || c.functions.some((f) => fnMatches(f, ql));

function Signature({ f }: { f: ScriptFunction }) {
  return (
    <div className="vsfn">
      <div className="vssig">
        <span className="vsret">{f.returnType}</span>{" "}
        <span className="vsname">{f.name}</span>(
        {f.params.map((p, i) => (
          <span key={i}>
            {i > 0 && ", "}
            <span className="vsptype">{p.type}</span>
            {p.name && <> <span className="vspname">{p.name}</span></>}
          </span>
        ))}
        )
      </div>
      {f.description && <div className="vsdesc">{f.description}</div>}
    </div>
  );
}

export type VsProps = { game: Game; platform: Platform; q: string; sel: string; setSel: (k: string) => void };

export function VScriptView({ game, platform, q, sel, setSel }: VsProps) {
  const [api, setApi] = useState<ScriptApi | null>(null);
  const [missing, setMissing] = useState(false);
  useEffect(() => {
    setApi(null); setMissing(false);
    getScriptApi(game, platform).then(setApi, () => setMissing(true));
  }, [game, platform]);

  const ql = q.trim().toLowerCase();
  const byName = useMemo(() => new Map((api?.classes ?? []).map((c) => [c.name, c])), [api]);
  const globals = useMemo(() => (api?.functions ?? []).filter((f) => !ql || fnMatches(f, ql)), [api, ql]);
  const constants = useMemo(
    () => (api?.constants ?? []).filter((c) => !ql || c.name.toLowerCase().includes(ql) || c.value.toLowerCase().includes(ql)),
    [api, ql]
  );
  const instances = useMemo(
    () => (api?.instances ?? []).filter((i) => {
      const cls = byName.get(i.className);
      return !ql || i.name.toLowerCase().includes(ql) || (cls !== undefined && clsMatches(cls, ql));
    }),
    [api, ql, byName]
  );
  const classes = useMemo(() => (api?.classes ?? []).filter((c) => clsMatches(c, ql)), [api, ql]);

  // keep a valid selection as filters change
  const keys = useMemo(() => [
    ...(globals.length ? [FN] : []),
    ...instances.map((i) => clsKey(i.className)),
    ...classes.map((c) => clsKey(c.name)),
    ...(constants.length ? [CONST] : []),
  ], [globals, instances, classes, constants]);
  useEffect(() => { if (api && keys.length && !keys.includes(sel)) setSel(keys[0]); }, [api, keys, sel, setSel]);

  const selClass = sel.startsWith("cls:") ? byName.get(sel.slice(4)) ?? null : null;
  const instanceOf = selClass ? api?.instances.find((i) => i.className === selClass.name) : undefined;
  // show every function of a class found by name, only the matching ones when found through a function
  const classFns = selClass
    ? (!ql || clsNameMatches(selClass, ql) ? selClass.functions : selClass.functions.filter((f) => fnMatches(f, ql)))
    : [];

  const total = api ? api.functions.length + api.classes.reduce((n, c) => n + c.functions.length, 0) : 0;
  const entry = (key: string, label: string, count: number) => (
    <div key={key + label} className={"evte" + (key === sel ? " on" : "")} onClick={() => setSel(key)}>
      <span className="evten">{label}</span>
      <span className="evtef">{count}</span>
    </div>
  );

  if (missing) return <div className="loading">no vscript data for {game}/{platform}</div>;
  if (!api) return <div className="loading">loading…</div>;

  return (
    <div className="page">
      <div className="fbar"><span className="fcount">{total} functions · {api.classes.length} classes · {api.instances.length} instances · {api.constants.length} constants</span></div>
      <div className="content">
        <div className="evtp">
          <div className="evtree">
            {(globals.length > 0 || constants.length > 0) && <div className="evtph">globals</div>}
            {globals.length > 0 && entry(FN, "functions", globals.length)}
            {constants.length > 0 && entry(CONST, "constants", constants.length)}
            {instances.length > 0 && (
              <>
                <div className="evtph">instances <span className="evtc">{instances.length}</span></div>
                {instances.map((i) => entry(clsKey(i.className), i.name, byName.get(i.className)?.functions.length ?? 0))}
              </>
            )}
            {classes.length > 0 && (
              <>
                <div className="evtph">classes <span className="evtc">{classes.length}</span></div>
                {classes.map((c) => entry(clsKey(c.name), c.name, c.functions.length))}
              </>
            )}
            {keys.length === 0 && <div className="evempty">nothing found</div>}
          </div>

          <div className="evdet">
            {sel === FN ? (
              <>
                <div className="evdhdr">
                  <span className="evdn">global functions</span>
                  <span className="evcount">{globals.length}</span>
                </div>
                {globals.map((f, i) => <Signature key={f.name + ":" + i} f={f} />)}
              </>
            ) : sel === CONST ? (
              <>
                <div className="evdhdr">
                  <span className="evdn">constants</span>
                  <span className="evcount">{constants.length}</span>
                </div>
                {constants.map((c, i) => (
                  <div className="evcatrow" key={c.name + i}>
                    <span className="evfn">{c.name}</span>
                    <span className="evft"><span className="vsptype">{c.type}</span> <span className="t-num">{c.value}</span></span>
                  </div>
                ))}
              </>
            ) : selClass ? (
              <>
                <div className="evdhdr">
                  <span className="evdn">{instanceOf ? instanceOf.name : selClass.name}</span>
                  {instanceOf && <span className="evmod">{selClass.name}</span>}
                  {selClass.scriptName && selClass.scriptName !== selClass.name && <span className="evmod">{selClass.scriptName}</span>}
                  {selClass.base && (
                    <span className="evcount">
                      : {byName.has(selClass.base)
                        ? <a className="vslink" onClick={() => setSel(clsKey(selClass.base))}>{selClass.base}</a>
                        : selClass.base}
                    </span>
                  )}
                  <span className="evcount">{selClass.functions.length} {selClass.functions.length === 1 ? "function" : "functions"}</span>
                </div>
                {selClass.description && <div className="vsdesc vsclsdesc">{selClass.description}</div>}
                {classFns.length ? classFns.map((f, i) => <Signature key={f.name + ":" + i} f={f} />) : <div className="evempty">no functions</div>}
              </>
            ) : <div className="evempty">select an entry</div>}
          </div>
        </div>
      </div>
    </div>
  );
}
