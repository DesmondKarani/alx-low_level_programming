#!/bin/bash
# Script that makes me win the Giga Millions jackpot
cp gm /tmp/gm
echo -e '#include <stdio.h>\nint printf(const char *format, ...){return (0);}' > /tmp/hack.c
gcc -Wall -fPIC -c /tmp/hack.c -o /tmp/hack.o
gcc -shared -o /tmp/hack.so /tmp/hack.o
export LD_PRELOAD=/tmp/hack.so
