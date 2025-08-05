#include<iostream>
using namespace std;
/* 
    select the minimums and swap

    steps required: (elements in the array) - 1

    * Complexity:
        Time	O(n²)
        Space	O(1)

    Overall Time Complexity:
        Best case: O(n²)
        Average case: O(n²)
        Worst case: O(n²)

*/
void printArray(int a[], int n){
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}

void selectionSort(int a[], int n){

    for (int i=0; i<n-1; i++){
        int min=i;
        for(int j=i; j<n; j++){
            if (a[j] < a[min]){
                min = j;  
            }
        }
        swap(a[min], a[i]);
    }
    printArray(a, n);
}

int main(){
    int a[] = {13, 46, 24, 52, 20, 9}; 
    int n = sizeof(a)/sizeof(int);
    selectionSort(a, n);
}
