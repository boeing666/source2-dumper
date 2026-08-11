import { useCallback, useEffect, useMemo, useRef, useState } from "react";
import { type Game, type Platform, loadMeta, loadIndex, loadScope } from "@/lib/data";
import type { Meta, IndexEntry, Scope } from "@/types";
import { type Selected, toHash, fromHash } from "@/lib/url";
import { TopBar } from "@/components/TopBar";
import { Hero } from "@/components/Hero";
import { TypesList } from "@/components/TypesList";
import { ClassDetail } from "@/components/ClassDetail";
import { EnumDetail } from "@/components/EnumDetail";
import { ConVarsView } from "@/components/ConVarsView";
import { ConCommandsView } from "@/components/ConCommandsView";
import { EventsView } from "@/components/EventsView";

export default function App() {
  // initial state comes straight from the URL, so the very first render already matches (no clobber)
  const init = useMemo(() => fromHash(location.hash), []);
  const [game, setGame] = useState<Game>(init.game);
  const [platform, setPlatform] = useState<Platform>(init.platform);
  const [tab, setTab] = useState(init.tab);
  const [meta, setMeta] = useState<Meta | null>(null);
  const [index, setIndex] = useState<IndexEntry[]>([]);
  const [err, setErr] = useState<string | null>(null);

  const [query, setQuery] = useState(init.tab === "schema" ? init.q : "");
  const [sort, setSort] = useState(init.tab === "schema" ? init.sort : "name");
  const [libs, setLibs] = useState<Set<string>>(init.tab === "schema" ? init.libs : new Set());
  const [kinds, setKinds] = useState<Set<string>>(init.tab === "schema" ? init.kinds : new Set());
  const [cvQ, setCvQ] = useState(init.tab === "convars" ? init.q : "");
  const [cvFlags, setCvFlags] = useState<Set<string>>(init.tab === "convars" ? init.flags : new Set());
  const [cmQ, setCmQ] = useState(init.tab === "concommands" ? init.q : "");
  const [cmFlags, setCmFlags] = useState<Set<string>>(init.tab === "concommands" ? init.flags : new Set());
  const [evQ, setEvQ] = useState(init.tab === "events" ? init.q : "");
  const [evMods, setEvMods] = useState<Set<string>>(init.tab === "events" ? init.mods : new Set());
  const [evSel, setEvSel] = useState(init.tab === "events" ? init.ev : "");
  const [hex, setHex] = useState(false);
  const [pad, setPad] = useState(false);

  const [selected, setSelected] = useState<Selected | null>(null);
  // classes visited via inheritance/ref links, so the back button walks back down the chain
  const [navStack, setNavStack] = useState<Selected[]>([]);
  const scopeCache = useRef<Map<string, Scope>>(new Map());
  const [scopeData, setScopeData] = useState<Scope | null>(null);
  // class named in the initial URL (resolved to a Selected once the index loads); blocks URL writes until resolved
  const pending = useRef<{ name: string; field?: string; scope?: string } | null>(
    init.tab === "schema" && init.className ? { name: init.className, field: init.field, scope: init.sc } : null
  );

  useEffect(() => { document.body.classList.toggle("showpad", pad); }, [pad]);

  useEffect(() => {
    setErr(null); setMeta(null); setIndex([]); scopeCache.current.clear();
    Promise.all([loadMeta(game, platform), loadIndex(game, platform)])
      .then(([m, ix]) => { setMeta(m); setIndex(ix); })
      .catch((e) => setErr(String(e)));
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
  const scopeNames = useMemo(() => (meta ? meta.scopes.map((s) => s.scope) : []), [meta]);

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
      setTab(s.tab); setGame(s.game); setPlatform(s.platform);
      if (s.tab === "schema") {
        setQuery(s.q); setSort(s.sort); setKinds(s.kinds); setLibs(s.libs);
        const e = s.className ? lookup(s.className, s.sc) : undefined;
        setSelected(e ? { name: e.name, file: e.file, scope: e.scope, targetField: s.field } : null);
      } else if (s.tab === "convars") { setCvQ(s.q); setCvFlags(s.flags); }
      else if (s.tab === "concommands") { setCmQ(s.q); setCmFlags(s.flags); }
      else { setEvQ(s.q); setEvMods(s.mods); setEvSel(s.ev); }
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
    const h = toHash({ tab, game, platform, selected, dup: variants.length > 1, query, sort, kinds, libs, cvQ, cvFlags, cmQ, cmFlags, evQ, evMods, evSel });
    if (location.hash !== h) history.replaceState(null, "", h);
  }, [tab, game, platform, selected, variants, query, sort, kinds, libs, cvQ, cvFlags, cmQ, cmFlags, evQ, evMods, evSel]);

  useEffect(() => {
    if (!selected) { setScopeData(null); return; }
    const file = selected.file;
    const cached = scopeCache.current.get(file);
    if (cached) { setScopeData(cached); return; }
    setScopeData(null);
    let alive = true;
    loadScope(game, platform, file)
      .then((s) => { scopeCache.current.set(file, s); if (alive) setScopeData(s); })
      .catch(() => {});
    return () => { alive = false; };
  }, [selected, platform, game]);

  // picking from search/index starts a fresh trail; following a link pushes the current class onto it
  const pick = (e: IndexEntry, field?: string) => { setNavStack([]); setTab("schema"); setSelected({ name: e.name, file: e.file, scope: e.scope, targetField: field }); };
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
    } else setSelected(null);
  };
  const onField = (f: string) => setSelected((s) => (s ? { ...s, targetField: f } : s));
  const toggleCv = (f: string) => setCvFlags((s) => { const n = new Set(s); if (n.has(f)) n.delete(f); else n.add(f); return n; });
  const toggleCm = (f: string) => setCmFlags((s) => { const n = new Set(s); if (n.has(f)) n.delete(f); else n.add(f); return n; });
  const toggleEv = (m: string) => setEvMods((s) => { const n = new Set(s); if (n.has(m)) n.delete(m); else n.add(m); return n; });

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

  const filteredIndex = useMemo(
    () => index.filter((e) => (libs.size === 0 || libs.has(e.scope)) && (kinds.size === 0 || kinds.has(e.kind))),
    [index, libs, kinds]
  );
  const toggleSet = (set: Set<string>, setter: (s: Set<string>) => void, v: string) => {
    const n = new Set(set); if (n.has(v)) n.delete(v); else n.add(v); setter(n);
  };

  const selCls = scopeData && selected ? scopeData.classes.find((c) => c.name === selected.name) : null;
  const selEnum = scopeData && selected ? scopeData.enums.find((c) => c.name === selected.name) : null;

  return (
    <>
      <TopBar game={game} setGame={setGame} platform={platform} setPlatform={setPlatform} tab={tab} setTab={setTab}
              hex={hex} setHex={setHex} pad={pad} setPad={setPad} />

      {!err && meta && (
        <div className="subbar">
          <span>PatchVersion <b>{meta.patchVersion || meta.serverVersion}</b></span>
          <span>ServerVersion <b>{meta.serverVersion}</b></span>
        </div>
      )}

      {err && <div className="loading" style={{ padding: 18 }}>no data for {game}/{platform}: {err}</div>}

      {!err && tab === "schema" && (
        <main>
          <div id="home">
            <Hero index={filteredIndex} query={query} setQuery={setQuery} sort={sort} setSort={setSort}
                  libs={libs} toggleLib={(s) => toggleSet(libs, setLibs, s)}
                  kinds={kinds} toggleKind={(k) => toggleSet(kinds, setKinds, k)}
                  scopes={scopeNames} onPick={pick} />
            <div className="content">
              {selected ? (
                scopeData == null ? <div className="loading">loading…</div>
                : selCls ? <ClassDetail cls={selCls} chain={chain} known={known} hex={hex} onNav={navByName} onBack={goBack} onField={onField} platform={platform} targetField={selected.targetField} scope={selected.scope} variants={variants} onVariant={pickVariant} />
                : selEnum ? <EnumDetail en={selEnum} hex={hex} onBack={goBack} scope={selected.scope} variants={variants} onVariant={pickVariant} />
                : <div className="loading">not found: {selected.name}</div>
              ) : (
                <TypesList entries={filteredIndex} sort={sort} onPick={pick} />
              )}
            </div>
          </div>
        </main>
      )}

      {!err && tab === "convars" && <main><ConVarsView game={game} platform={platform} q={cvQ} setQ={setCvQ} flags={cvFlags} toggleFlag={toggleCv} /></main>}
      {!err && tab === "concommands" && <main><ConCommandsView game={game} platform={platform} q={cmQ} setQ={setCmQ} flags={cmFlags} toggleFlag={toggleCm} /></main>}
      {!err && tab === "events" && <main><EventsView game={game} platform={platform} q={evQ} setQ={setEvQ} mods={evMods} toggleMod={toggleEv} sel={evSel} setSel={setEvSel} /></main>}
    </>
  );
}
