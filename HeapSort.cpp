#include "HeapSort.h"
#include <vector>

//start with top element, if one of the children is larger swap down
void max_heapify(vector<int> arr, int i){
  int largest = i;

  //if in bounds and left child > parent
  if(left(i) < heap_size && arr[left(i)] > arr[largest]){
    largest = left(i);
  }
  //if in bounds and right child > parent
  if(right(i) < heap_size && arr[right(i)] > arr[largest]){
    largest = right(i);
  }
  //if one of the children is greater swap
  if(largest != i){
    swap(arr[i], arr[largest]);
    max_heapify(arr, largest);
  }
}

//insert an element
void insert(vector<int> arr, int val){
  arr[heap_size] = value;
  int i = heap_size;
  ++heap_size;
  while(i > 0 && arr[parent(i)] < arr[i]){
    swap(parent(i), i);
    i = parent(i);
  }
}

void swap(int i, int j){
  //to do
}

//helper functions to get parent, left and right values in tree
int parent(int i){
  return i / 2;
}
int left(int i){
  return 2i;
}
int right(int i){
  return 2i + 1;
}


