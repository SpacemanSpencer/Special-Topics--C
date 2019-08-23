#!/bin/bash
gcc -c -Wall sphere.c
gcc -c -Wall volCyl.c
gcc -c -Wall sumFloats.c
gcc -c -Wall sin.c

ar -cru libLabLib.a sphere.o volCyl.o sumFloats.o sin.o
#static lib now created
gcc -o pgm03 lab03.c -L. -lLabLib
#executable created
echo "process completed!"