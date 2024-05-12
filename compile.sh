#!/bin/bash

set -euo pipefail

cp patch/multichoose.h vcflib/multichoose/multichoose.h
meson build/ --buildtype release
cd build
ninja -v
cd ../../

