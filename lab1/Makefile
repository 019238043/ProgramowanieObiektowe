CC = g++

all:main.o menu.o tablica.o tablica_wysw.o
	$(CC) main.o menu.o tablica.o tablica_wysw.o -o test 
main.o: main.cpp 
	$(CC) main.cpp -c -o main.o
menu.o: menu.cpp menu.h
	$(CC) menu.cpp -c -o menu.o
tablica.o: tablica.cpp tablica.h
	$(CC) tablica.cpp -c -o tablica.o
tablica_wysw.o: tablica_wysw.cpp tablica_wysw.h
	$(CC) tablica_wysw.cpp -c -o tablica_wysw.o
clean:
	rm -f *.o test

