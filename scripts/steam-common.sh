# Sourced by download-depots.sh / game-version.sh: Steam ids per game and how SteamFileDownloader is run.
# Env: GAME=cs2|dota2|deadlock (default cs2); SFD=<SteamFileDownloader binary>;
#      STEAM_USERNAME + STEAM_PASSWORD for CI, otherwise the login saved with `SteamFileDownloader login`.

GAME="${GAME:-cs2}"
# depots: content (steam.inf + VPKs), win64 binaries, linux binaries (deadlock ships none)
case "$GAME" in
	cs2)      APP=730;     GAME_SUBDIR=csgo;    DEPOT_CONTENT=2347770; DEPOT_WIN64=2347771; DEPOT_LINUX=2347773; EVENT_FILES="game mod" ;;
	dota2)    APP=570;     GAME_SUBDIR=dota;    DEPOT_CONTENT=373301;  DEPOT_WIN64=373303;  DEPOT_LINUX=373306;  EVENT_FILES="game" ;;
	deadlock) APP=1422450; GAME_SUBDIR=citadel; DEPOT_CONTENT=1422456; DEPOT_WIN64=1422452; DEPOT_LINUX="";      EVENT_FILES="game" ;;
	*) echo "Unknown GAME '$GAME' (cs2|dota2|deadlock)" >&2; exit 1 ;;
esac

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
GAME_DIR="$ROOT/game/$GAME"

case "$(uname -s)" in
	MINGW*|MSYS*|CYGWIN*) SFD="${SFD:-$ROOT/.tools/steamfiledownloader/SteamFileDownloader.exe}" ;;
	*)                    SFD="${SFD:-$ROOT/.tools/steamfiledownloader/SteamFileDownloader}" ;;
esac
if [ ! -x "$SFD" ]; then
	echo "SteamFileDownloader not found at $SFD. Build it (dotnet publish, see README) or set SFD=<path>." >&2
	exit 1
fi

# `track` is the only command that takes a password; without one it uses the saved login (or anonymous).
SFD_AUTH=()
if [ -n "${STEAM_USERNAME:-}" ] && [ -n "${STEAM_PASSWORD:-}" ]; then
	SFD_AUTH=(--username "$STEAM_USERNAME" --password "$STEAM_PASSWORD")
fi

# Runs `track` for $APP in work dir $1 with the files.json given on stdin, writing into $2.
sfd_track() {
	local work="$1" out="$2" rc=0
	mkdir -p "$work" "$out"
	cat > "$work/files.json"
	(cd "$work" && "$SFD" track "$APP" --output "$out" "${SFD_AUTH[@]}") || rc=$?
	# exit 3 = no saved login: anonymous still covers cs2 (dota2 content and deadlock need an account)
	if [ "$rc" -eq 3 ] && [ "${#SFD_AUTH[@]}" -eq 0 ]; then
		echo "no saved Steam login, retrying anonymously" >&2
		rc=0
		(cd "$work" && "$SFD" track "$APP" --output "$out" --anonymous) || rc=$?
	fi
	return "$rc"
}
