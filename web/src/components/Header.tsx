import type { ReactNode } from "react";
import { GAMES, GAME_INFO, PLATFORMS, type Game, type GameAvail, type Platform } from "@/lib/data";
import { ThemeToggle } from "@/components/ThemeToggle";

const WinIcon = (
  <svg width="12" height="12" viewBox="0 0 16 16" fill="currentColor" aria-hidden="true">
    <path d="M0 2.2 6.5 1.3v6.2H0zM7.3 1.2 16 0v7.5H7.3zM0 8.3h6.5v6.3L0 13.7zM7.3 8.3H16V16l-8.7-1.2z" />
  </svg>
);
const LinuxIcon = (
  <svg width="12" height="13" viewBox="0 0 16 18" fill="currentColor" aria-hidden="true">
    <path d="M8 0C5.8 0 4.6 1.9 4.6 4.3c0 1.3.3 2.2-.4 3.4C3 9.6 1.6 11.6 2.3 13.6c.3.8 1 .9 1.5 1.4.6.7.8 2 2.3 2.2 1 .1 1.3-.6 1.9-.6s.9.7 1.9.6c1.5-.2 1.7-1.5 2.3-2.2.5-.5 1.2-.6 1.5-1.4.7-2-.7-4-1.9-5.9-.7-1.2-.4-2.1-.4-3.4C11.4 1.9 10.2 0 8 0zm0 7.2c1.6 0 2.8 1.9 2.8 4.3S9.6 15 8 15s-2.8-1.1-2.8-3.5S6.4 7.2 8 7.2zM6.6 3.3c.4 0 .6.4.6.9s-.2.9-.6.9-.6-.4-.6-.9.2-.9.6-.9zm2.8 0c.4 0 .6.4.6.9s-.2.9-.6.9-.6-.4-.6-.9.2-.9.6-.9z" />
  </svg>
);
const GitHubIcon = (
  <svg viewBox="0 0 16 16" width="17" height="17" fill="currentColor" aria-hidden="true">
    <path d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.02-1.49-2.22.48-2.69-1.07-2.69-1.07-.36-.92-.89-1.17-.89-1.17-.73-.5.05-.49.05-.49.81.06 1.23.83 1.23.83.72 1.23 1.88.87 2.34.67.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.01 8.01 0 0 0 16 8c0-4.42-3.58-8-8-8z" />
  </svg>
);

const PLATFORM_LABEL: Record<Platform, [string, ReactNode]> = { win64: ["Windows", WinIcon], linux: ["Linux", LinuxIcon] };

function Keycap({ k, label, on, set, title }: { k: string; label: string; on: boolean; set: (v: boolean) => void; title: string }) {
  return (
    <button className={"keycap" + (on ? " on" : "")} role="switch" aria-checked={on} title={`${title} (${k.toLowerCase()})`} onClick={() => set(!on)}>
      <kbd>{k}</kbd>{label}
    </button>
  );
}

export function Header({
  game, setGame, platform, setPlatform, avail, hex, setHex, pad, setPad,
}: {
  game: Game; setGame: (g: Game) => void;
  platform: Platform; setPlatform: (p: Platform) => void;
  avail: Record<Game, GameAvail> | null;
  hex: boolean; setHex: (v: boolean) => void; pad: boolean; setPad: (v: boolean) => void;
}) {
  const has = (g: Game, p: Platform) => !avail || avail[g].platforms.includes(p);
  return (
    <header className="hdr">
      <span className="logo"><em>{"{;}"}</em>s2dump</span>
      <nav className="gtabs" aria-label="game">
        {GAMES.map((g) => (
          <button key={g} className={"gtab" + (g === game ? " on" : "")} aria-current={g === game}
                  onClick={() => { setGame(g); if (!has(g, platform)) setPlatform("win64"); }}>
            <span className="gi">{GAME_INFO[g].short}</span>
            <span className="gt">{GAME_INFO[g].title}</span>
            {avail?.[g].patch && <small>{avail[g].patch}</small>}
          </button>
        ))}
      </nav>
      <div className="hright">
        <div className="seg os" role="radiogroup" aria-label="platform">
          {PLATFORMS.map((p) => {
            const ok = has(game, p);
            return (
              <button key={p} role="radio" aria-checked={platform === p} disabled={!ok}
                      className={platform === p ? "on" : ""} onClick={() => setPlatform(p)}
                      title={ok ? p : `no ${p} dump for ${GAME_INFO[game].title}`}>
                {PLATFORM_LABEL[p][1]}<span className="pl">{PLATFORM_LABEL[p][0]}</span>
              </button>
            );
          })}
        </div>
        <span className="vsep" />
        <Keycap k="X" label="hex" on={hex} set={setHex} title="show numbers as hex" />
        <Keycap k="P" label="padding" on={pad} set={setPad} title="show padding fields" />
        <span className="vsep" />
        <ThemeToggle />
        <a className="icn" href="https://github.com/boeing666/source2-dumper" target="_blank" rel="noopener noreferrer" title="GitHub" aria-label="GitHub repository">
          {GitHubIcon}
        </a>
      </div>
    </header>
  );
}
