// Full app state <-> URL hash, so refresh / shared links restore tab + platform + selection + filters.
import { GAMES, type Game, type Platform } from "@/lib/data";

export type Selected = { name: string; file: string; scope: string; targetField?: string };

export const TABS = ["all", "schema", "convars", "concommands", "events", "vscript"] as const;
export type Tab = (typeof TABS)[number];
export const TAB_LABEL: Record<Tab, string> = {
  all: "All", schema: "schema", convars: "convars", concommands: "commands", events: "events", vscript: "vscript",
};

export type UrlState = {
  tab: Tab; game: Game; platform: Platform; selected: Selected | null;
  dup: boolean; // selected type is bound in several modules -> the scope must be in the URL
  q: string; // one query shared by every section
  sort: string; kinds: Set<string>; libs: Set<string>;
  cvFlags: Set<string>; cmFlags: Set<string>;
  evMods: Set<string>; evSel: string;
  vsSel: string;
};

export function toHash(st: UrlState): string {
  const detail = st.tab === "schema" && st.selected;
  let path: string = st.tab === "concommands" ? "commands" : st.tab;
  if (detail) {
    path += "/" + encodeURIComponent(st.selected!.name);
    if (st.selected!.targetField) path += "/" + encodeURIComponent(st.selected!.targetField);
  }
  const p = new URLSearchParams();
  if (st.game !== "cs2") p.set("g", st.game);
  if (st.platform !== "win64") p.set("p", st.platform);
  if (detail) {
    if (st.dup && st.selected!.scope) p.set("sc", st.selected!.scope);
  } else {
    if (st.q) p.set("q", st.q);
    const set = (k: string, s: Set<string>) => { if (s.size) p.set(k, [...s].join(",")); };
    if (st.tab === "schema") {
      if (st.sort !== "name") p.set("sort", st.sort);
      set("kinds", st.kinds); set("libs", st.libs);
    } else if (st.tab === "convars") set("flags", st.cvFlags);
    else if (st.tab === "concommands") set("flags", st.cmFlags);
    else if (st.tab === "events") { set("mods", st.evMods); if (st.evSel) p.set("ev", st.evSel); }
    else if (st.tab === "vscript" && st.vsSel) p.set("sel", st.vsSel);
  }
  const qs = p.toString();
  return "#" + path + (qs ? "?" + qs : "");
}

export function fromHash(hash: string) {
  const raw = hash.replace(/^#/, "");
  const [pathPart = "", queryPart = ""] = raw.split("?");
  const segs = pathPart.split("/").filter(Boolean).map(decodeURIComponent);
  let t = segs[0] || "all";
  if (t === "commands") t = "concommands";
  const tab = ((TABS as readonly string[]).includes(t) ? t : "all") as Tab;
  const p = new URLSearchParams(queryPart);
  const set = (k: string) => new Set((p.get(k) || "").split(",").filter(Boolean));
  const g = p.get("g") || "cs2";
  return {
    tab,
    game: ((GAMES as readonly string[]).includes(g) ? g : "cs2") as Game,
    platform: (p.get("p") === "linux" ? "linux" : "win64") as Platform,
    className: tab === "schema" ? segs[1] || null : null,
    field: tab === "schema" ? segs[2] || undefined : undefined,
    sc: tab === "schema" ? p.get("sc") || undefined : undefined,
    q: p.get("q") || "",
    sort: p.get("sort") || "name",
    kinds: set("kinds"), libs: set("libs"), flags: set("flags"), mods: set("mods"),
    ev: p.get("ev") || "",
    sel: p.get("sel") || "",
  };
}
