import type { IndexEntry } from "@/types";
import { Dropdown } from "@/components/Dropdown";
import { TypesList } from "@/components/TypesList";

const SortIcon = (
  <svg viewBox="0 0 14 14" width="13" height="13" fill="none" stroke="currentColor" strokeWidth="1.5" strokeLinecap="round" aria-hidden="true">
    <path d="M2 3.5h9M2 7h6M2 10.5h3" />
  </svg>
);

const SORTS: [string, string][] = [
  ["name", "A → Z"], ["dep", "inheritance depth"], ["nf", "field count"],
  ["ni", "inputs"], ["no", "outputs"], ["nk", "keyfields"],
];
const KIND_META: [string, string, string][] = [["class", "C", "classes"], ["struct", "S", "structs"], ["enum", "E", "enums"]];

export function SchemaView({ entries, scopes, sort, setSort, libs, toggleLib, kinds, toggleKind, onPick, q }: {
  entries: IndexEntry[]; scopes: [string, number][]; sort: string; setSort: (v: string) => void;
  libs: Set<string>; toggleLib: (s: string) => void; kinds: Set<string>; toggleKind: (k: string) => void;
  onPick: (e: IndexEntry) => void; q: string;
}) {
  return (
    <div className="page schema">
      <div className="fbar">
        <Dropdown value={sort} options={SORTS} onChange={setSort} ariaLabel="sort" title="sort order" icon={SortIcon} />
        <span className="fsep" />
        {KIND_META.map(([k, ltr, plural]) => (
          <button key={k} className={"fchip" + (kinds.has(k) ? " on" : "")} onClick={() => toggleKind(k)}>
            <span className={"kb kb-" + k}>{ltr}</span>{plural}
          </button>
        ))}
        <span className="fsep" />
        {scopes.map(([sc, n]) => (
          <button key={sc} className={"fchip" + (libs.has(sc) ? " on" : "")} onClick={() => toggleLib(sc)}>
            {sc.replace(/\.dll$/, "")}<span className="ct">{n}</span>
          </button>
        ))}
      </div>
      {entries.length ? <TypesList entries={entries} sort={sort} onPick={onPick} />
        : <div className="empty">No types match{q ? <> <b>{q}</b></> : ""} with these filters.</div>}
    </div>
  );
}
