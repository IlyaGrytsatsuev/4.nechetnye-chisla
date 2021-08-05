#include <fstream>
#include <iostream>
#include "func.hpp"
using namespace std;

void insertion_sort(int *arr, int n) {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void nechet (int* arr, int n, int count){
    ofstream output("/Users/gratchuvalsky/Desktop/output.txt");
    output<<count<<"\n";
    for(int i = 0; i < n; i++ ){
        if(arr[i] % 2!= 0){
            output<<arr[i]<<"\n";
            
        }
    }
    output.close();
}
