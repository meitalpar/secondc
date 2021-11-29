FLAG=-Wall -g
CC=gcc
AR=ar

all: connections main.o my_mat.o

connections: main.o my_mat.o
	$(CC) $(FLAG) -o connections main.o my_mat.o

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAG) -c my_mat.c 

main.o: my_mat.h main.c
	$(CC) $(FLAG) -c main.c


.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections 
