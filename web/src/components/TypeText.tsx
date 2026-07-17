// Renders a C++ type string, linkifying any token that is a known type.
export function TypeText({ type, known, onNav }: { type: string; known: Set<string>; onNav: (n: string) => void }) {
  const parts = type.match(/([A-Za-z_][\w:]*|[^A-Za-z_]+)/g) ?? [type];
  return (
    <>
      {parts.map((p, i) =>
        /^[A-Za-z_]/.test(p) && known.has(p) ? (
          <a key={i} className="ty" onClick={() => onNav(p)}>{p}</a>
        ) : (
          <span key={i}>{p}</span>
        )
      )}
    </>
  );
}
