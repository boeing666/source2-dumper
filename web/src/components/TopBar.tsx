import { PLATFORMS, type Platform } from "@/lib/data";
import { Toggle } from "@/components/Toggle";

export function TopBar({
  platform, setPlatform, tab, setTab, hex, setHex, pad, setPad,
}: {
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
      <span className="sp" />
      <Toggle label="padding" on={pad} set={setPad} title="show padding fields" />
      <Toggle label="hex" on={hex} set={setHex} title="show all numbers as hex" />
      <nav className="tabs">
        {sections.map(([k, l]) => <button key={k} className={tab === k ? "cur" : ""} onClick={() => setTab(k)}>{l}</button>)}
      </nav>
      <nav className="tabs">
        {PLATFORMS.map((p) => <button key={p} className={platform === p ? "cur" : ""} onClick={() => setPlatform(p)}>{p}</button>)}
      </nav>
    </div>
  );
}
