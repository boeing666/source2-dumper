export function Toggle({ label, on, set, title }: { label: string; on: boolean; set: (v: boolean) => void; title: string }) {
  return (
    <button className={"tgl" + (on ? " on" : "")} title={title} onClick={() => set(!on)}>
      <span className="sw" />{label}
    </button>
  );
}
