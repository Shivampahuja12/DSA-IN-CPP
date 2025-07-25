#include<iostream>
using namespace std;
void swapp(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int a[], int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (a[i] > a[j]){
                swapp(&a[i], &a[j]);
            }
        }
    }
}
int main(){
    int a[] = {32,34,12,1,4,45,19, 82, 54};
    int size = sizeof(a)/sizeof(int);
    bubbleSort(a, size);
    for (int i=0; i<size; i++){
        cout << a[i] << " ";
    }
}