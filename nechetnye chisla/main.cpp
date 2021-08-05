#include "func.hpp"
#include <fstream>
#include <iostream>
using namespace std;
int main () {
    int n;
    int count = 0;
    cout<<"enter the size of the massive:\n";
    cin>>n;
    int* a = new int[n];
    ifstream input("/Users/gratchuvalsky/Desktop/input.txt");
        if (!input) {
            cout << "File Error" <<endl;
            return 1;
        }

        int i = 0;
        while(!input.eof())
        {
            input>>a[i];
            if(a[i] % 2 != 0){
                count++;
            }
            i++;
        }
    input.close();
    insertion_sort(a, n);
    nechet (a, n, count);
    delete[] a;
    return 0;
}
