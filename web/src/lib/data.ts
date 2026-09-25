import type { Meta, Scope, ConVar, ConCommand, GameEvent, IndexEntry, ScriptApi } from "@/types";

const base = import.meta.env.BASE_URL;

async function getJson<T>(path: string): Promise<T> {
  const res = await fetch(`${base}data/${path}`);
  if (!res.ok) throw new Error(`fetch ${path}: ${res.status}`);
  return res.json() as Promise<T>;
}

export const GAMES = ["cs2", "dota2", "deadlock"] as const;
export type Game = (typeof GAMES)[number];

export const GAME_INFO: Record<Game, { title: string; short: string }> = {
  cs2: { title: "Counter-Strike 2", short: "CS" },
  dota2: { title: "Dota 2", short: "D2" },
  deadlock: { title: "Deadlock", short: "DL" },
};

export const PLATFORMS = ["win64", "linux"] as const;
export type Platform = (typeof PLATFORMS)[number];

export const loadMeta = (g: Game, p: Platform) => getJson<Meta>(`${g}/${p}/meta.json`);
export const loadIndex = (g: Game, p: Platform) => getJson<IndexEntry[]>(`${g}/${p}/index.json`);
export const loadScope = (g: Game, p: Platform, file: string) => getJson<Scope>(`${g}/${p}/${file}`);
export const loadConVars = (g: Game, p: Platform) => getJson<ConVar[]>(`${g}/${p}/convars.json`);
export const loadConCommands = (g: Game, p: Platform) => getJson<ConCommand[]>(`${g}/${p}/concommands.json`);
export const loadEvents = (g: Game, p: Platform) => getJson<GameEvent[]>(`${g}/${p}/events.json`);
export const loadScriptApi = (g: Game, p: Platform) => getJson<ScriptApi>(`${g}/${p}/vscript.json`);

// per game: patch version (for the game tab) and which platforms actually have a dump
export type GameAvail = { patch: string; platforms: Platform[] };
export async function loadGameAvail(): Promise<Record<Game, GameAvail>> {
  const probe = (g: Game, p: Platform) => loadMeta(g, p).then((m) => m, () => null);
  const out = {} as Record<Game, GameAvail>;
  await Promise.all(GAMES.map(async (g) => {
    const metas = await Promise.all(PLATFORMS.map((p) => probe(g, p)));
    const m = metas.find(Boolean);
    out[g] = { patch: m?.patchVersion ?? "", platforms: PLATFORMS.filter((_, i) => metas[i]) };
  }));
  return out;
}

// memoized per game/platform so switching tabs doesn't refetch the big lists
const listCache = new Map<string, Promise<unknown>>();
function cached<T>(key: string, load: () => Promise<T>): Promise<T> {
  let p = listCache.get(key) as Promise<T> | undefined;
  if (!p) { p = load(); listCache.set(key, p); p.catch(() => listCache.delete(key)); }
  return p;
}
export const getConVars = (g: Game, p: Platform) => cached(`cv:${g}/${p}`, () => loadConVars(g, p));
export const getConCommands = (g: Game, p: Platform) => cached(`cc:${g}/${p}`, () => loadConCommands(g, p));
export const getEvents = (g: Game, p: Platform) => cached(`ev:${g}/${p}`, () => loadEvents(g, p));
export const getScriptApi = (g: Game, p: Platform) => cached(`vs:${g}/${p}`, () => loadScriptApi(g, p));
