all: main.o linkedlist.o
	gcc -o program main.o linkedlist.o
main.o: main.c linkedlist.h
	gcc -c main.c
linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c
run:
	./program
clean:
	rm *.o
