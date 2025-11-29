# This is for practicing C++
 
 ## Outside build
 ---
 
Initial build

```bash
mkdir build
cmake ..
```

Exec the script in WSL

```bash
bash run.sh
```
 ---
 
 ## Build for gdb
 
Alternatively, if you want to use gdb to debug

```bash
cmake -B build-debug   -DCMAKE_BUILD_TYPE=Debug
cmake -B build-release -DCMAKE_BUILD_TYPE=Release
```

Use this to enter gdb

```bash
gdb ./build/bin/main
```

If you are already in gdb

```gdb
file ./main
run
```
---
Built with ❤️ by gula
