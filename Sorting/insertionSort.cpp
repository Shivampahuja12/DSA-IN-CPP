#include<iostream>
using namespace std;
/* 
    takes an element and place it in its current order.

    Scenario	    Time Complexity	    Space Complexity
    Best Case	    O(n)	            O(1)
    Worst Case	    O(n²)	            O(1)
    Average Case	O(n²)	            O(1)

*/
void insertionSort(int a[], int n){
    for (int i=0; i<n; i++){
        int j=i;
        while (j>0 && a[j-1] > a[j]){
            swap(a[j-1], a[j]);
            j--;
        }
    }
}
int main(){
    int a[] = {7,6,5,4,3,2,1};
    int size = sizeof(a)/sizeof(int);
    insertionSort(a, size);
    for (int i=0; i<size; i++){
        cout << a[i] << " ";
    }
}