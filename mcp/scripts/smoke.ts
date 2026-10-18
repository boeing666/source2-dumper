// Drives the Vercel handler directly with Web Requests: initialize, tools/list, then one call per tool.
import { GET, POST } from "../api/mcp.js";

void GET;
let id = 0;

async function rpc(method: string, params: unknown = {}) {
  const res = await POST(new Request("http://localhost/api/mcp", {
    method: "POST",
    headers: { "content-type": "application/json", accept: "application/json, text/event-stream", "mcp-protocol-version": "2025-06-18" },
    body: JSON.stringify({ jsonrpc: "2.0", id: ++id, method, params }),
  }));
  const text = await res.text();
  // Streamable HTTP may answer with an SSE stream: take the JSON-RPC message from its data lines.
  const body = res.headers.get("content-type")?.includes("text/event-stream")
    ? text.split("\n").filter((l) => l.startsWith("data:")).map((l) => l.slice(5).trim()).join("")
    : text;
  if (!res.ok) throw new Error(`${method}: HTTP ${res.status} ${text.slice(0, 300)}`);
  const msg = JSON.parse(body);
  if (msg.error) throw new Error(`${method}: ${JSON.stringify(msg.error)}`);
  return msg.result;
}

const init = await rpc("initialize", { protocolVersion: "2025-06-18", capabilities: {}, clientInfo: { name: "smoke", version: "0" } });
console.log("server:", init.serverInfo, "protocol:", init.protocolVersion);

const tools = await rpc("tools/list");
console.log("tools:", tools.tools.map((t: { name: string }) => t.name).join(", "));

const calls: [string, Record<string, unknown>][] = [
  ["get_version", {}],
  ["search", { query: "m_iHealth", limit: 3 }],
  ["get_type", { name: "C_CSPlayerPawn", include_inherited: false }],
  ["get_type", { name: "EntityFlags_t" }],
  ["get_field_offset", { class_name: "C_CSPlayerPawn", field: "m_iHealth" }],
  ["get_field_offset", { class_name: "CCSPlayerController", field: "m_hPlayerPawn", platform: "linux" }],
  ["list_convars", { libraries: ["server"], flags: ["replicated"], exclude_flags: ["hidden"], limit: 3 }],
  ["list_commands", { query: "bot_", limit: 3 }],
  ["get_events", { query: "player_death" }],
  ["get_vscript", { query: "CBaseEntity", kind: "class" }],
  ["get_type", { name: "C_BaseEntity", game: "deadlock", platform: "linux" }],
  ["get_type", { name: "C_CSPlayerPawnn" }],
  ["get_field_offset", { class_name: "C_CSPlayerPawn", field: "m_iHelth" }],
  ["search_protobufs", { query: "MatchmakingGC2ClientHello", limit: 3 }],
  ["get_protobuf", { name: "CMsgGCCStrike15_v2_MatchmakingGC2ClientHello" }],
  ["get_protobuf", { name: "Cloud" }],
  ["get_protobuf", { name: "CMsgDOTAMatch", game: "dota2" }],
  ["get_protobuf", { name: "CMsgClientHelo" }],
];
for (const [name, args] of calls) {
  const r = await rpc("tools/call", { name, arguments: args });
  const text: string = r.content[0].text;
  console.log(`\n=== ${name} ${JSON.stringify(args)}${r.isError ? "  [isError]" : ""} (${text.length} chars)\n${text.split("\n").slice(0, 8).join("\n")}`);
}
