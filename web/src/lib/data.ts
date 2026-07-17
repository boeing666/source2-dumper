import type { Meta, Scope, ConVar, ConCommand, GameEvent, IndexEntry } from "@/types";

// JSON lives under <base>/data/<platform>/ (the C++ dumper output, copied into public/data in CI).
const base = import.meta.env.BASE_URL;

async function getJson<T>(path: string): Promise<T> {
  const res = await fetch(`${base}data/${path}`);
  if (!res.ok) throw new Error(`fetch ${path}: ${res.status}`);
  return res.json() as Promise<T>;
}

export const PLATFORMS = ["win64", "linux"] as const;
export type Platform = (typeof PLATFORMS)[number];

export const loadMeta = (p: Platform) => getJson<Meta>(`${p}/meta.json`);
export const loadIndex = (p: Platform) => getJson<IndexEntry[]>(`${p}/index.json`);
export const loadScope = (p: Platform, file: string) => getJson<Scope>(`${p}/${file}`);
export const loadConVars = (p: Platform) => getJson<ConVar[]>(`${p}/convars.json`);
export const loadConCommands = (p: Platform) => getJson<ConCommand[]>(`${p}/concommands.json`);
export const loadEvents = (p: Platform) => getJson<GameEvent[]>(`${p}/events.json`);
