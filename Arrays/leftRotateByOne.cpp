#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5, 6, 7, 8, 9, 10};
    int n = sizeof(a)/ sizeof(int);
    int first = a[0];
    for (int i=0; i<n-1; i++){
        a[i] = a[i+1];
    }

    a[n-1] = first;

    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }

}