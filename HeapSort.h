#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <vector>
using namespace std;

/* When running heapsort and merge sort with 1 million numbers, heapsort took on average about 5.22 seconds where as merge sort took on average about 4.23 seconds.
When running them with 10 million numbers, heapsort took an average of 1 m 1.82 seconds and merge sort took an average of 58.44 seconds. Therefore merge sort is faster.

If you compare the 1mil and 10mil runs for heapsort, it took about 12 times longer with 10mil than 1mil. For merge it took about 13 times longer for 10mil numbers. 
It is roughly a constant factor of 10 for both sorting algorithms, which checks out due to them both having a O(n log n) time complexity.

I ran this on my ASUS TUF F15 laptop, remotely through remote.cs.binghamton.edu.
It used the AMD EPYC 9354 32-Core Processor on Linux x86_64.
*/

    void heap_sort(vector<int>& arr, int n);

    void build_max_heap(vector<int>& arr, int n);
    void max_heapify(vector<int>& arr, int i);
    void insert(vector<int>& arr, int val);
    void swap(vector<int>& arr, int i, int j);

    int parent(int i);
    int left(int i);
    int right(int i);

#endif
