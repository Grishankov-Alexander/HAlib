a.out: libclient.c libHAlib.so
		gcc -L"./" -Wl,-rpath="./" -Wall -W -O3 -ansi -std=c11 -pedantic libclient.c -lHAlib

libHAlib.so: HAlib.o
	gcc -shared -o libHAlib.so HAlib.o

HAlib.o: HAlib.h HAlib.c
	gcc -Wall -W -O3 -ansi -std=c11 -pedantic -fpic -c -o HAlib.o HAlib.c