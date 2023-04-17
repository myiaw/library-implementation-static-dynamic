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
	#lXPO - search for libXPO.so or libXPO.a
	#rpath - set the library path (we can move library or executable to another location and it will still work)
	#Wl - pass the following option to the linker.
	gcc -m32 main.c -L. -lXPO -o demo_explicitno -Wl,-rpath=./
	./demo_explicitno stringi22!!?? 8 2

clean:
	rm -f demo_explicitno libXPO.o libXPO.so
