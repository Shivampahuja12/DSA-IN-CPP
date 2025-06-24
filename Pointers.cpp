/* 
    ***     Pointer     ***
    Q. It is what ?
    It is a pointer to a variable or it stores the address of a variable. 

    A SYMBOL TABLE in data structures is a table that stores information about program symbols, like variables and functions, and their corresponding attributes.

    eg. int a=5;
    here the variable a is at given address in the memory and when we are accessing that variable there symbol table table comes eg.  cout << a;
    now in cout we are trying to access a 
    the instruction will be cout function will go the symbol table there our system find that variable and return the value which is assigned to that variable.   

*/


#include<iostream>
using namespace std;
/* int main(){
    int a = 12;
    int b = 12;
    // cin >> a;   // takes the value from the user 
    cout <<"a = " << a << endl;  // prints that value on the terminal 
    cout <<"b = " << b << endl;  // prints that value on the terminal 
    cout <<"address of a = " << &a << endl; // prints the address of the variable a where a is stored in the memory, & is an address of operator
    cout <<"address of b = " << &b << endl; // prints the address of the variable a where a is stored in the memory, & is an address of operator

    // int a[n] // s bad practice.
} */


/* int main(){
    int a = 5;      // this signifies that we can stores data of integer type in a 
    // int *p;     // this signifies that p is a pointer variable which stores the address of any other int variable 


    // (int*) is a pointer to integer data
    // bool* p; here p is a pointer to bool data
    // long* p; p is a pointer to long data
    // short* p; p is a pointer to short data

    int* p = &a; // break this and marks the points, p is a pointer to a or integer data 

    // access the value p is pointing to
    cout << *p << endl; // we are using derefrencing operator here to print the actual value where the p pointing to or holding the address (*) and here segment table takes place too.

    cout <<"p = " << p << endl;
    cout <<"&p = " << &p << endl;
    cout <<"&a = "<< &a << endl;

    char ch = 'a';
    char* c = &ch;
    double dh = 5.45;
    double* d = &dh;
    cout << "Size of p is: " << sizeof(p) << endl;  // 8
    cout << "Size of c is: " << sizeof(c) << endl;  // 8
    cout << "Size of d is: " << sizeof(d) << endl;  // 8

} */


// why do we need pointer ? - for dynamic memory allocation

/* int main(){
    int* a;
    cout << *a << endl;     // segmentation fault
} */


/* int main(){
    int *p = NULL; // 0, nullptr
    cout << *p << endl;
} */


// POINTER ARITHMETICS
/* int main(){
    int a = 5;
    int* p = &a;
    cout << a << endl;
    // a = a + 1;
    *p = *p+1;
    cout << *p << endl;
} */


int main(){
    int a = 5;
    int* p = &a;
    int *p2;
    p2 = p;     // now p2 is also pointing to a (copy pointer).
    
    *p += 1;
    *p2 += 1;

    cout << *p << endl;
    cout << *p2 << endl;
}