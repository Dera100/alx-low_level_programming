#!/bin/bash
wget -P /tmp https://github.com/Dera100/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/random.so
