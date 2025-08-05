#include<iostream>
using namespace std;
/* 
    pushes the max to the last by adjacent swaps

    steps required: n-1

    Scenario	    Time Complexity	    Space Complexity
    Best Case	    O(n)	            O(1)
    Worst Case	    O(n²)	            O(1)
    Average Case	O(n²)	            O(1)

*/

/* void bubbleSort(int a[], int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (a[i] > a[j]){
                swapp(&a[i], &a[j]);
            }
        }
    }
} */

void bubbleSort(int a[], int n){
    for (int i=n-1; i>=1; i--){
        int didSwap = 0;
        for (int j=0; j<i; j++){
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0) break;
        cout << "runs\n";
    }
}
int main(){
    int a[] = {1,2,3, 4,5,6,7};
    int size = sizeof(a)/sizeof(int);
    bubbleSort(a, size);
    for (int i=0; i<size; i++){
        cout << a[i] << " ";
    }
}