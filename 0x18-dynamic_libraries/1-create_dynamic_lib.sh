#!/bin/bash
gcc *.c -c -fpi
gcc -shared -o liball.so *.o
