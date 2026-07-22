// Full app state <-> URL hash, so refresh / shared links restore tab + platform + selection + filters.
import { GAMES, type Game, type Platform } from "@/lib/data";

export type Selected = { name: string; file: string; targetField?: string };

export type UrlState = {
  tab: string; game: Game; platform: Platform; selected: Selected | null;
  query: string; sort: string; kinds: Set<string>; libs: Set<string>;
  cvQ: string; cvFlags: Set<string>; cmQ: string; cmFlags: Set<string>;
  evQ: string; evMods: Set<string>; evSel: string;
};

export function toHash(st: UrlState): string {
  const seg = st.tab === "concommands" ? "commands" : st.tab;
  let path = seg;
  if (st.tab === "schema" && st.selected) {
    path += "/" + encodeURIComponent(st.selected.name);
    if (st.selected.targetField) path += "/" + encodeURIComponent(st.selected.targetField);
  }
  const p = new URLSearchParams();
  if (st.game !== "cs2") p.set("g", st.game);
  if (st.platform !== "win64") p.set("p", st.platform);
  if (st.tab === "schema") {
    if (!st.selected) {
      if (st.query) p.set("q", st.query);
      if (st.sort !== "name") p.set("sort", st.sort);
      if (st.kinds.size) p.set("kinds", [...st.kinds].join(","));
      if (st.libs.size) p.set("libs", [...st.libs].join(","));
    }
  } else if (st.tab === "convars") {
    if (st.cvQ) p.set("q", st.cvQ);
    if (st.cvFlags.size) p.set("flags", [...st.cvFlags].join(","));
  } else if (st.tab === "concommands") {
    if (st.cmQ) p.set("q", st.cmQ);
    if (st.cmFlags.size) p.set("flags", [...st.cmFlags].join(","));
  } else {
    if (st.evQ) p.set("q", st.evQ);
    if (st.evMods.size) p.set("mods", [...st.evMods].join(","));
    if (st.evSel) p.set("ev", st.evSel);
  }
  const qs = p.toString();
  return "#" + path + (qs ? "?" + qs : "");
}

export function fromHash(hash: string) {
  const raw = hash.replace(/^#/, "");
  const [pathPart = "", queryPart = ""] = raw.split("?");
  const segs = pathPart.split("/").filter(Boolean).map(decodeURIComponent);
  let tab = segs[0] || "schema";
  if (tab === "commands") tab = "concommands";
  if (!["schema", "convars", "concommands", "events"].includes(tab)) tab = "schema";
  const p = new URLSearchParams(queryPart);
  const set = (k: string) => new Set((p.get(k) || "").split(",").filter(Boolean));
  const g = p.get("g") || "cs2";
  return {
    tab,
    game: ((GAMES as readonly string[]).includes(g) ? g : "cs2") as Game,
    platform: (p.get("p") === "linux" ? "linux" : "win64") as Platform,
    className: tab === "schema" ? segs[1] || null : null,
    field: tab === "schema" ? segs[2] || undefined : undefined,
    q: p.get("q") || "",
    sort: p.get("sort") || "name",
    kinds: set("kinds"), libs: set("libs"), flags: set("flags"), mods: set("mods"),
    ev: p.get("ev") || "",
  };
}
