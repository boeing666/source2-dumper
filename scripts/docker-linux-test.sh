#!/usr/bin/env bash
set -e
export DEBIAN_FRONTEND=noninteractive

apt-get update -qq
apt-get install -y -qq cmake ninja-build git ca-certificates libva2 libvdpau1 libx11-6 libdrm2 >/dev/null
apt-get install -y -qq g++-14 >/dev/null 2>&1 || true

CXX=$(command -v g++-14 || command -v g++)
CC=$(command -v gcc-14 || command -v gcc)
"$CXX" --version | head -1

cd /work
CC="$CC" CXX="$CXX" cmake -S . -B build-linux -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build-linux -j"$(nproc)"

export LD_LIBRARY_PATH=/work/game/game/bin/linuxsteamrt64:/work/game/game/csgo/bin/linuxsteamrt64
./build-linux/source2_dumper /work/build-linux/out

echo "== missing .so deps (libserver) =="
ldd /work/game/game/csgo/bin/linuxsteamrt64/libserver.so 2>&1 | grep 'not found' || echo "  (none)"

echo "== json files =="
ls /work/build-linux/out/linux/*.json 2>&1 | wc -l
