#!/usr/bin/env bash
# Prints the public-branch build id of a game's app; it changes on every game update. CI's rebuild gate.
# cs2 / dota2: anonymous PICS (`depots`), no login. deadlock hides its app info from anonymous users, so it
# falls back to a logged-in `track` of steam.inf, which writes the build id.
# Usage: GAME=cs2|dota2|deadlock scripts/game-version.sh
set -euo pipefail
. "$(dirname "${BASH_SOURCE[0]}")/steam-common.sh"

build=$("$SFD" depots "$APP" --anonymous 2>&1 >/dev/null | grep -oE 'public \(build [0-9]+' | grep -oE '[0-9]+$' || true)
if [ -z "$build" ]; then
	work="$ROOT/.tools/sfd-version/$GAME"
	printf '{ "%s": ["game/%s/steam.inf"] }\n' "$DEPOT_CONTENT" "$GAME_SUBDIR" | sfd_track "$work" "$work/out" >&2
	build=$(cat "$work/out/steam_buildid.txt")
fi
[ -n "$build" ] || { echo "could not resolve the build id of $GAME (app $APP)" >&2; exit 1; }
echo "$build"
