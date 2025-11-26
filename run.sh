#!/bin/bash
set -e

cd "$(dirname "$0")"   # 切换到脚本所在目录
cd build                # 切到 build
make -j8                # 编译
./bin/main              # 运行
