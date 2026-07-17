#!/usr/bin/env bash
#
# Downloads the CS2 (app 730) depot files listed in the filelist, using
# SteamRE/DepotDownloader. Bootstraps the tool on first run. Same script the
# CI workflow runs — run it directly to test.
#
# Usage:
#   scripts/download-depots.sh [linux|windows|both]   (default: both)
#
# Env overrides:
#   DD_VERSION       DepotDownloader release tag (default DepotDownloader_3.4.0)
#   FILELIST         path to filelist (default scripts/depots.txt)
#   STEAM_USERNAME   Steam account (optional; anonymous if unset)
#   STEAM_PASSWORD   Steam password (optional)
#
set -euo pipefail

DD_VERSION="${DD_VERSION:-DepotDownloader_3.4.0}"
APP=730
DEPOT_LINUX=2347773
DEPOT_WINDOWS=2347771

TARGET="${1:-both}"

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
DEFAULT_FILELIST="${FILELIST:-$SCRIPT_DIR/depots.txt}"
GAME_DIR="$ROOT/game"
TOOLS="$ROOT/.tools/depotdownloader"

# Per-OS filelist if present (scripts/depots.linux.txt / depots.windows.txt),
# else the shared depots.txt. Manifest paths differ per OS
# (linuxsteamrt64/lib*.so vs win64/*.dll); the shared list uses regex to match both.
pick_filelist() { # $1 = os
	local f="$SCRIPT_DIR/depots.$1.txt"
	[ -f "$f" ] && echo "$f" || echo "$DEFAULT_FILELIST"
}

# Host OS decides which DepotDownloader build to bootstrap (independent of the
# depot being downloaded — one host can fetch both the linux and windows depots).
exe=""
case "$(uname -s)" in
	Linux*)                 os_kind=linux ;;
	Darwin*)                os_kind=macos ;;
	MINGW*|MSYS*|CYGWIN*)   os_kind=windows; exe=".exe" ;;
	*) echo "Unsupported host OS: $(uname -s)" >&2; exit 1 ;;
esac
case "$(uname -m)" in
	x86_64|amd64) arch=x64 ;;
	arm64|aarch64) arch=arm64 ;;
	*) echo "Unsupported arch: $(uname -m)" >&2; exit 1 ;;
esac
ASSET="DepotDownloader-${os_kind}-${arch}.zip"
DD="$TOOLS/DepotDownloader${exe}"

if [ ! -x "$DD" ]; then
	echo ">> Fetching $ASSET ($DD_VERSION)"
	mkdir -p "$TOOLS"
	curl -fsSL "https://github.com/SteamRE/DepotDownloader/releases/download/${DD_VERSION}/${ASSET}" -o "$TOOLS/dd.zip"
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

if [ "$TARGET" = "linux" ] || [ "$TARGET" = "both" ]; then
	echo ">> Linux depot $DEPOT_LINUX -> game/ (filelist: $(pick_filelist linux))"
	"$DD" -app "$APP" -depot "$DEPOT_LINUX" -filelist "$(pick_filelist linux)" -dir "$GAME_DIR" -os linux "${auth[@]}"
fi

if [ "$TARGET" = "windows" ] || [ "$TARGET" = "both" ]; then
	echo ">> Windows depot $DEPOT_WINDOWS -> game/ (filelist: $(pick_filelist windows))"
	"$DD" -app "$APP" -depot "$DEPOT_WINDOWS" -filelist "$(pick_filelist windows)" -dir "$GAME_DIR" -os windows "${auth[@]}"
fi

echo ">> steam.inf (PatchVersion)"
mkdir -p "$GAME_DIR/game/csgo"
curl -fsSL "https://raw.githubusercontent.com/SteamDatabase/GameTracking-CS2/master/game/csgo/steam.inf" \
	-o "$GAME_DIR/game/csgo/steam.inf" || echo "warning: steam.inf fetch failed (PatchVersion will be blank)"

echo ">> gameevents (from GameTracking-CS2)"
GT_BASE="https://raw.githubusercontent.com/SteamDatabase/GameTracking-CS2/master/game"
for pair in \
	"csgo/pak01_dir/resource/game.gameevents|csgo/resource/game.gameevents" \
	"csgo/pak01_dir/resource/mod.gameevents|csgo/resource/mod.gameevents" \
	"core/pak01_dir/resource/core.gameevents|core/resource/core.gameevents"; do
	src="${pair%%|*}"; dst="$GAME_DIR/game/${pair##*|}"
	mkdir -p "$(dirname "$dst")"
	curl -fsSL "$GT_BASE/$src" -o "$dst" || echo "warning: gameevents fetch failed: $src"
done

echo ">> Done."
