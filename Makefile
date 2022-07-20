all: add-ndo

add-ndo: main.o
	g++ -o add-nbo main.cpp
clean:
	rm -f *.o
	rm -f add-nbo
