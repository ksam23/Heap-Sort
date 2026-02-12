#ifndef MERGESORT_H
#define MERGESORT_H
#include <vector>
using namespace std;

void merge_sort(vector<int> arr, int l, int r);
void merge(vector<int>& arr, int l, int m, int r);

#endif
