#!/usr/bin/env bash
# Download a Source2 game's depot files via SteamRE/DepotDownloader.
# Usage: [GAME=cs2|dota2|deadlock] scripts/download-depots.sh [linux|windows|both]
# Env: DD_VERSION, FILELIST, STEAM_USERNAME, STEAM_PASSWORD
set -euo pipefail

DD_VERSION="${DD_VERSION:-DepotDownloader_3.4.0}"
GAME="${GAME:-cs2}"
TARGET="${1:-both}"

case "$GAME" in
	cs2)      APP=730;     GAME_SUBDIR=csgo;    GT_REPO=GameTracking-CS2 ;;
	dota2)    APP=570;     GAME_SUBDIR=dota;    GT_REPO=GameTracking-Dota2 ;;
	deadlock) APP=1422450; GAME_SUBDIR=citadel; GT_REPO=GameTracking-Deadlock ;;
	*) echo "Unknown GAME '$GAME' (cs2|dota2|deadlock)" >&2; exit 1 ;;
esac

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
FILELIST="${FILELIST:-$SCRIPT_DIR/depots.txt}"
GAME_DIR="$ROOT/game/$GAME"
TOOLS="$ROOT/.tools/depotdownloader"

exe=""
case "$(uname -s)" in
	Linux*)               os_kind=linux ;;
	Darwin*)              os_kind=macos ;;
	MINGW*|MSYS*|CYGWIN*) os_kind=windows; exe=".exe" ;;
	*) echo "Unsupported host OS: $(uname -s)" >&2; exit 1 ;;
esac
case "$(uname -m)" in
	x86_64|amd64)  arch=x64 ;;
	arm64|aarch64) arch=arm64 ;;
	*) echo "Unsupported arch: $(uname -m)" >&2; exit 1 ;;
esac
DD="$TOOLS/DepotDownloader${exe}"

if [ ! -x "$DD" ]; then
	echo ">> Fetching DepotDownloader ($DD_VERSION)"
	mkdir -p "$TOOLS"
	curl -fsSL "https://github.com/SteamRE/DepotDownloader/releases/download/${DD_VERSION}/DepotDownloader-${os_kind}-${arch}.zip" -o "$TOOLS/dd.zip"
	unzip -oq "$TOOLS/dd.zip" -d "$TOOLS"
	rm -f "$TOOLS/dd.zip"
	[ -n "$exe" ] || chmod +x "$DD"
fi

auth=()
if [ -n "${STEAM_USERNAME:-}" ]; then
	auth+=(-username "$STEAM_USERNAME")
	[ -n "${STEAM_PASSWORD:-}" ] && auth+=(-password "$STEAM_PASSWORD")
	auth+=(-remember-password)
fi

download() { # $1 = os
	echo ">> $GAME app $APP ($1) -> game/"
	"$DD" -app "$APP" -filelist "$FILELIST" -dir "$GAME_DIR" -os "$1" "${auth[@]}"
}
[ "$TARGET" = "linux" ] || [ "$TARGET" = "both" ] && download linux
[ "$TARGET" = "windows" ] || [ "$TARGET" = "both" ] && download windows

GT="https://raw.githubusercontent.com/SteamDatabase/${GT_REPO}/master/game"
echo ">> steam.inf"
mkdir -p "$GAME_DIR/game/$GAME_SUBDIR"
curl -fsSL "$GT/$GAME_SUBDIR/steam.inf" -o "$GAME_DIR/game/$GAME_SUBDIR/steam.inf" || echo "warning: steam.inf fetch failed"

if [ "$GAME" = "cs2" ]; then
	echo ">> gameevents ($GT_REPO)"
	for pair in \
		"csgo/pak01_dir/resource/game.gameevents|csgo/resource/game.gameevents" \
		"csgo/pak01_dir/resource/mod.gameevents|csgo/resource/mod.gameevents" \
		"core/pak01_dir/resource/core.gameevents|core/resource/core.gameevents"; do
		src="${pair%%|*}"; dst="$GAME_DIR/game/${pair##*|}"
		mkdir -p "$(dirname "$dst")"
		curl -fsSL "$GT/$src" -o "$dst" || echo "warning: gameevents fetch failed: $src"
	done
fi

echo ">> Done."
