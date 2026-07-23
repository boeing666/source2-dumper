// Mirrors the JSON emitted by the C++ dumper (src/json_writer.cpp).

export interface Field {
  name: string;
  type: string;
  offset: number;
  size: number;
  align: number; // -1 = unspecified
  networked: boolean;
  bits: number; // 0 = not a bitfield
  metadata: string[];
}

export interface BaseClass {
  name: string;
  offset: number;
}

export interface Datamap {
  kind: "input" | "output" | "keyfield" | "field";
  name: string;
  target: string; // handler (inputs) or member it writes (outputs/keyfields/fields)
  type: string; // FIELD_*
}

export interface EnumValue {
  name: string;
  value: number;
}

export interface EnumInfo {
  name: string;
  size: number;
  underlying: string;
  project: string;
  metadata: string[];
  values: EnumValue[];
}

export interface ClassInfo {
  name: string;
  parent: string;
  isStruct: boolean;
  size: number;
  align: number;
  inheritDepth: number;
  project: string;
  flagsRaw: number;
  flags: string[];
  baseClasses: BaseClass[];
  chain?: string[]; // [self, base, ...] resolved in-scope by the dumper (optional: absent in older dumps)
  entity: boolean;
  metadata: string[];
  fields: Field[];
  datamap: Datamap[];
  refs: string[];
}

export interface Scope {
  scope: string;
  classes: ClassInfo[];
  enums: EnumInfo[];
}

export interface ScopeIndex {
  scope: string;
  file: string;
  classes: number;
  enums: number;
}

export interface Meta {
  platform: string;
  patchVersion: string;
  serverVersion: string;
  types: number;
  classes: number;
  enums: number;
  convars: number;
  concommands: number;
  networkFields: number;
  events: number;
  scopes: ScopeIndex[];
}

// compact global index (search / home / sort / filters)
export interface IndexEntry {
  name: string;
  kind: "class" | "struct" | "enum";
  scope: string;
  file: string;
  parent: string;
  entity: boolean;
  nf: number;
  depth: number;
  ni: number;
  no: number;
  nk: number;
  fields: string; // space-joined field names
  offsets: string; // space-joined hex offsets (aligned with fields)
}

export interface ConVar {
  name: string;
  type: string;
  defaultValue: string;
  minValue: string;
  maxValue: string;
  help: string;
  flagsRaw: number;
  flags: string[];
}

export interface ConCommand {
  name: string;
  help: string;
  flagsRaw: number;
  flags: string[];
}

export interface GameEventField {
  name: string;
  type: string;
}

export interface GameEvent {
  name: string;
  module: string; // game | mod | core
  fields: GameEventField[];
}
