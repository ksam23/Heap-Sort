#include <vector>
#include "MergeSort.h"
using namespace std;

void merge_sort(vector<int> arr, int l, int r){
  if(l >= r){
    return;
  }
    int m = (l + r) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    merge(arr, l, m, r);
}

void merge(vector<int>& arr, int l, int m, int r){
  int a = m - l + 1;
  int b = r - m;

  //create and copy values into two seprate arrays
  vector<int> temp1(a);
  vector<int> temp2(b);

  for(int i = 0; i < a; i++){
    temp1[i] = arr[l + i];
  }
  for(int i = 0; i < b; i++){
    temp2[i] = arr[m + 1 + i];
  }

  int i = 0;
  int j = 0;
  int k = l;
   
  //merge halves back into one in order
  while(i < a && j < b){
    if(temp1[i] <= temp2[j]){
      arr[k] = temp1[i];
      i++;
    }
    else{
      arr[k] = temp2[j];
      j++;
    }
    k++;
  }

  //if arrays were uneven copy extra
    while(i < a){
        arr[k] = temp1[i];
        i++;
        k++;
    }

    while(j < b){
        arr[k] = temp2[j];
        j++;
        k++;
    }

}