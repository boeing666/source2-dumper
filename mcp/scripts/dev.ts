// Local Streamable HTTP endpoint for real MCP clients: http://localhost:3000/api/mcp
import { createServer } from "node:http";
import { GET, POST, DELETE } from "../api/mcp.js";

const port = Number(process.env.PORT ?? 3000);
const routes: Record<string, (r: Request) => Promise<Response>> = { GET, POST, DELETE };

createServer(async (req, res) => {
  const route = req.url?.split("?")[0];
  const handler = routes[req.method ?? ""];
  if ((route !== "/api/mcp" && route !== "/mcp") || !handler) {
    res.writeHead(404).end();
    return;
  }
  const chunks: Buffer[] = [];
  for await (const c of req) chunks.push(c as Buffer);
  const request = new Request(`http://localhost:${port}${req.url}`, {
    method: req.method,
    headers: Object.entries(req.headers).flatMap(([k, v]) => (v == null ? [] : [[k, Array.isArray(v) ? v.join(", ") : v] as [string, string]])),
    body: chunks.length ? Buffer.concat(chunks) : undefined,
  });
  const response = await handler(request);
  res.writeHead(response.status, Object.fromEntries(response.headers));
  if (response.body) for await (const c of response.body) res.write(c);
  res.end();
}).listen(port, () => console.log(`s2dump MCP on http://localhost:${port}/api/mcp`));
