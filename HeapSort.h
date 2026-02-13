#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <vector>
using namespace std;


    void heap_sort(vector<int>& arr, int n);

    void build_max_heap(vector<int>& arr, int n);
    void max_heapify(vector<int>& arr, int i);
    void insert(vector<int>& arr, int val);
    void swap(vector<int>& arr, int i, int j);

    int parent(int i);
    int left(int i);
    int right(int i);

#endif
