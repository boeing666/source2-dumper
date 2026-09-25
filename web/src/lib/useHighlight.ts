import { useEffect } from "react";

// scroll the row named in `hl` (opened from the unified search) into view once the list has rendered
export function useHighlight(hl: string | undefined, ready: boolean) {
  useEffect(() => {
    if (!hl || !ready) return;
    document.getElementById("row-" + hl)?.scrollIntoView({ block: "center" });
  }, [hl, ready]);
}
