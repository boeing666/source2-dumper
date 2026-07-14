#!/usr/bin/env bash
export LD_LIBRARY_PATH=/work/game/game/bin/linuxsteamrt64:/work/game/game/csgo/bin/linuxsteamrt64
for so in csgo/bin/linuxsteamrt64/libclient.so bin/linuxsteamrt64/libvideo.so bin/linuxsteamrt64/libv8_libcpp.so; do
  echo "== $so =="
  ldd "/work/game/game/$so" 2>&1 | grep "not found" || echo "  all deps resolved"
done
