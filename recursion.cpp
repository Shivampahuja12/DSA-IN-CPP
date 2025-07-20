// RECURSION - FUNCTION CALLING ITSELF
/*  
    HEAD OR TAIL RECURSION: 
    RECURSION :-
        1. BASE CONDITION
        2. RECURSIVE RELATION
        3. PROCESSING
*/
#include<iostream>
using namespace std;
void recursion(int n){
    if (n==0) return;
    cout << "Hello" << endl;
    recursion(n-1);
}
int main(){
    int n = 10;
    recursion(n);
}

/* 
    1.factorial
    2.counting 
    3.counting reverse
    4.fibo
    5.climb stairs
    6.print digits of a number
    7.maximum in array
    8.minimum in array
    9.search in array 
    10.count of searched element in the array
    11. 10th and then print the index
*/