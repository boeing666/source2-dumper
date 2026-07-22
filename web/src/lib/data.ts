import type { Meta, Scope, ConVar, ConCommand, GameEvent, IndexEntry } from "@/types";

const base = import.meta.env.BASE_URL;

async function getJson<T>(path: string): Promise<T> {
  const res = await fetch(`${base}data/${path}`);
  if (!res.ok) throw new Error(`fetch ${path}: ${res.status}`);
  return res.json() as Promise<T>;
}

export const GAMES = ["cs2", "dota2", "deadlock"] as const;
export type Game = (typeof GAMES)[number];

export const PLATFORMS = ["win64", "linux"] as const;
export type Platform = (typeof PLATFORMS)[number];

export const loadMeta = (g: Game, p: Platform) => getJson<Meta>(`${g}/${p}/meta.json`);
export const loadIndex = (g: Game, p: Platform) => getJson<IndexEntry[]>(`${g}/${p}/index.json`);
export const loadScope = (g: Game, p: Platform, file: string) => getJson<Scope>(`${g}/${p}/${file}`);
export const loadConVars = (g: Game, p: Platform) => getJson<ConVar[]>(`${g}/${p}/convars.json`);
export const loadConCommands = (g: Game, p: Platform) => getJson<ConCommand[]>(`${g}/${p}/concommands.json`);
export const loadEvents = (g: Game, p: Platform) => getJson<GameEvent[]>(`${g}/${p}/events.json`);
