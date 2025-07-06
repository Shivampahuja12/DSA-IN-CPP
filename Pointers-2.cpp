#include<iostream>
using namespace std;

/* 
    DIFFERENCES BETWEEN A POINTER AND AN ARRAY.
    1. sizeof array tells the sizeof the whole array but the sizeof a pointer pointing to array is always 8.
    2. arr = arr+1 (arr is a constant pointer) is not a possible operation  because we can't change the base address of an array (or we can't change the entry of an array in the symbol table) but 
    p = p+1 is a possible operation because we are changing the value of p not the reference of p.
*/

/* int main(){
    int a[] = {12, 17, 89, 41};
    // cout << "a = " << a << endl;  // same output, a gives the base address. we can derefrence it too.
    // cout << "*a = " << *a << endl;  // gives the value at the base address.
    // cout << "a[0] = " << a[0] << endl;   // same output
    // cout << "&a = " << &a << endl;
    // cout << "&a[0] = " << &a[0] << endl;  // same output


    // int *p = a;
    // cout << "p = " << p << endl;
    // cout << "&p = " << &p << endl;

    // cout << *a << endl;
    // cout << *a + 1 << endl;
    // cout << *(a)+1 << endl;
    // cout << *(a+1) << endl;
    // cout << a[1] << endl;
    // cout << *(a+2) << endl;
    // cout << a[2] << endl;
    // cout << *(a+3) << endl;
    // cout << a[3] << endl;


    // int i=0;                    // same meaning and answers
    // cout << a[i] << endl;
    // cout << i[a] << endl;
    // cout << *(a + i) << endl;
    // cout << *(i+a) << endl;



    // *a = *a + 2;
    // int* p = a;
    // p = p + 2;


    // int m[10];
    // cout << sizeof(m) << endl;
    // int *p = m;
    // cout << sizeof(p) << endl;

} */


/* 
    DIFFERENCE BETWEEN POINTERS AND CHARACTER ARRAYS. 
*/
int main(){
    // char ch[] = "Babbar";
    // char *c = ch;    // copies the reference of the string to pointer c.
    // cout << ch << endl;     // Babbar
    // cout << &ch << endl;    // address
    // cout << ch[0] << endl;  // B

    // // cout << &c[0] << endl;  // Babbar
    // cout << &c << endl;     // address
    // cout << *c << endl;     // B
    // cout << c << endl;      // Babbar


    char name[] = "sher bano";
    char* ptr = &name[0];

    cout << name << endl;       // sher bano
    cout << &name << endl;      // address
    cout << *(name+3) << endl;  // r
    cout << ptr << endl;    // sher bano
    cout << &ptr << endl;   // address of ptr
    cout << *(ptr+3) << endl;   // r
    cout << (ptr+2) << endl;    // address of index 2 in the string xxxxx   -> er bano
    cout << *(ptr) << endl;     // s
    cout << *(ptr+8) << endl;   // o
    cout << ptr+8 << endl;   // o

}

