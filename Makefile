homework9: main.o Pokemon.o Lugia.o Lapras.o Lucario.o
	g++ -o homework9 main.o Pokemon.o Lugia.o Lapras.o Lucario.o

main.o: main.cpp
	g++ -ansi -pedantic-errors -Wall -c main.cpp	

Pokemon.o: Pokemon.cpp Pokemon.h
	g++ -ansi -pedantic-errors -Wall -c Pokemon.cpp

Lugia.o: Lugia.cpp Lugia.h
	g++ -ansi -pedantic-errors -Wall -c Lugia.cpp

Lapras.o: Lapras.cpp Lapras.h
	g++ -ansi -pedantic-errors -Wall -c Lapras.cpp

Lucario.o: Lucario.cpp Lucario.h
	g++ -ansi -pedantic-errors -Wall -c Lucario.cpp
