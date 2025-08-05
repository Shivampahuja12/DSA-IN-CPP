#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int getLength(char s[]){
    int count=0;
    // for (int i=0; s[i]!='\0'; i++){
    //     if (isalpha(s[i])){
    //         count++;
    //     }
    // }

    int i=0;
    while (s[i]!='\0'){
        if (isalpha(s[i])){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    // char ch[20];
    // string s;
    // cout << "Enter your name: ";
    /* cin >> ch;      // by default a null character stores at the end of the string '\0' - termination of string
    cout << ch; */


    /* cin >> ch;
    for (int i=0; i<7; i++){
        cout << "Index: " << i << " Value: " << ch[i] << endl;
    } */

    // cout << "ASCII value of null character is: " << (int)ch[6] << endl;


    /* // getline(cin ,ch);    // getline works with string not with character arrays;
    cin.getline(ch, 15);
    cout << ch; */


    // length of string
    char s[50];
    cin.getline(s, 50);
    cout << getLength(s) << endl;
    cout << strlen(s) << endl;
}