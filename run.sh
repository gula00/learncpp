#!/bin/bash
set -e

cd "$(dirname "$0")"
cd build
make -j8
./bin/main
