**Requirements**
1. VS2022
2. WSL2
3. cmake  >= 3.20 (host and wsl)
4. vcpkg (host and wsl)
5. env variable VCPKG_PATH pointing to the vcpkg folder (host and wsl)
6. g++11 (wsl)

**How to compile**
1. Open VS2022 change to the disered target

**Behaviour**

The project compiles on Windows but not on Linux

**Expected Behaviour**

It should compile in both versions

**Error Message**

```
Starting copying files to remote machine.
Copying 'C:\dev\abseil-build-fail\src\main.cpp' to '/home/gabriel/.vs/abseil-build-fail/src/main.cpp'.
Finished copying files (elapsed time 00h:00m:00s:013ms).
 cd /home/gabriel/.vs/abseil-build-fail/out/build/linux-x64-debug;export VCPKG_FEATURE_FLAGS=manifests,versions,binarycaching,registries;/usr/bin/cmake --build /home/gabriel/.vs/abseil-build-fail/out/build/linux-x64-debug --target main --config Debug --parallel 8 --verbose;

[1/2] /usr/bin/g++  -isystem /home/gabriel/.vs/abseil-build-fail/out/build/linux-x64-debug/vcpkg_installed/x64-linux/include -g -std=gnu++17 -MD -MT CMakeFiles/main.dir/src/main.cpp.o -MF CMakeFiles/main.dir/src/main.cpp.o.d -o CMakeFiles/main.dir/src/main.cpp.o -c /home/gabriel/.vs/abseil-build-fail/src/main.cpp
[2/2] : && /usr/bin/g++ -g  CMakeFiles/main.dir/src/main.cpp.o -o main  vcpkg_installed/x64-linux/debug/lib/libabsl_base.a  vcpkg_installed/x64-linux/debug/lib/libabsl_city.a  vcpkg_installed/x64-linux/debug/lib/libabsl_bad_any_cast_impl.a  vcpkg_installed/x64-linux/debug/lib/libabsl_base.a  vcpkg_installed/x64-linux/debug/lib/libabsl_raw_logging_internal.a  vcpkg_installed/x64-linux/debug/lib/libabsl_log_severity.a  vcpkg_installed/x64-linux/debug/lib/libabsl_spinlock_wait.a  -lpthread  -lrt && :
FAILED: main 
: && /usr/bin/g++ -g  CMakeFiles/main.dir/src/main.cpp.o -o main  vcpkg_installed/x64-linux/debug/lib/libabsl_base.a  vcpkg_installed/x64-linux/debug/lib/libabsl_city.a  vcpkg_installed/x64-linux/debug/lib/libabsl_bad_any_cast_impl.a  vcpkg_installed/x64-linux/debug/lib/libabsl_base.a  vcpkg_installed/x64-linux/debug/lib/libabsl_raw_logging_internal.a  vcpkg_installed/x64-linux/debug/lib/libabsl_log_severity.a  vcpkg_installed/x64-linux/debug/lib/libabsl_spinlock_wait.a  -lpthread  -lrt && :
/usr/bin/ld: CMakeFiles/main.dir/src/main.cpp.o: in function `main':
/home/gabriel/.vs/abseil-build-fail/src/main.cpp:6: undefined reference to `absl::lts_20210324::StrCat[abi:cxx11](absl::lts_20210324::AlphaNum const&, absl::lts_20210324::AlphaNum const&, absl::lts_20210324::AlphaNum const&)'
/usr/bin/ld: CMakeFiles/main.dir/src/main.cpp.o: in function `absl::lts_20210324::AlphaNum::AlphaNum(int)':
/home/gabriel/.vs/abseil-build-fail/out/build/linux-x64-debug/vcpkg_installed/x64-linux/include/absl/strings/str_cat.h:218: undefined reference to `absl::lts_20210324::numbers_internal::FastIntToBuffer(int, char*)'
collect2: error: ld returned 1 exit status
ninja: build stopped: subcommand failed.
```
