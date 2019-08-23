.PHONY: run
	
run: PGM03
	./PGM03

PGM03: lab03.c libLabLib.so
	gcc -o PGM03 lab03.c -L. -lLabLib

libLabLib.so: sphere.o volCyl.o sumFloats.o sin.o
	gcc -shared -o libLabLib.a sphere.o volCyl.o sumFloats.o sin.o

sphere.o: sphere.c
	gcc -fPIC -c sphere.c

volCyl.o: volCyl.c
	gcc -fPIC -c volCyl.c

sumFloats.o: sumFloats.c
	gcc -fPIC -c sumFloats.c

sin.o: sin.c
	gcc -fPIC -c sin.c

Clean:
	-rm *.o PGM03