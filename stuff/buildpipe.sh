#!/bin/bash
#script to create rand numbers
gcc –c  -Wall  randapi.c
gcc –c  -Wall  seedRandGenerator.c

ar –cru libRandapi.a  randapi.o  seedRandGenerator.o

gcc -o pipeLab pipeLab.c -L. -lRandapi