import { useEffect, useState } from "react";

const systemDark = () => window.matchMedia?.("(prefers-color-scheme: dark)").matches ?? true;

const Sun = (
  <svg viewBox="0 0 24 24" width="16" height="16" fill="none" stroke="currentColor" strokeWidth="2" strokeLinecap="round" strokeLinejoin="round" aria-hidden="true">
    <circle cx="12" cy="12" r="4" />
    <path d="M12 2v2M12 20v2M4.9 4.9l1.4 1.4M17.7 17.7l1.4 1.4M2 12h2M20 12h2M4.9 19.1l1.4-1.4M17.7 6.3l1.4-1.4" />
  </svg>
);
const Moon = (
  <svg viewBox="0 0 24 24" width="16" height="16" fill="none" stroke="currentColor" strokeWidth="2" strokeLinecap="round" strokeLinejoin="round" aria-hidden="true">
    <path d="M21 12.8A9 9 0 1 1 11.2 3 7 7 0 0 0 21 12.8z" />
  </svg>
);

export function ThemeToggle() {
  // null = follow the OS (prefers-color-scheme); a value = the user has forced a theme.
  const [theme, setTheme] = useState<"light" | "dark" | null>(() => {
    const s = localStorage.getItem("theme");
    return s === "light" || s === "dark" ? s : null;
  });

  useEffect(() => {
    const root = document.documentElement;
    if (theme) { root.setAttribute("data-theme", theme); localStorage.setItem("theme", theme); }
    else { root.removeAttribute("data-theme"); localStorage.removeItem("theme"); }
  }, [theme]);

  const effective = theme ?? (systemDark() ? "dark" : "light");
  const next = effective === "dark" ? "light" : "dark";
  return (
    <button className="themebtn" title={`switch to ${next} theme`} aria-label="toggle color theme"
            onClick={() => setTheme(next)}>
      {effective === "dark" ? Moon : Sun}
    </button>
  );
}
