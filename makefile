all: main.o musiclib.o linkedlist.o
	gcc -o program main.o musiclib.o linkedlist.o
main.o: main.c musiclib.h linkedlist.h
	gcc -c main.c linkedlist.h musiclib.h
linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c linkedlist.h
musiclib.o: musiclib.c musiclib.h linkedlist.h
	gcc -c musiclib.c musiclib.h linkedlist.h
run:
	./program
clean:
	rm *.o
