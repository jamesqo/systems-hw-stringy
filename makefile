all: stringy.o main.o
	gcc -o stringy stringy.o main.o

stringy.o: stringy.c stringy.h
	gcc -c stringy.c

main.o: main.c stringy.h
	gcc -c main.c

clean:
	rm -f *.o
	rm -f *~
	rm -f stringy

run: all
	./stringy
