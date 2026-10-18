#!/usr/bin/env bash
# Download what the dumper needs with SteamTracking/SteamFileDownloader (`track`): engine + game binaries for the
# platform(s), steam.inf, and the .gameevents entries of the VPKs (only the archive chunks that hold them; the
# dumper reads them from the sparse VPKs). Files land in game/<game>/game/..., the same layout as a Steam install.
# Usage: [GAME=cs2|dota2|deadlock] scripts/download-depots.sh [linux|windows|both]
set -euo pipefail
. "$(dirname "${BASH_SOURCE[0]}")/steam-common.sh"

TARGET="${1:-both}"

content=("\"game/$GAME_SUBDIR/steam.inf\"")
for e in $EVENT_FILES; do content+=("\"game/$GAME_SUBDIR/pak01_dir.vpk:resource/$e.gameevents\""); done
content+=("\"game/core/pak01_dir.vpk:resource/core.gameevents\"")

depots=("\"$DEPOT_CONTENT\": [$(IFS=,; echo "${content[*]}")]")
if [ "$TARGET" != linux ]; then
	depots+=("\"$DEPOT_WIN64\": [\"regex:^game/([^/]+/)?bin/win64/[^/]+\\\\.dll\$\"]")
fi
if [ "$TARGET" != windows ]; then
	if [ -n "$DEPOT_LINUX" ]; then
		depots+=("\"$DEPOT_LINUX\": [\"regex:^game/([^/]+/)?bin/linuxsteamrt64/[^/]+\\\\.so(\\\\.[0-9]+)?\$\"]")
	else
		echo "warning: $GAME ships no Linux binaries" >&2
	fi
fi

echo ">> $GAME app $APP ($TARGET) -> game/$GAME"
printf '{\n%s\n}\n' "$(printf '\t%s\n' "${depots[@]}" | sed '$!s/$/,/')" | sfd_track "$ROOT/.tools/sfd-track/$GAME" "$GAME_DIR"
echo ">> Done (build $(cat "$GAME_DIR/steam_buildid.txt" 2>/dev/null || echo ?))."
