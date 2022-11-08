#!/bin/bash
gcc -c -g *.c
ar -r liball.a *.o
ranlib liball.a
