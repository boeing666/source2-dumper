import { GAMES, PLATFORMS, type Game, type Platform } from "@/lib/data";
import { Toggle } from "@/components/Toggle";
import { Dropdown } from "@/components/Dropdown";

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
                onChange={(v) => setGame(v as Game)} ariaLabel="game" title="switch game" />
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
