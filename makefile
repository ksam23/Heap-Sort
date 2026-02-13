test: HeapSort.o main.o
	g++ -o test HeapSort.o main.o

HeapSort.o: HeapSort.cpp HeapSort.h
	g++ -c HeapSort.cpp

main.o: main.cpp HeapSort.h 
	g++ -c main.cpp

clean:
	rm *.o test
	