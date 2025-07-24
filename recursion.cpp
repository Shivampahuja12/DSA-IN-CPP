#include<iostream>
#include<vector>
using namespace std;
// RECURSION - FUNCTION CALLING ITSELF
/*  

    WHEN A BIGGER PROBLEM SOLUTION DEPENDS ON SMALL PROBLEM'S SOLUTION
    HEAD OR TAIL RECURSION: 
    RECURSION :-
        1. BASE CONDITION
        2. RECURSIVE RELATION
        3. PROCESSING
*/
void recursion(int n){
    if (n==0) return;
    cout << "Hello" << endl;
    recursion(n-1);
}
int fact(int n){
    if (n==0 || n==1) return 1;
    return n*fact(n-1);
}
void countReverse(int n){
    if (n==0) return;
    cout << n << " ";
    countReverse(n-1);
}
void count(int n){
    if (n==0) return;
    count(n-1);
    cout << n << " ";
}
int fibo(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return fibo(n-1)+fibo(n-2);
}
int climbingStairs(int n){
    if (n==0 || n==1) return 1;
    return climbingStairs(n-1) + climbingStairs(n-2);
}
void printArrayIndex(vector<int> a, int i){ // with index passing
    /* if (a.size()==0) return;
    cout << a[a.size()-1] << " ";
    a.pop_back();
    printArray(a); */

    //base case
    if (i==a.size()) return;

    //1 case solve kr diya
    cout << a[i] << " ";

    // baki recursion sambhal lega
    printArrayIndex(a, i+1);

}
void printArray(vector<int> a, int n){ // without index passing
    if (n==0) return;
    printArray(a, n-1);
    cout << a[n-1] << " ";
}
int maxElement(vector<int> a, int n, int max, int it){      // will do dry run and not giving accurate answers
    if (it>=n) return max;
    max = a[it] > max ? a[it] : max;
    return maxElement(a, n, max, it+1);
    
    // if (n<0) return max; 
    // max = a[n-1] > max ? a[n-1] : max; 
    // return maxElement(a, n-1, max, it);
}
int minElement(int a[], int n, int min, int i){
    if (i>=n) return min;
    min = a[i] < min ? a[i] : min;
    return minElement(a, n, min, i+1);
}
int sumOfDigits(int n){
    if (n<=0) return 0;
    return n%10+sumOfDigits(n/10);
}
int powerRec(int a, int b){
    if (b==0) return 1;
    return powerRec(a, b-1) * a;
}
bool keyPresent(string s, int n, int i, char key){
    if (i>=n) return false;
    if (s[i] == key) return true;
    return keyPresent(s, n, i+1, key);
}

int main(){
    /* 
    // print using recursion
    int n = 10;
    recursion(n); */

    /* // factorial
    int n = 10;
    cout << fact(n) << endl; */


    /* // counting reverse
    int n = 5;
    countReverse(n); */

    /* // counting 
    int n=10;
    count(n); */

    /* // fibo
    int n=10;
    cout << fibo(n) << endl; */



    /* // climbing stairs  -- dry run
    int n=3;
    cout << climbingStairs(n) << endl; */

    /* // print array elements
    vector<int> v = {10, 20, 30, 40 ,50, 60, 70, 80, 90, 100};
    int i=0;
    // printArrayIndex(v, i);
    printArray(v, v.size()); */


    /* // max element in the array
    vector<int> v = {1, 5, 2, 99, 12};
    int max = INT_MIN;
    int i=0;
    cout << maxElement(v, v.size(), max, i); */


    /* // sum of digits
    int n=123;
    cout << sumOfDigits(n) << endl; */


    /* // power of a number
    int a = 2;
    int b = 6;
    cout << powerRec(a, b) << endl; */

    /* // minimum element in the array
    int a[] = {76,32,56,123, -10,77, -1,54, 11};
    int size = sizeof(a)/sizeof(int);
    int min = INT_MAX;
    int i=0;
    cout << minElement(a, size, min, i); */


    /* // key present or not in a string
    string s = "shivampahuja";
    int i=0;
    char key = 'm';
    cout << keyPresent(s, s.size(), i, key) << endl; */







}




/* 
    power of two
    5.climb stairs
    6.print digits of a number
    7.maximum in array
    8.minimum in array
    9.search in array 
    10.count of searched element in the array
    11. 10th and then print the index
*/




