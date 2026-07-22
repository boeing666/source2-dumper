import { useEffect, useRef, useState, type ReactNode } from "react";

export function Dropdown({
  value, options, onChange, ariaLabel, title, icon, align = "left",
}: {
  value: string;
  options: [string, string][];
  onChange: (v: string) => void;
  ariaLabel?: string;
  title?: string;
  icon?: ReactNode;
  align?: "left" | "right";
}) {
  const [open, setOpen] = useState(false);
  const ref = useRef<HTMLDivElement>(null);

  useEffect(() => {
    if (!open) return;
    const onDoc = (e: MouseEvent) => {
      if (ref.current && !ref.current.contains(e.target as Node)) setOpen(false);
    };
    const onKey = (e: KeyboardEvent) => { if (e.key === "Escape") setOpen(false); };
    document.addEventListener("mousedown", onDoc);
    document.addEventListener("keydown", onKey);
    return () => {
      document.removeEventListener("mousedown", onDoc);
      document.removeEventListener("keydown", onKey);
    };
  }, [open]);

  const cur = options.find(([k]) => k === value);

  return (
    <div className="dd" ref={ref}>
      <button className={"dd-btn" + (open ? " open" : "")} onClick={() => setOpen((o) => !o)}
              aria-haspopup="listbox" aria-expanded={open} aria-label={ariaLabel} title={title}>
        {icon && <span className="dd-ico">{icon}</span>}
        <span className="dd-val">{cur ? cur[1] : value}</span>
        <svg className="dd-caret" viewBox="0 0 10 6" width="10" height="6" aria-hidden="true">
          <path d="M1 1l4 4 4-4" fill="none" stroke="currentColor" strokeWidth="1.6" strokeLinecap="round" strokeLinejoin="round" />
        </svg>
      </button>
      {open && (
        <div className={"dd-menu" + (align === "right" ? " right" : "")} role="listbox">
          {options.map(([k, l]) => (
            <button key={k} role="option" aria-selected={value === k}
                    className={"dd-opt" + (value === k ? " sel" : "")}
                    onClick={() => { onChange(k); setOpen(false); }}>
              <span className="dd-check">
                {value === k && (
                  <svg viewBox="0 0 12 12" width="12" height="12" aria-hidden="true">
                    <path d="M2.5 6.5l2.5 2.5 4.5-5" fill="none" stroke="currentColor" strokeWidth="1.7" strokeLinecap="round" strokeLinejoin="round" />
                  </svg>
                )}
              </span>
              {l}
            </button>
          ))}
        </div>
      )}
    </div>
  );
}
