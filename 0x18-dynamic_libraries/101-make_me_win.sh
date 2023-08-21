#!/bin/bash
wget -O /tmp/printf.so https://github.com/hamd606/alx-low_level_programming/tree/master/0x18-dynamic_libraries/printf.so
export  LD_PRELOAD=/tmp/printf.so ./gm 9 8 10 24 75 9
