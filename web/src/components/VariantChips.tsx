import type { IndexEntry } from "@/types";

export function VariantChips({ scope, variants, onVariant }: {
  scope: string; variants: IndexEntry[]; onVariant: (e: IndexEntry) => void;
}) {
  if (variants.length < 2) return null;
  return (
    <span className="vars" title="this type is bound in several modules">
      {variants.map((v) => (
        <a key={v.scope} className={"chip vr" + (v.scope === scope ? " cur" : "")}
           onClick={() => v.scope !== scope && onVariant(v)}>{v.scope}</a>
      ))}
    </span>
  );
}
