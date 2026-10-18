import { createMcpHandler } from "mcp-handler";
import { INSTRUCTIONS, registerTools } from "../lib/tools.js";

// Vercel Function (Node.js runtime, Web-standard handlers). Stateless Streamable HTTP: every request
// builds the server from scratch, the dump data stays cached in the module (lib/data.ts) between requests.
const handler = createMcpHandler(registerTools, {
  serverInfo: { name: "s2dump", version: "1.0.0" },
  instructions: INSTRUCTIONS,
});

export { handler as GET, handler as POST, handler as DELETE };
