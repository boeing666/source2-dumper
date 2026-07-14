#!/usr/bin/env bash
# Prints the CS2 content-depot manifest GID (changes on every game update).
# Used by CI as the version key: tag cs2-<gid> gates rebuilds.
set -euo pipefail
export DOTNET_SYSTEM_GLOBALIZATION_INVARIANT=1

DD_VERSION="${DD_VERSION:-DepotDownloader_3.4.0}"
DEPOT="${DEPOT:-2347771}"   # windows content depot
DIR="${RUNNER_TEMP:-/tmp}/dd-version"
mkdir -p "$DIR"
cd "$DIR"

if [ ! -x ./DepotDownloader ]; then
	curl -fsSL "https://github.com/SteamRE/DepotDownloader/releases/download/${DD_VERSION}/DepotDownloader-linux-x64.zip" -o dd.zip
	unzip -oq dd.zip
	chmod +x DepotDownloader
fi

out=$(./DepotDownloader -app 730 -depot "$DEPOT" -manifest-only -dir mf 2>&1 || true)
gid=$(printf '%s\n' "$out" | grep -oE 'Manifest [0-9]+' | head -1 | grep -oE '[0-9]+')
if [ -z "$gid" ]; then
	printf '%s\n' "$out" >&2
	echo "could not resolve manifest gid" >&2
	exit 1
fi
echo "$gid"
