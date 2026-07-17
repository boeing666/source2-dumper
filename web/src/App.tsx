import { useEffect, useMemo, useRef, useState } from "react";
import { type Platform, loadMeta, loadIndex, loadScope } from "@/lib/data";
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
  const scopeCache = useRef<Map<string, Scope>>(new Map());
  const [scopeData, setScopeData] = useState<Scope | null>(null);
  // class named in the initial URL (resolved to a Selected once the index loads); blocks URL writes until resolved
  const pending = useRef<{ name: string; field?: string } | null>(
    init.tab === "schema" && init.className ? { name: init.className, field: init.field } : null
  );

  useEffect(() => { document.body.classList.toggle("showpad", pad); }, [pad]);

  useEffect(() => {
    setErr(null); setMeta(null); setIndex([]); scopeCache.current.clear();
    Promise.all([loadMeta(platform), loadIndex(platform)])
      .then(([m, ix]) => { setMeta(m); setIndex(ix); })
      .catch((e) => setErr(String(e)));
  }, [platform]);

  const nameMap = useMemo(() => { const m = new Map<string, IndexEntry>(); for (const e of index) m.set(e.name, e); return m; }, [index]);
  const known = useMemo(() => new Set(index.map((e) => e.name)), [index]);
  const scopeNames = useMemo(() => (meta ? meta.scopes.map((s) => s.scope) : []), [meta]);

  // resolve the URL's class once the index is available
  useEffect(() => {
    if (!pending.current || nameMap.size === 0) return;
    const e = nameMap.get(pending.current.name);
    if (e) setSelected({ name: e.name, file: e.file, targetField: pending.current.field });
    pending.current = null;
  }, [nameMap]);

  // external URL changes (manual edit, opened share link, back/forward)
  useEffect(() => {
    const onNav = () => {
      const s = fromHash(location.hash);
      setTab(s.tab); setPlatform(s.platform);
      if (s.tab === "schema") {
        setQuery(s.q); setSort(s.sort); setKinds(s.kinds); setLibs(s.libs);
        const e = s.className ? nameMap.get(s.className) : undefined;
        setSelected(e ? { name: e.name, file: e.file, targetField: s.field } : null);
      } else if (s.tab === "convars") { setCvQ(s.q); setCvFlags(s.flags); }
      else if (s.tab === "concommands") { setCmQ(s.q); setCmFlags(s.flags); }
      else { setEvQ(s.q); setEvMods(s.mods); setEvSel(s.ev); }
    };
    window.addEventListener("hashchange", onNav);
    window.addEventListener("popstate", onNav);
    return () => { window.removeEventListener("hashchange", onNav); window.removeEventListener("popstate", onNav); };
  }, [nameMap]);

  // write state to URL (replaceState → no reload / no loop; wait until the initial class is resolved)
  useEffect(() => {
    if (pending.current) return;
    const h = toHash({ tab, platform, selected, query, sort, kinds, libs, cvQ, cvFlags, cmQ, cmFlags, evQ, evMods, evSel });
    if (location.hash !== h) history.replaceState(null, "", h);
  }, [tab, platform, selected, query, sort, kinds, libs, cvQ, cvFlags, cmQ, cmFlags, evQ, evMods, evSel]);

  useEffect(() => {
    if (!selected) { setScopeData(null); return; }
    const cached = scopeCache.current.get(selected.file);
    if (cached) { setScopeData(cached); return; }
    setScopeData(null);
    loadScope(platform, selected.file).then((s) => { scopeCache.current.set(selected.file, s); setScopeData(s); });
  }, [selected, platform]);

  const pick = (e: IndexEntry, field?: string) => { setTab("schema"); setSelected({ name: e.name, file: e.file, targetField: field }); };
  const navByName = (name: string) => { const e = nameMap.get(name); if (e) { setTab("schema"); setSelected({ name: e.name, file: e.file, targetField: undefined }); } };
  const goBack = () => setSelected(null);
  const onField = (f: string) => setSelected((s) => (s ? { ...s, targetField: f } : s));
  const toggleCv = (f: string) => setCvFlags((s) => { const n = new Set(s); if (n.has(f)) n.delete(f); else n.add(f); return n; });
  const toggleCm = (f: string) => setCmFlags((s) => { const n = new Set(s); if (n.has(f)) n.delete(f); else n.add(f); return n; });
  const toggleEv = (m: string) => setEvMods((s) => { const n = new Set(s); if (n.has(m)) n.delete(m); else n.add(m); return n; });

  const chain = useMemo(() => {
    if (!selected) return [];
    const out = [selected.name];
    let cur = nameMap.get(selected.name);
    const seen = new Set(out);
    while (cur?.parent && nameMap.has(cur.parent) && !seen.has(cur.parent)) {
      out.push(cur.parent); seen.add(cur.parent); cur = nameMap.get(cur.parent);
    }
    return out;
  }, [selected, nameMap]);

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
      <TopBar platform={platform} setPlatform={setPlatform} tab={tab} setTab={setTab}
              hex={hex} setHex={setHex} pad={pad} setPad={setPad} />

      {!err && meta && (
        <div className="subbar">
          <span>PatchVersion <b>{meta.patchVersion}</b></span>
          <span>ServerVersion <b>{meta.serverVersion}</b></span>
        </div>
      )}

      {err && <div className="loading" style={{ padding: 18 }}>no data for {platform}: {err}</div>}

      {!err && tab === "schema" && (
        <main>
          <div id="home">
            <Hero index={index} query={query} setQuery={setQuery} sort={sort} setSort={setSort}
                  libs={libs} toggleLib={(s) => toggleSet(libs, setLibs, s)}
                  kinds={kinds} toggleKind={(k) => toggleSet(kinds, setKinds, k)}
                  scopes={scopeNames} onPick={pick} />
            <div className="content">
              {selected ? (
                scopeData == null ? <div className="loading">loading…</div>
                : selCls ? <ClassDetail cls={selCls} chain={chain} known={known} hex={hex} onNav={navByName} onBack={goBack} onField={onField} platform={platform} targetField={selected.targetField} />
                : selEnum ? <EnumDetail en={selEnum} hex={hex} onBack={goBack} />
                : <div className="loading">not found: {selected.name}</div>
              ) : (
                <TypesList entries={filteredIndex} sort={sort} onPick={pick} />
              )}
            </div>
          </div>
        </main>
      )}

      {!err && tab === "convars" && <main><ConVarsView platform={platform} q={cvQ} setQ={setCvQ} flags={cvFlags} toggleFlag={toggleCv} /></main>}
      {!err && tab === "concommands" && <main><ConCommandsView platform={platform} q={cmQ} setQ={setCmQ} flags={cmFlags} toggleFlag={toggleCm} /></main>}
      {!err && tab === "events" && <main><EventsView platform={platform} q={evQ} setQ={setEvQ} mods={evMods} toggleMod={toggleEv} sel={evSel} setSel={setEvSel} /></main>}
    </>
  );
}
