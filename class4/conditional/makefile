all: hello goodmorning

# Build hello with no macros defined
hello: hello.c
	gcc hello.c -Wall -pedantic -ansi -o hello

# Build goodmorining with "MORNING" defined
goodmorning: hello.c
	gcc hello.c -Wall -pedantic -ansi -D MORNING -o goodmorning

# make clean to remove executables
clean:
	rm -f *.o *.exe *~
