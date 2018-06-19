CFLAGS = -c -ansi -pedantic -Wall
CC = gcc

all: multifile

multifile: multifile.o myFile.o
	$(CC) -o multifile multifile.o myFile.o

multifile.o: multifile.c
	$(CC) $(CFLAGS) multifile.c

myFile.o: myFile.c
	$(CC) $(CFLAGS) myFile.c

clean:
	rm multifile *.o *~
