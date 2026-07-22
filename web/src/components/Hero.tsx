import type { IndexEntry } from "@/types";
import { SearchBox } from "@/components/SearchBox";
import { Dropdown } from "@/components/Dropdown";

const SortIcon = (
  <svg viewBox="0 0 14 14" width="13" height="13" fill="none" stroke="currentColor" strokeWidth="1.5" strokeLinecap="round" aria-hidden="true">
    <path d="M2 3.5h9M2 7h6M2 10.5h3" />
  </svg>
);

export const SORTS: [string, string][] = [
  ["name", "A → Z"], ["dep", "inheritance depth"], ["nf", "field count"],
  ["ni", "inputs"], ["no", "outputs"], ["nk", "keyfields"],
];
const KIND_META: [string, string, string, string][] = [
  ["class", "kb-class", "C", "classes"],
  ["struct", "kb-struct", "S", "structs"],
  ["enum", "kb-enum", "E", "enums"],
];

export function Hero({
  index, query, setQuery, sort, setSort, libs, toggleLib, kinds, toggleKind, scopes, onPick,
}: {
  index: IndexEntry[]; query: string; setQuery: (v: string) => void; sort: string; setSort: (v: string) => void;
  libs: Set<string>; toggleLib: (s: string) => void; kinds: Set<string>; toggleKind: (k: string) => void;
  scopes: string[]; onPick: (e: IndexEntry, field?: string) => void;
}) {
  return (
    <div className="hero">
      <div className="ex">
        by class name <code onClick={() => setQuery("CBaseEntity")}>CBaseEntity</code> ·{" "}
        by field name <code onClick={() => setQuery("m_iHealth")}>m_iHealth</code> ·{" "}
        by offset <code onClick={() => setQuery("720")}>720</code> ·{" "}
        hex <code onClick={() => setQuery("0x2D0")}>0x2D0</code>
      </div>
      <div className="herosearch">
        <SearchBox index={index} query={query} setQuery={setQuery} onPick={onPick} autoFocus />
      </div>
      <div className="filters">
        <div className="fline">
          <Dropdown value={sort} options={SORTS} onChange={setSort} ariaLabel="sort" title="sort order" icon={SortIcon} />
          <span className="fsep" />
          {KIND_META.map(([k, cls, ltr, plural]) => (
            <button key={k} className={"fchip" + (kinds.has(k) ? " on" : "")} onClick={() => toggleKind(k)}>
              <span className={"kb " + cls}>{ltr}</span>{plural}
            </button>
          ))}
        </div>
        <div className="fline">
          {scopes.map((sc) => (
            <button key={sc} className={"fchip" + (libs.has(sc) ? " on" : "")} onClick={() => toggleLib(sc)}>
              {sc}
            </button>
          ))}
        </div>
      </div>
    </div>
  );
}
