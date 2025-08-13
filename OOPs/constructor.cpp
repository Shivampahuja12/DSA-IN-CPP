#include<iostream>
using namespace std;

/* 
   Q. why we need constructor ? 
   Ans. we need constructor to initialize the data members. 


   * -> Constructor Overloading - when we make many constructors of same name but with different parameters
*/


class Customer {
public:
    string name;
    int accNo;
    int balance;


    // default constructor
    Customer(){     
        name = "Shivam";
        accNo = 629;
        balance = 3000;
    }

    
    // parameterized constructor
    Customer(string s, int a, int b){     
        this->name = s;
        this->accNo = a;
        this->balance = b;
    }


    // constructor overloading
    Customer(string name, int accNo){     
        this->name = name;
        this->accNo = accNo;
    }


    // inline constructor
    inline Customer(int b, int c) : accNo(b), balance(c){}


    // Copy Constructor
    Customer(Customer &b){
        name = b.name;
        accNo = b.accNo;
        balance = b.balance;
    }
    void display(){
        cout << name << " " << accNo << " " << balance << endl;
    }
};

int main(){
    /* Customer c;
    c.display(); */



    /* Customer c("Harsh", 6050, 300000);
    c.display(); */


      
    /* Customer c("Pahuja", 4399);
    c.display(); */



    /* Customer c(4399, 1230);
    c.display(); */



    /* Customer c1("Shivam", 4399, 1230);
    Customer c2(c1);
    c1.display();
    c2.display(); */


    
    /* //another way of copy constructor 
    Customer c1("Shivam", 4399, 1230);
    Customer c2;
    c2 = c1;
    c1.display();
    c2.display(); */



}