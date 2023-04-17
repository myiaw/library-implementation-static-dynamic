# The .so file is a shared library file that,
# contains compiled code from one or more source files.

all: build run

zip: clean
	zip naloga.zip main.c libXPO.c libXPO.h Makefile

build:
	#fPIC - use relative instead of absolute addressing to make the library dynamic.
	#shared - creating a shared library
	gcc -m32 -fPIC -c libXPO.c -o libXPO.o
	gcc -m32 -shared -o libXPO.so libXPO.o

run: build
	#L - Where to look for libraries (current '.')
	#lXPO - search for libXPO.so or libXPO.a 
	gcc -m32 main.c -L. -lXPO -o demo_implicitno
	#implicit - have to set library path
	#LD_LIBRARY_PATH - set the library path (have to recompile if we move library or executable to another location).
	LD_LIBRARY_PATH=. ./demo_implicitno stringi22!!?? 8 2

clean:
	rm -f demo_dynamic libXPO.o libXPO.so
