all : Compresse

Compresse : chained_list.o main.o
	gcc chained_list.o main.o -o Compresse

main.o : main.c
	gcc -c main.c

chained_list.o : chained_list.c chained_list.h
	gcc -c chained_list.c

clean :
	rm *.o Compresse
