# s2dump MCP server

A remote [MCP](https://modelcontextprotocol.io) server over the same dumps the site shows: schema classes / structs / enums
with field offsets, convars, console commands, game events, the VScript API and protobuf definitions for
**cs2, dota2 and deadlock** on **win64 and linux**. It reads the JSON the site publishes on GitHub Pages and caches it in memory, so it follows every
dump CI publishes with no redeploy.

## Tools

| tool | what it returns |
|---|---|
| `get_version` | patch / server version, counts and schema modules per game and platform |
| `search` | types, fields (with offsets), convars, commands, events and vscript matching a name |
| `get_type` | a class / struct with fields, offsets, sizes, networked flag, metadata; optional inherited fields and datamap; enum values |
| `get_field_offset` | one field's offset, searched through the whole base-class chain |
| `list_convars` / `list_commands` | filter by text, libraries (any), flags (all), excluded flags; paged |
| `get_events` | game events with field types |
| `get_vscript` | functions, classes with every method, instances, constants |
| `search_protobufs` | protobuf messages / enums / services by name or by field / value name |
| `get_protobuf` | one message, enum or service as `.proto` source, plus what uses it |

Every tool takes `game` (`cs2` default, `dota2`, `deadlock`) and `platform` (`win64` default, `linux`); the protobuf
tools take only `game` (definitions from [SteamTracking/Protobufs](https://github.com/SteamTracking/Protobufs)).

## Deploy (Vercel Hobby, free)

1. vercel.com → **Add New… → Project** → import this GitHub repository.
2. **Root Directory**: `mcp`. Framework preset: **Other**. No build command, no environment variables.
3. Deploy. The endpoint is `https://<project>.vercel.app/mcp` (also `/api/mcp`).

Pushes to the default branch redeploy it automatically. To read the dumps from somewhere else set `S2DUMP_DATA_URL`
(default `https://boeing666.github.io/source2-dumper/data`).

## Connect

Claude Code:

```bash
claude mcp add --transport http s2dump https://<project>.vercel.app/mcp
```

Claude Desktop / claude.ai: **Settings → Connectors → Add custom connector**, URL `https://<project>.vercel.app/mcp`.

Cursor / other clients (`mcp.json`):

```json
{ "mcpServers": { "s2dump": { "url": "https://<project>.vercel.app/mcp" } } }
```

Stdio-only clients: `npx -y mcp-remote https://<project>.vercel.app/mcp`.

## Local

```bash
npm install
npm run smoke   # calls every tool through the handler against the live data
npm run dev     # http://localhost:3000/mcp for a real client
```
