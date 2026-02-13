#include <vector>
#include <iostream>
#include "HeapSort.h"
using namespace std;

int main(){

    int total;
    cin >> total;

    //fills array with input values
    vector<int> arr(total);
    for(int i = 0; i < total; i++){
        cin >> arr[i];
    }

    heap_sort(arr, total);

    //prints sorted array
    cout << "Total: "<< total << endl;
    for(int i = 0; i < total; i++){
        cout << arr[i] << endl;
    }
}
