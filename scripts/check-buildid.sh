#!/usr/bin/env bash
# Local test of the CI version check via DepotDownloader.
set -e
export DEBIAN_FRONTEND=noninteractive
apt-get update -qq
apt-get install -y -qq curl ca-certificates unzip >/dev/null
gid=$(bash /work/scripts/game-version.sh) || { echo "FAILED"; exit 1; }
echo "=================="
echo "manifest gid=$gid"
