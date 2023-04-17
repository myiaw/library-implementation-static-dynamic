# The .a file is a static library file that,
# contains compiled code from one or more source files.

zip: clean
	zip naloga.zip main.c libXPO.c libXPO.h Makefile


all: lib build run

	# When building, link with .a file
build: lib
	gcc -m32 main.c -o demo_staticno libXPO.a

lib:
	# Compile the library source file into an object file
	gcc -m32 -c libXPO.c -o libXPO.o

	# Archive (bundle with more or just one '.o') the object file into a static library
	ar rcs libXPO.a libXPO.o
run: build
	./demo_staticno stringi22!!?? 8 2
clean:
	rm -f demo_staticno libXPO.o libXPO.a

