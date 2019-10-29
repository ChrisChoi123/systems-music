all: main.o func.o
	gcc -o program main.o func.o
main.o: main.c head.h
	gcc -c main.c
func.o: func.c head.h
	gcc -c func.c
run:
	./program
clean:
	rm *.o
