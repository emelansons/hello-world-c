all: $(wildcard *.c)
	gcc main.c -o hello && ./hello