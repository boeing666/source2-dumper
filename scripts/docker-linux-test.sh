#!/usr/bin/env bash
# Builds + runs the dumper inside a Linux container to validate the .so path.
# Assumes /work is the repo (bind mount) with thirdparty/ SDKs and game/ already present.
# Writes linux data into /work/build/site (merging alongside any win64 data).
set -e
export DEBIAN_FRONTEND=noninteractive

echo "== installing toolchain + runtime deps =="
apt-get update -qq
# build tools + system libs that game .so files (libvideo.so) link against
apt-get install -y -qq build-essential cmake ninja-build git ca-certificates \
  libva2 libvdpau1 libx11-6 libdrm2 >/dev/null
gcc --version | head -1

cd /work
echo "== configure =="
cmake -S . -B build-linux -G Ninja -DCMAKE_BUILD_TYPE=Release -DGAME_ROOT=/work/game/game >/tmp/cfg.log 2>&1 \
  || { echo "CONFIGURE FAILED"; tail -40 /tmp/cfg.log; exit 1; }

echo "== build =="
cmake --build build-linux -j"$(nproc)" >/tmp/build.log 2>&1 \
  || { echo "BUILD FAILED"; tail -60 /tmp/build.log; exit 1; }
echo "BUILD_OK"

echo "== libclient.so missing deps =="
ldd /work/game/game/csgo/bin/linuxsteamrt64/libclient.so 2>&1 | grep 'not found' || echo "  (none missing)"

echo "== run dumper =="
export LD_LIBRARY_PATH=/work/game/game/bin/linuxsteamrt64:/work/game/game/csgo/bin/linuxsteamrt64
./build-linux/source2_dumper /work/build/site 1>/tmp/dump.out 2>/tmp/dump.err || true
echo "--- scopes ---"; cat /tmp/dump.out
echo "--- load failures ---"; grep -E 'could not load|warning:' /tmp/dump.err | head -80 || echo "  (none)"

echo "== result =="
ls -l /work/build/site/linux.html 2>&1 || echo "NO linux.html"
