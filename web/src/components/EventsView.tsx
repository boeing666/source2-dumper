import { useEffect, useMemo, useState } from "react";
import type { GameEvent } from "@/types";
import { loadEvents, type Game, type Platform } from "@/lib/data";

// field wire-type -> category (for grouping fields in the detail pane), in display order
const EV_CATS: [string, string][] = [["ent", "entities"], ["str", "strings"], ["num", "numbers"], ["bool", "bool"], ["oth", "other"]];
const EV_NUM = new Set(["short", "long", "byte", "int16", "uint16", "int32", "uint32", "int64", "uint64", "float", "float32", "float64"]);
function evCat(type: string): string {
  if (EV_NUM.has(type)) return "num";
  if (type === "string" || type === "cstring") return "str";
  if (type === "bool") return "bool";
  if (/^(player|ent|entity)/.test(type)) return "ent";
  return "oth";
}
const evKey = (e: GameEvent) => e.module + ":" + e.name;

export type EvProps = { game: Game; platform: Platform; q: string; setQ: (v: string) => void; mods: Set<string>; toggleMod: (m: string) => void; sel: string; setSel: (k: string) => void };

export function EventsView({ game, platform, q, setQ, mods, toggleMod, sel, setSel }: EvProps) {
  const [rows, setRows] = useState<GameEvent[]>([]);
  useEffect(() => { loadEvents(game, platform).then(setRows).catch(() => setRows([])); }, [game, platform]);
  const allMods = useMemo(() => [...new Set(rows.map((r) => r.module))].sort(), [rows]);
  const filtered = useMemo(() => {
    const ql = q.toLowerCase();
    return rows.filter((r) =>
      (mods.size === 0 || mods.has(r.module)) &&
      (r.name.toLowerCase().includes(ql) || r.fields.some((f) => f.name.toLowerCase().includes(ql) || f.type.toLowerCase().includes(ql)))
    );
  }, [rows, q, mods]);
  // group by name prefix (token before first "_"), biggest groups first
  const groups = useMemo(() => {
    const m = new Map<string, GameEvent[]>();
    for (const e of filtered) { const p = e.name.split("_")[0] || e.name; if (!m.has(p)) m.set(p, []); m.get(p)!.push(e); }
    return [...m].map(([prefix, events]) => ({ prefix, events: events.slice().sort((a, b) => a.name.localeCompare(b.name)) }))
      .sort((a, b) => b.events.length - a.events.length || a.prefix.localeCompare(b.prefix));
  }, [filtered]);
  const selected = useMemo(() => filtered.find((e) => evKey(e) === sel) ?? null, [filtered, sel]);
  // keep a valid selection as filters change (pick the first available event)
  useEffect(() => { if (!selected && groups.length) setSel(evKey(groups[0].events[0])); }, [selected, groups, setSel]);
  // fields of the selected event, grouped by type category
  const cats = useMemo(() => {
    if (!selected) return [] as { k: string; label: string; fields: GameEvent["fields"] }[];
    const by: Record<string, GameEvent["fields"]> = {};
    for (const f of selected.fields) (by[evCat(f.type)] ??= []).push(f);
    return EV_CATS.filter(([k]) => by[k]).map(([k, label]) => ({ k, label, fields: by[k] }));
  }, [selected]);

  return (
    <div id="home">
      <div className="hero">
        <div className="herosearch"><input className="q" value={q} onChange={(e) => setQ(e.target.value)} placeholder={`search ${rows.length} events…`} /></div>
        {allMods.length > 0 && (
          <div className="filters">
            <div className="fline">
              {allMods.map((m) => <button key={m} className={"fchip" + (mods.has(m) ? " on" : "")} onClick={() => toggleMod(m)}>{m}</button>)}
            </div>
          </div>
        )}
      </div>
      <div className="content">
        <div className="evtp">
          <div className="evtree">
            {groups.map((gr) => (
              <div key={gr.prefix}>
                <div className="evtph">{gr.prefix}_* <span className="evtc">{gr.events.length}</span></div>
                {gr.events.map((ev) => {
                  const k = evKey(ev);
                  return (
                    <div key={k} className={"evte" + (k === sel ? " on" : "")} onClick={() => setSel(k)}>
                      <span className="evten">{ev.name}</span>
                      <span className="evtef">{ev.fields.length}</span>
                    </div>
                  );
                })}
              </div>
            ))}
            {groups.length === 0 && <div className="evempty">no events</div>}
          </div>
          <div className="evdet">
            {selected ? (
              <>
                <div className="evdhdr">
                  <span className="evdn">{selected.name}</span>
                  <span className={"evmod m-" + selected.module}>{selected.module}</span>
                  <span className="evcount">{selected.fields.length ? `${selected.fields.length} ${selected.fields.length === 1 ? "field" : "fields"}` : "no fields"}</span>
                </div>
                {cats.length ? cats.map((c) => (
                  <div className="evcat" key={c.k}>
                    <div className="evcath">{c.label} · {c.fields.length}</div>
                    {c.fields.map((f) => (
                      <div className="evcatrow" key={f.name}>
                        <span className="evfn">{f.name}</span>
                        <span className={"evft t-" + c.k}>{f.type}</span>
                      </div>
                    ))}
                  </div>
                )) : <div className="evempty">no fields</div>}
              </>
            ) : <div className="evempty">select an event</div>}
          </div>
        </div>
      </div>
    </div>
  );
}
