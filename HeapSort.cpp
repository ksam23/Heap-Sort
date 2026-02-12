#include "HeapSort.h"
#include <vector>

void HeapSort::heap_sort(vector<int> arr, int n){
  build_max_heap(arr, n);
  for( int i  = n - 1; i > 0; i--){
    swap(arr, 0, i);
    --heap_size;
    max_heapify(arr, 0);
  }
}

//builds max heap
void HeapSort::build_max_heap(vector<int> arr, int n){
  heap_size = n;
  for(int i = (n / 2) - 1; i >= 0; i--){
    max_heapify(arr, i);
  }
}

//start with top element, if one of the children is larger swap down, if swap is done use recursion on that element
void HeapSort::max_heapify(vector<int> arr, int i){
  int largest = i;

  //if in bounds and left-child > parent
  if(left(i) < heap_size && arr[left(i)] > arr[largest]){
    largest = left(i);
  }
  //if in bounds and right-child > parent or left-child
  if(right(i) < heap_size && arr[right(i)] > arr[largest]){
    largest = right(i);
  }
  //if one of the children is greater swap
  if(largest != i){
    swap(arr, arr[i], arr[largest]);
    max_heapify(arr, largest);
  }
}

//insert an element
void HeapSort::insert(vector<int> arr, int val){
  arr[heap_size] = value;
  int i = heap_size;
  ++heap_size;

  //bubble up the new element
  while(i > 0 && arr[parent(i)] < arr[i]){
    swap(arr,parent(i), i);
    i = parent(i);
  }
}

//swaps two elements 
void HeapSort::swap(vector<int>& arr, int i, int j){
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

//helper functions to get parent, left and right values in tree
int HeapSort::parent(int i){
  return i / 2;
}
int HeapSort::left(int i){
  return (2 * i) + 1;
}
int HeapSort::right(int i){
  return (2 * i) + 2;
}


