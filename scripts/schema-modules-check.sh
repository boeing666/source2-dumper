#!/usr/bin/env bash
# Lists which game .so export InstallSchemaBindings (= schema modules) and whether
# they dlopen headless. Reveals the gap between "has schema" and "we can cold-load".
set -e
export DEBIAN_FRONTEND=noninteractive
apt-get update -qq >/dev/null
apt-get install -y -qq binutils libva2 libvdpau1 libx11-6 libdrm2 python3 >/dev/null

BIN=/work/game/game/bin/linuxsteamrt64
CSGO=/work/game/game/csgo/bin/linuxsteamrt64
export LD_LIBRARY_PATH="$BIN:$CSGO"

echo "== schema modules (export InstallSchemaBindings) + dlopen status =="
for so in "$BIN"/*.so "$CSGO"/*.so; do
  [ -e "$so" ] || continue
  if nm -D "$so" 2>/dev/null | grep -q InstallSchemaBindings; then
    name=$(basename "$so")
    if python3 -c "import ctypes,sys; ctypes.CDLL(sys.argv[1])" "$so" 2>/dev/null; then
      echo "  LOAD-OK   $name"
    else
      echo "  LOAD-FAIL $name  ($(python3 -c "import ctypes,sys
try: ctypes.CDLL(sys.argv[1])
except OSError as e: print(str(e).split(':')[0])" "$so" 2>&1 | head -1))"
    fi
  fi
done
