all: main.o funcs.o
	gcc -o program main.o funcs.o

main.o: main.c headers.h
	gcc -c main.c

funcs.o: funcs.c headers.h
	gcc -c funcs.c

run:
	./program

clean:
	rm *.o
	rm *~
