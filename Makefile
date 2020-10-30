main: main.o 3dspace.o
	g++ -o main main.o 3dspace.o

tests: tests.o 3dspace.o
	g++ -o tests tests.o 3dspace.o

tests.o: doctest.h tests.cpp

3dspace.o: 3dspace.cpp 3dspace.h coord3d.h

poem: poem.o
	g++ -o poem poem.o

poem.o: poem.cpp

clean:
	rm -f a.out main main.o tests tests.o 3dspace.o poem poem.o 
