// Turns the game folders of SteamTracking/Protobufs into one JSON per game for the site and the MCP server.
// usage: node scripts/protobufs.mjs <Protobufs checkout> <out data dir>
//   writes <out>/<game>/protobufs.json for cs2 (csgo/), dota2 (dota2/) and deadlock (deadlock/).
import { execFileSync } from "node:child_process";
import { mkdirSync, readFileSync, readdirSync, writeFileSync } from "node:fs";
import { join } from "node:path";
import protobuf from "protobufjs";

const [repo, out] = process.argv.slice(2);
if (!repo || !out) {
  console.error("usage: node scripts/protobufs.mjs <Protobufs checkout> <out data dir>");
  process.exit(2);
}

const GAMES = { cs2: "csgo", dota2: "dota2", deadlock: "deadlock" };
const SCALARS = new Set(["double", "float", "int32", "int64", "uint32", "uint64", "sint32", "sint64",
  "fixed32", "fixed64", "sfixed32", "sfixed64", "bool", "string", "bytes"]);

const git = (...args) => execFileSync("git", ["-C", repo, ...args], { encoding: "utf8" }).trim();
let commit = "", date = "";
try { [commit, date] = git("log", "-1", "--format=%H %cI").split(" "); } catch { /* not a git checkout */ }

const clean = (s) => (s ? s.replace(/\s+\n/g, "\n").trim() : undefined);
const short = (fullName) => fullName.replace(/^\./, "");
// Steam's protos document through custom options instead of comments.
const doc = (comment, options, key) => clean(comment) ?? clean(options?.[key]);

function build(dir) {
  const files = [], types = [], services = [];
  for (const file of readdirSync(dir).filter((f) => f.endsWith(".proto")).sort()) {
    const parsed = protobuf.parse(readFileSync(join(dir, file), "utf8"), { keepCase: true, alternateCommentMode: true });
    let nMessages = 0, nEnums = 0;
    const walk = (ns) => {
      for (const obj of ns.nestedArray) {
        if (obj instanceof protobuf.Type) {
          nMessages++;
          types.push({
            kind: "message", name: short(obj.fullName), file, comment: clean(obj.comment),
            fields: obj.fieldsArray.map((f) => ({
              name: f.name, id: f.id,
              rule: f.map ? undefined : f.repeated ? "repeated" : f.required ? "required" : "optional",
              type: f.map ? `map<${f.keyType}, ${f.type}>` : f.type,
              typeName: f.type, // as written, resolved below
              default: f.options?.default !== undefined ? String(f.options.default) : undefined,
              oneof: f.partOf?.name,
              comment: doc(f.comment, f.options, "(description)"),
            })),
            scope: short(obj.fullName),
          });
          walk(obj);
        } else if (obj instanceof protobuf.Enum) {
          nEnums++;
          types.push({
            kind: "enum", name: short(obj.fullName), file, comment: clean(obj.comment),
            values: Object.entries(obj.values).map(([name, value]) => ({ name, value, comment: doc(obj.comments?.[name], obj.valuesOptions?.[name], "(description)") })),
          });
        } else if (obj instanceof protobuf.Service) {
          services.push({
            name: short(obj.fullName), file, comment: doc(obj.comment, obj.options, "(service_description)"),
            methods: obj.methodsArray.map((m) => ({ name: m.name, request: m.requestType, response: m.responseType, comment: doc(m.comment, m.options, "(method_description)") })),
            scope: "",
          });
        } else if (obj instanceof protobuf.Namespace && !(obj instanceof protobuf.Type)) {
          walk(obj);
        }
        // top-level `extend google.protobuf.*Options` fields are custom options, not game data
      }
    };
    walk(parsed.root);
    files.push({ name: file, imports: parsed.imports ?? [], messages: nMessages, enums: nEnums });
  }

  // protobuf scoping: innermost enclosing message first, then outwards, then global
  const known = new Set(types.map((t) => t.name));
  const resolve = (typeName, scope) => {
    if (!typeName || SCALARS.has(typeName)) return undefined;
    if (typeName.startsWith(".")) return known.has(typeName.slice(1)) ? typeName.slice(1) : undefined;
    const parts = scope ? scope.split(".") : [];
    for (let i = parts.length; i >= 0; i--) {
      const cand = [...parts.slice(0, i), typeName].join(".");
      if (known.has(cand)) return cand;
    }
    return undefined;
  };
  for (const t of types) {
    if (t.kind !== "message") continue;
    for (const f of t.fields) {
      const ref = resolve(f.typeName, t.scope);
      if (ref) f.ref = ref;
      delete f.typeName;
    }
    delete t.scope;
  }
  for (const s of services) {
    for (const m of s.methods) {
      m.requestRef = resolve(m.request, "");
      m.responseRef = resolve(m.response, "");
    }
    delete s.scope;
  }
  types.sort((a, b) => a.name.localeCompare(b.name));
  return { files, types, services };
}

for (const [game, folder] of Object.entries(GAMES)) {
  const data = build(join(repo, folder));
  const doc = { source: { repo: "SteamTracking/Protobufs", path: folder, commit, date }, ...data };
  mkdirSync(join(out, game), { recursive: true });
  const json = JSON.stringify(doc);
  writeFileSync(join(out, game, "protobufs.json"), json);
  const nMsg = data.types.filter((t) => t.kind === "message").length;
  console.log(`${game}: ${data.files.length} files, ${nMsg} messages, ${data.types.length - nMsg} enums, ${data.services.length} services, ${(json.length / 1024).toFixed(0)} KB`);
}
