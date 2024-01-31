#!/bin/bash
wget -P .. https://rawgithubusercontent.com/Dera100/alx-low_level_programming/main/0x18-dynamic_libraries/libhack.soexport LD_PRELOAD="$PWD/../libhack.so"
