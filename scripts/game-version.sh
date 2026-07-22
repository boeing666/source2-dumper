#!/usr/bin/env bash
# Prints a version key (joined depot-manifest GIDs) for a game's app. Changes on every game update.
# GAME=cs2|dota2|deadlock (default cs2). Used by CI as the rebuild gate.
set -euo pipefail
export DOTNET_SYSTEM_GLOBALIZATION_INVARIANT=1

DD_VERSION="${DD_VERSION:-DepotDownloader_3.4.0}"
GAME="${GAME:-cs2}"
case "$GAME" in
	cs2)      APP=730 ;;
	dota2)    APP=570 ;;
	deadlock) APP=1422450 ;;
	*) echo "unknown GAME '$GAME'" >&2; exit 1 ;;
esac

DIR="${RUNNER_TEMP:-/tmp}/dd-version"
mkdir -p "$DIR"
cd "$DIR"

if [ ! -x ./DepotDownloader ]; then
	curl -fsSL "https://github.com/SteamRE/DepotDownloader/releases/download/${DD_VERSION}/DepotDownloader-linux-x64.zip" -o dd.zip
	unzip -oq dd.zip
	chmod +x DepotDownloader
fi

auth=()
if [ -n "${STEAM_USERNAME:-}" ]; then
	auth+=(-username "$STEAM_USERNAME")
	[ -n "${STEAM_PASSWORD:-}" ] && auth+=(-password "$STEAM_PASSWORD")
	auth+=(-remember-password)
fi

out=$(./DepotDownloader -app "$APP" -manifest-only -dir "mf-$GAME" "${auth[@]}" 2>&1 || true)
gid=$(printf '%s\n' "$out" | grep -oE 'Manifest [0-9]+' | grep -oE '[0-9]+' | sort -u | tr '\n' '-' | sed 's/-$//')
if [ -z "$gid" ]; then
	printf '%s\n' "$out" >&2
	echo "could not resolve manifest gid for $GAME (app $APP)" >&2
	exit 1
fi
echo "$gid"
