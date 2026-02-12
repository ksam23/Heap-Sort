test: HeapSort.o MergeSort.o main.o
	g++ -o test HeapSort.o MergeSort.o main.o

HeapSort.o: HeapSort.cpp HeapSort.h
	g++ -c HeapSort.cpp

MergeSort.o: MergeSort.cpp MergeSort.h
	g++ -c MergeSort.cpp

main.o: main.cpp HeapSort.h MergeSort.h
	g++ -c main.cpp

clean:
	rm *.o test
	