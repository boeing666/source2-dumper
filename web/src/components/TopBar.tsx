import { GAMES, PLATFORMS, type Game, type Platform } from "@/lib/data";
import { Toggle } from "@/components/Toggle";
import { Dropdown } from "@/components/Dropdown";
import { ThemeToggle } from "@/components/ThemeToggle";

const GameIcon = (
  <svg viewBox="0 0 24 24" width="15" height="15" fill="none" stroke="currentColor" strokeWidth="1.7" strokeLinecap="round" strokeLinejoin="round" aria-hidden="true">
    <rect x="2" y="6" width="20" height="12" rx="6" />
    <line x1="6" y1="12" x2="10" y2="12" />
    <line x1="8" y1="10" x2="8" y2="14" />
    <line x1="15.5" y1="11" x2="15.51" y2="11" />
    <line x1="18" y1="13" x2="18.01" y2="13" />
  </svg>
);

export function TopBar({
  game, setGame, platform, setPlatform, tab, setTab, hex, setHex, pad, setPad,
}: {
  game: Game; setGame: (g: Game) => void;
  platform: Platform; setPlatform: (p: Platform) => void;
  tab: string; setTab: (t: string) => void;
  hex: boolean; setHex: (v: boolean) => void; pad: boolean; setPad: (v: boolean) => void;
}) {
  const sections: [string, string][] = [
    ["schema", "schema"],
    ["convars", "convars"],
    ["concommands", "commands"],
    ["events", "events"],
  ];
  return (
    <div className="top">
      <span className="brand">Source 2 Dumper</span>
      <Dropdown value={game} options={GAMES.map((g) => [g, g] as [string, string])}
                onChange={(v) => setGame(v as Game)} ariaLabel="game" title="switch game" icon={GameIcon} />
      <ThemeToggle />
      <span className="sp" />
      <Toggle label="padding" on={pad} set={setPad} title="show padding fields" />
      <Toggle label="hex" on={hex} set={setHex} title="show all numbers as hex" />
      <nav className="tabs">
        {sections.map(([k, l]) => <button key={k} className={tab === k ? "cur" : ""} onClick={() => setTab(k)}>{l}</button>)}
      </nav>
      <nav className="tabs">
        {PLATFORMS.map((p) => <button key={p} className={platform === p ? "cur" : ""} onClick={() => setPlatform(p)}>{p}</button>)}
      </nav>
      <a className="ghlink" href="https://github.com/boeing666/source2-dumper" target="_blank" rel="noopener noreferrer" title="GitHub" aria-label="GitHub repository">
        <svg viewBox="0 0 16 16" width="20" height="20" fill="currentColor" aria-hidden="true">
          <path d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.02-1.49-2.22.48-2.69-1.07-2.69-1.07-.36-.92-.89-1.17-.89-1.17-.73-.5.05-.49.05-.49.81.06 1.23.83 1.23.83.72 1.23 1.88.87 2.34.67.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.01 8.01 0 0 0 16 8c0-4.42-3.58-8-8-8z" />
        </svg>
      </a>
    </div>
  );
}
