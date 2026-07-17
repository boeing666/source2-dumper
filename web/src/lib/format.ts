// Small shared rendering helpers used across the schema views.
import type { Field } from "@/types";

// number -> string, honoring the global "hex" toggle
export const nv = (n: number, hex: boolean) =>
  hex ? (n < 0 ? "-0x" + (-n).toString(16) : "0x" + n.toString(16)) : String(n);

// coarse type category -> CSS var (used to color the size bar / memory map)
export type Cat = "cptr" | "ctmpl" | "cprim" | "cagg" | "cpad";
export function catVar(type: string): Cat {
  if (type.includes("*")) return "cptr";
  if (type.includes("<")) return "ctmpl";
  const base = type.replace(/\s+/g, "");
  if (/^(void|bool|char|short|int|long|float|double|unsigned|signed|w?char_t|u?int\d*(_t)?|float\d+|size_t)$/.test(base))
    return "cprim";
  return "cagg";
}

export const barW = (size: number) => Math.max(20, Math.min(160, size * 6));

// flatten a class's fields into display rows, inserting padding gaps between them
export type Row = { field?: Field; pad?: number; offset: number; size: number };
export function layout(fields: Field[], classSize: number): Row[] {
  const rows: Row[] = [];
  let cursor = 0;
  for (const f of [...fields].sort((a, b) => a.offset - b.offset)) {
    if (f.offset > cursor) rows.push({ pad: f.offset - cursor, offset: cursor, size: f.offset - cursor });
    rows.push({ field: f, offset: f.offset, size: f.size });
    cursor = Math.max(cursor, f.offset + f.size);
  }
  if (classSize > cursor) rows.push({ pad: classSize - cursor, offset: cursor, size: classSize - cursor });
  return rows;
}
