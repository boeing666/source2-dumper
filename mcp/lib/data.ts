// Reads the dumps the static site publishes (https://boeing666.github.io/source2-dumper/data/<game>/<platform>/...)
// and keeps them in memory for the life of the function instance. The shapes mirror the C++ dumper's JSON
// (src/output/json_writer.cpp) and web/src/types.ts.

export const GAMES = ["cs2", "dota2", "deadlock"] as const;
export type Game = (typeof GAMES)[number];
export const PLATFORMS = ["win64", "linux"] as const;
export type Platform = (typeof PLATFORMS)[number];

export const DATA_URL = (process.env.S2DUMP_DATA_URL ?? "https://boeing666.github.io/source2-dumper/data").replace(/\/$/, "");

// GitHub Pages serves these with max-age=600, so a dump is never fresher than that anyway.
const TTL_MS = 10 * 60 * 1000;

export interface Field {
  name: string; type: string; offset: number; size: number; align: number;
  networked: boolean; bits: number; metadata: string[];
}
export interface Datamap { kind: "input" | "output" | "keyfield" | "field"; name: string; target: string; type: string }
export interface ClassInfo {
  name: string; parent: string; isStruct: boolean; size: number; align: number; inheritDepth: number;
  project: string; flags: string[]; baseClasses: { name: string; offset: number }[]; chain?: string[];
  entity: boolean; metadata: string[]; fields: Field[]; datamap: Datamap[]; refs: string[];
}
export interface EnumInfo {
  name: string; size: number; underlying: string; project: string; metadata: string[];
  values: { name: string; value: number }[];
}
export interface Scope { scope: string; classes: ClassInfo[]; enums: EnumInfo[] }
export interface Meta {
  game?: string; platform: string; patchVersion: string; serverVersion: string;
  types: number; classes: number; enums: number; convars: number; concommands: number;
  networkFields: number; events: number;
  scopes: { scope: string; file: string; classes: number; enums: number }[];
}
export interface IndexEntry {
  name: string; kind: "class" | "struct" | "enum"; scope: string; file: string; parent: string;
  entity: boolean; nf: number; depth: number; ni: number; no: number; nk: number;
  fields: string; offsets: string; // space-joined, aligned with each other
}
export interface ConVar {
  name: string; module: string; type: string; defaultValue: string; minValue: string; maxValue: string;
  help: string; flags: string[];
}
export interface ConCommand { name: string; module: string; help: string; flags: string[] }
export interface GameEvent { name: string; module: string; fields: { name: string; type: string }[] }
export interface ScriptFunction { name: string; returnType: string; params: { name: string; type: string }[]; description: string }
export interface ScriptApi {
  functions: ScriptFunction[];
  instances: { name: string; className: string }[];
  classes: { name: string; scriptName: string; base: string; description: string; functions: ScriptFunction[] }[];
  constants: { name: string; type: string; value: string }[];
}

// SteamTracking/Protobufs, one file per game (web/scripts/protobufs.mjs)
export interface ProtoField {
  name: string; id: number; rule?: "optional" | "repeated" | "required"; type: string; ref?: string;
  default?: string; oneof?: string; comment?: string;
}
export interface ProtoType {
  kind: "message" | "enum"; name: string; file: string; comment?: string;
  fields?: ProtoField[]; values?: { name: string; value: number; comment?: string }[];
}
export interface ProtoService {
  name: string; file: string; comment?: string;
  methods: { name: string; request: string; response: string; requestRef?: string; responseRef?: string; comment?: string }[];
}
export interface Protobufs {
  source: { repo: string; path: string; commit: string; date: string };
  files: { name: string; imports: string[]; messages: number; enums: number }[];
  types: ProtoType[]; services: ProtoService[];
}

export class NotDumped extends Error {}

const cache = new Map<string, { at: number; value: Promise<unknown> }>();

async function fetchJson<T>(path: string): Promise<T> {
  const res = await fetch(`${DATA_URL}/${path}`);
  // an HTML answer is a host's not-found / SPA fallback page, not a dump
  if (res.status === 404 || res.headers.get("content-type")?.includes("text/html")) throw new NotDumped(path);
  if (!res.ok) throw new Error(`fetching ${path} failed: HTTP ${res.status}`);
  return (await res.json()) as T;
}

function cached<T>(path: string): Promise<T> {
  const hit = cache.get(path);
  if (hit && Date.now() - hit.at < TTL_MS) return hit.value as Promise<T>;
  const value = fetchJson<T>(path);
  cache.set(path, { at: Date.now(), value });
  value.catch(() => cache.delete(path));
  return value;
}

const at = (g: Game, p: Platform, file: string) => `${g}/${p}/${file}`;
export const loadMeta = (g: Game, p: Platform) => cached<Meta>(at(g, p, "meta.json"));
export const loadIndex = (g: Game, p: Platform) => cached<IndexEntry[]>(at(g, p, "index.json"));
export const loadScope = (g: Game, p: Platform, file: string) => cached<Scope>(at(g, p, file));
export const loadConVars = (g: Game, p: Platform) => cached<ConVar[]>(at(g, p, "convars.json"));
export const loadConCommands = (g: Game, p: Platform) => cached<ConCommand[]>(at(g, p, "concommands.json"));
export const loadEvents = (g: Game, p: Platform) => cached<GameEvent[]>(at(g, p, "events.json"));
export const loadScriptApi = (g: Game, p: Platform) => cached<ScriptApi>(at(g, p, "vscript.json"));
export const loadProtobufs = (g: Game) => cached<Protobufs>(`${g}/protobufs.json`);
