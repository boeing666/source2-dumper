import { useCallback, useDeferredValue, useEffect, useMemo, useRef, useState, type KeyboardEvent } from "react";
import { type Game, type Platform, type GameAvail, loadMeta, loadIndex, loadScope, loadGameAvail, getConVars, getConCommands, getEvents, getScriptApi } from "@/lib/data";
import type { Meta, IndexEntry, Scope, ConVar, ConCommand, GameEvent, ScriptApi, ClassInfo } from "@/types";
import { type Selected, type Tab, toHash, fromHash } from "@/lib/url";
import { prepIndex, searchSchema, searchConVars, searchCommands, searchEvents, searchScript, vsTotal, type Group, type Hit } from "@/lib/search";
import { Header } from "@/components/Header";
import { SearchBar } from "@/components/SearchBar";
import { AllResults } from "@/components/AllResults";
import { SchemaView } from "@/components/SchemaView";
import { ClassDetail } from "@/components/ClassDetail";
import { EnumDetail } from "@/components/EnumDetail";
import { ConVarsView } from "@/components/ConVarsView";
import { ConCommandsView } from "@/components/ConCommandsView";
import { EventsView } from "@/components/EventsView";
import { VScriptView } from "@/components/VScriptView";

const stored = (k: string) => { try { return localStorage.getItem(k) === "1"; } catch { return false; } };
const store = (k: string, v: boolean) => { try { localStorage.setItem(k, v ? "1" : "0"); } catch { /* private mode */ } };

export default function App() {
  // initial state comes straight from the URL, so the very first render already matches (no clobber)
  const init = useMemo(() => fromHash(location.hash), []);
  const [game, setGame] = useState<Game>(init.game);
  const [platform, setPlatform] = useState<Platform>(init.platform);
  const [tab, setTab] = useState<Tab>(init.tab);
  const [avail, setAvail] = useState<Record<Game, GameAvail> | null>(null);
  const [meta, setMeta] = useState<Meta | null>(null);
  const [index, setIndex] = useState<IndexEntry[]>([]);
  const [err, setErr] = useState<string | null>(null);

  const [q, setQ] = useState(init.q);
  const dq = useDeferredValue(q);
  const [sort, setSort] = useState(init.sort);
  const [libs, setLibs] = useState<Set<string>>(init.tab === "schema" ? init.libs : new Set());
  const [kinds, setKinds] = useState<Set<string>>(init.tab === "schema" ? init.kinds : new Set());
  const [cvFlags, setCvFlags] = useState<Set<string>>(init.tab === "convars" ? init.flags : new Set());
  const [cmFlags, setCmFlags] = useState<Set<string>>(init.tab === "concommands" ? init.flags : new Set());
  const [evMods, setEvMods] = useState<Set<string>>(init.tab === "events" ? init.mods : new Set());
  const [evSel, setEvSel] = useState(init.ev);
  const [vsSel, setVsSel] = useState(init.sel);
  const [hl, setHl] = useState<string | undefined>();
  const [hex, setHexS] = useState(() => stored("hex"));
  const [pad, setPadS] = useState(() => stored("pad"));
  const setHex = (v: boolean) => { setHexS(v); store("hex", v); };
  const setPad = (v: boolean) => { setPadS(v); store("pad", v); };
  const [inherit, setInheritS] = useState(() => stored("inherit"));
  const setInherit = (v: boolean) => { setInheritS(v); store("inherit", v); };

  const [selected, setSelected] = useState<Selected | null>(null);
  // classes visited via inheritance/ref links, so the back button walks back down the chain
  const [navStack, setNavStack] = useState<Selected[]>([]);
  // where "back" leads once the trail is empty (the results list the class was opened from)
  const [backTab, setBackTab] = useState<Tab>("all");
  const scopeCache = useRef<Map<string, Promise<Scope>>>(new Map());
  const [scopeData, setScopeData] = useState<Scope | null>(null);
  // class named in the initial URL (resolved to a Selected once the index loads); blocks URL writes until resolved
  const pending = useRef<{ name: string; field?: string; scope?: string } | null>(
    init.tab === "schema" && init.className ? { name: init.className, field: init.field, scope: init.sc } : null
  );

  const [cv, setCv] = useState<ConVar[] | null>(null);
  const [cc, setCc] = useState<ConCommand[] | null>(null);
  const [ev, setEv] = useState<GameEvent[] | null>(null);
  const [vs, setVs] = useState<ScriptApi | null>(null);

  useEffect(() => { document.body.classList.toggle("showpad", pad); }, [pad]);
  useEffect(() => { loadGameAvail().then(setAvail, () => {}); }, []);

  useEffect(() => {
    setErr(null); setMeta(null); setIndex([]); scopeCache.current.clear();
    setCv(null); setCc(null); setEv(null); setVs(null);
    Promise.all([loadMeta(game, platform), loadIndex(game, platform)])
      .then(([m, ix]) => { setMeta(m); setIndex(ix); })
      .catch((e) => setErr(String(e)));
  }, [game, platform]);

  // the unified search needs every list; fetch them the first time something is searched
  const searching = dq.trim() !== "";
  useEffect(() => {
    if (!searching) return;
    if (!cv) getConVars(game, platform).then(setCv, () => setCv([]));
    if (!cc) getConCommands(game, platform).then(setCc, () => setCc([]));
    if (!ev) getEvents(game, platform).then(setEv, () => setEv([]));
    if (!vs) getScriptApi(game, platform).then(setVs, () => setVs({ functions: [], instances: [], classes: [], constants: [] }));
  }, [searching, game, platform, cv, cc, ev, vs]);

  const getScope = useCallback((file: string) => {
    let p = scopeCache.current.get(file);
    if (!p) { p = loadScope(game, platform, file); scopeCache.current.set(file, p); p.catch(() => scopeCache.current.delete(file)); }
    return p;
  }, [game, platform]);

  const byName = useMemo(() => {
    const m = new Map<string, IndexEntry[]>();
    for (const e of index) { const a = m.get(e.name); if (a) a.push(e); else m.set(e.name, [e]); }
    return m;
  }, [index]);
  const lookup = useCallback(
    (name: string, scope?: string) => {
      const a = byName.get(name);
      if (!a) return undefined;
      return (scope ? a.find((e) => e.scope === scope) : undefined) ?? a[0];
    },
    [byName]
  );
  const known = useMemo(() => new Set(byName.keys()), [byName]);
  const prep = useMemo(() => prepIndex(index), [index]);

  // resolve the URL's class once the index is available, and re-resolve the current selection against a
  // freshly loaded index — switching platform changes module file names, so selected.file must be re-derived
  useEffect(() => {
    if (byName.size === 0) return;
    if (pending.current) {
      const e = lookup(pending.current.name, pending.current.scope);
      if (e) setSelected({ name: e.name, file: e.file, scope: e.scope, targetField: pending.current.field });
      pending.current = null;
      return;
    }
    setSelected((s) => {
      if (!s) return s;
      const e = lookup(s.name, s.scope);
      if (!e) return null;
      return e.file === s.file && e.scope === s.scope ? s : { ...s, file: e.file, scope: e.scope };
    });
  }, [byName, lookup]);

  // external URL changes (manual edit, opened share link, back/forward)
  useEffect(() => {
    const onNav = () => {
      const s = fromHash(location.hash);
      setTab(s.tab); setGame(s.game); setPlatform(s.platform); setQ(s.q);
      if (s.tab === "schema") {
        setSort(s.sort); setKinds(s.kinds); setLibs(s.libs);
        const e = s.className ? lookup(s.className, s.sc) : undefined;
        setSelected(e ? { name: e.name, file: e.file, scope: e.scope, targetField: s.field } : null);
      } else setSelected(null);
      if (s.tab === "convars") setCvFlags(s.flags);
      else if (s.tab === "concommands") setCmFlags(s.flags);
      else if (s.tab === "vscript") setVsSel(s.sel);
      else if (s.tab === "events") { setEvMods(s.mods); setEvSel(s.ev); }
    };
    window.addEventListener("hashchange", onNav);
    window.addEventListener("popstate", onNav);
    return () => { window.removeEventListener("hashchange", onNav); window.removeEventListener("popstate", onNav); };
  }, [lookup]);

  // every module the selected type is bound in (>1 → the detail view offers a switcher)
  const variants = useMemo(() => (selected ? byName.get(selected.name) ?? [] : []), [selected, byName]);

  // write state to URL (replaceState → no reload / no loop; wait until the initial class is resolved)
  useEffect(() => {
    if (pending.current) return;
    const h = toHash({ tab, game, platform, selected, dup: variants.length > 1, q, sort, kinds, libs, cvFlags, cmFlags, evMods, evSel, vsSel });
    if (location.hash !== h) history.replaceState(null, "", h);
  }, [tab, game, platform, selected, variants, q, sort, kinds, libs, cvFlags, cmFlags, evMods, evSel, vsSel]);

  useEffect(() => {
    if (!selected) { setScopeData(null); return; }
    let alive = true;
    setScopeData(null);
    getScope(selected.file).then((s) => { if (alive) setScopeData(s); }, () => {});
    return () => { alive = false; };
  }, [selected, getScope]);

  // hex / padding hotkeys (x / p) anywhere outside text inputs
  useEffect(() => {
    const h = (e: globalThis.KeyboardEvent) => {
      if (e.ctrlKey || e.metaKey || e.altKey || (e.target as HTMLElement).closest("input,textarea,select,[contenteditable]")) return;
      if (e.key === "x") { setHexS((v) => { store("hex", !v); return !v; }); }
      else if (e.key === "p") { setPadS((v) => { store("pad", !v); return !v; }); }
    };
    document.addEventListener("keydown", h);
    return () => document.removeEventListener("keydown", h);
  }, []);

  // picking from results starts a fresh trail; following a link pushes the current class onto it
  const pick = (e: IndexEntry, field?: string) => {
    if (!(tab === "schema" && selected)) setBackTab(tab);
    setNavStack([]); setTab("schema"); setSelected({ name: e.name, file: e.file, scope: e.scope, targetField: field });
  };
  const navByName = (name: string) => {
    // follow links inside the module we're already reading, so client.dll types don't jump to server.dll
    const e = lookup(name, selected?.scope);
    if (!e) return;
    setNavStack((s) => (selected && selected.name !== e.name ? [...s, selected] : s));
    setTab("schema");
    setSelected({ name: e.name, file: e.file, scope: e.scope, targetField: undefined });
  };
  // same type, different module — keep the trail, just swap which binding is shown
  const pickVariant = (e: IndexEntry) => setSelected((s) => ({ name: e.name, file: e.file, scope: e.scope, targetField: s?.targetField }));
  const goBack = () => {
    if (navStack.length) {
      setSelected(navStack[navStack.length - 1]);
      setNavStack(navStack.slice(0, -1));
    } else { setSelected(null); setTab(backTab); }
  };
  const onField = (f: string) => setSelected((s) => (s ? { ...s, targetField: f } : s));
  const toggle = (setter: (f: (s: Set<string>) => Set<string>) => void) => (v: string) =>
    setter((s) => { const n = new Set(s); if (n.has(v)) n.delete(v); else n.add(v); return n; });

  const goTab = (t: Tab) => { setSelected(null); setNavStack([]); setHl(undefined); setTab(t); };
  // typing while reading a class goes back to the results it came from
  const onQuery = (v: string) => {
    setQ(v); setHl(undefined);
    if (tab === "schema" && selected) { setSelected(null); setNavStack([]); setTab(backTab === "schema" ? "schema" : "all"); }
  };

  const openHit = (h: Hit) => {
    switch (h.k) {
      case "field": pick(h.entry, h.field); break;
      case "type": pick(h.entry); break;
      case "convar": setCvFlags(new Set()); goTab("convars"); setHl(h.cv.name); break;
      case "command": setCmFlags(new Set()); goTab("concommands"); setHl(h.cc.name); break;
      case "event": setEvMods(new Set()); setEvSel(h.ev.module + ":" + h.ev.name); goTab("events"); break;
      case "vsfn": setVsSel(h.cls ? "cls:" + h.cls.name : "functions"); goTab("vscript"); break;
      case "vscls": setVsSel("cls:" + h.cls.name); goTab("vscript"); break;
      case "vsconst": setVsSel("constants"); goTab("vscript"); break;
    }
  };

  const fieldLink = useCallback((e: IndexEntry, field: string) => {
    const p = new URLSearchParams();
    if (game !== "cs2") p.set("g", game);
    if (platform !== "win64") p.set("p", platform);
    if ((byName.get(e.name)?.length ?? 0) > 1) p.set("sc", e.scope);
    const qs = p.toString();
    return `${location.origin}${location.pathname}#schema/${encodeURIComponent(e.name)}/${encodeURIComponent(field)}${qs ? "?" + qs : ""}`;
  }, [game, platform, byName]);

  // ---- unified search ----
  const schemaRes = useMemo(() => (searching && prep.length ? searchSchema(prep, dq) : null), [searching, prep, dq]);
  const groups = useMemo<Group[]>(() => {
    if (!searching) return [];
    const gs: Group[] = [];
    if (schemaRes) {
      const exactType = schemaRes.types.hits[0]?.k === "type" && schemaRes.types.hits[0].entry.name.toLowerCase() === dq.trim().toLowerCase();
      gs.push(...(exactType ? [schemaRes.types, schemaRes.fields] : [schemaRes.fields, schemaRes.types]));
    }
    if (cv) gs.push(searchConVars(cv, dq));
    if (cc) gs.push(searchCommands(cc, dq));
    if (ev) gs.push(searchEvents(ev, dq));
    if (vs) gs.push(searchScript(vs, dq));
    return gs.filter((g) => g.total > 0);
  }, [searching, schemaRes, cv, cc, ev, vs, dq]);
  const pendingLists = searching ? ([[prep.length, "schema"], [cv, "convars"], [cc, "commands"], [ev, "events"], [vs, "vscript"]] as const).filter(([v]) => !v).map(([, n]) => n) : [];

  const counts = useMemo<Partial<Record<Tab, number>>>(() => {
    if (!searching) {
      return meta ? { schema: meta.types, convars: meta.convars, concommands: meta.concommands, events: meta.events, ...(vs ? { vscript: vsTotal(vs) } : {}) } : {};
    }
    const tot = (k: string) => groups.find((g) => g.key === k)?.total ?? 0;
    const c: Partial<Record<Tab, number>> = {};
    if (schemaRes) c.schema = schemaRes.matched.size;
    if (cv) c.convars = tot("convars");
    if (cc) c.concommands = tot("commands");
    if (ev) c.events = tot("events");
    if (vs) c.vscript = tot("vscript");
    c.all = groups.reduce((n, g) => n + g.total, 0);
    return c;
  }, [searching, meta, vs, groups, schemaRes, cv, cc, ev]);

  const filteredIndex = useMemo(() => {
    const m = schemaRes?.matched;
    return index.filter((e) => (libs.size === 0 || libs.has(e.scope)) && (kinds.size === 0 || kinds.has(e.kind)) && (!m || m.has(e)));
  }, [index, libs, kinds, schemaRes]);
  const scopeChips = useMemo<[string, number][]>(() => (meta ? meta.scopes.filter((s) => s.classes + s.enums > 0).map((s) => [s.scope, s.classes + s.enums]) : []), [meta]);

  const chain = useMemo(() => {
    if (!selected) return [];
    const out = [selected.name];
    let cur = lookup(selected.name, selected.scope);
    const seen = new Set(out);
    while (cur?.parent && byName.has(cur.parent) && !seen.has(cur.parent)) {
      out.push(cur.parent); seen.add(cur.parent); cur = lookup(cur.parent, selected.scope);
    }
    return out;
  }, [selected, byName, lookup]);

  // sticky panels below the header need its (wrapping) height
  const stickRef = useRef<HTMLDivElement>(null);
  useEffect(() => {
    const el = stickRef.current;
    if (!el) return;
    const ro = new ResizeObserver(() => document.documentElement.style.setProperty("--stick-h", el.offsetHeight + "px"));
    ro.observe(el);
    return () => ro.disconnect();
  }, []);

  const keyRef = useRef<((e: KeyboardEvent<HTMLInputElement>) => void) | null>(null);

  const selCls = scopeData && selected ? scopeData.classes.find((c) => c.name === selected.name) : null;
  const selEnum = scopeData && selected ? scopeData.enums.find((c) => c.name === selected.name) : null;
  // the dumper's in-scope chain when present, else the one walked through the index
  const fullChain = useMemo(() => (selCls?.chain?.length ? selCls.chain : chain), [selCls, chain]);

  // parent classes (child -> root) for the "inherited" view; usually in the same module file, so already cached
  const [bases, setBases] = useState<ClassInfo[]>([]);
  useEffect(() => {
    if (!selected || fullChain.length < 2) { setBases([]); return; }
    let alive = true;
    Promise.all(fullChain.slice(1).map((n) => {
      const e = lookup(n, selected.scope);
      return e ? getScope(e.file).then((s) => s.classes.find((c) => c.name === n), () => undefined) : Promise.resolve(undefined);
    })).then((cs) => { if (alive) setBases(cs.filter((c): c is ClassInfo => !!c)); });
    return () => { alive = false; };
  }, [selected, fullChain, lookup, getScope]);

  return (
    <>
      <div className="stick" ref={stickRef}>
      <Header game={game} setGame={setGame} platform={platform} setPlatform={setPlatform} avail={avail}
              hex={hex} setHex={setHex} pad={pad} setPad={setPad} />
      <SearchBar q={q} setQ={onQuery} tab={tab} setTab={goTab} counts={counts}
                 onKey={(e) => { if (tab === "all") keyRef.current?.(e); }} />
      </div>

      <main>
        {err && <div className="empty">No data for {game} / {platform}: {err}</div>}

        {!err && tab === "all" && (
          <AllResults q={dq} setQ={onQuery} groups={groups} pending={pendingLists} hex={hex} meta={meta} prep={prep}
                      loadScope={getScope} onOpen={openHit} onTab={goTab} fieldLink={fieldLink} keyRef={keyRef} />
        )}

        {!err && tab === "schema" && (selected ? (
          scopeData == null ? <div className="loading">loading…</div>
          : selCls ? <ClassDetail cls={selCls} chain={fullChain} known={known} hex={hex} onNav={navByName} onBack={goBack} onField={onField} fieldLink={(f, owner) => fieldLink(lookup(owner ?? selCls.name, selected.scope)!, f)} bases={bases} inherit={inherit} setInherit={setInherit} targetField={selected.targetField} scope={selected.scope} variants={variants} onVariant={pickVariant} backLabel={navStack.length ? navStack[navStack.length - 1].name : backTab === "all" ? "results" : "types"} />
          : selEnum ? <EnumDetail en={selEnum} hex={hex} onBack={goBack} scope={selected.scope} variants={variants} onVariant={pickVariant} />
          : <div className="empty">Type {selected.name} was not found in {selected.scope}.</div>
        ) : (
          <SchemaView entries={filteredIndex} scopes={scopeChips} sort={sort} setSort={setSort}
                      libs={libs} toggleLib={toggle(setLibs)} kinds={kinds} toggleKind={toggle(setKinds)} onPick={pick} q={dq} />
        ))}

        {!err && tab === "convars" && <ConVarsView game={game} platform={platform} q={dq} flags={cvFlags} toggleFlag={toggle(setCvFlags)} hl={hl} />}
        {!err && tab === "concommands" && <ConCommandsView game={game} platform={platform} q={dq} flags={cmFlags} toggleFlag={toggle(setCmFlags)} hl={hl} />}
        {!err && tab === "events" && <EventsView game={game} platform={platform} q={dq} mods={evMods} toggleMod={toggle(setEvMods)} sel={evSel} setSel={setEvSel} />}
        {!err && tab === "vscript" && <VScriptView game={game} platform={platform} q={dq} sel={vsSel} setSel={setVsSel} />}
      </main>
    </>
  );
}
