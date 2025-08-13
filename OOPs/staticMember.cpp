#include<iostream>
using namespace std;

class Customer {

    private:
        string name;
        int accNo, balance;
        static int total_customer;  // static data member

    public:
        Customer(string name, int accNo, int balance){
            this->name = name;
            this->accNo = accNo;
            this->balance = balance;
            total_customer++;
        }
    
        static void accessStatic(){
            cout << total_customer << endl;
        }

        void display(){
            cout << name << " " << accNo << " " << balance << endl;
        }
};

int Customer::total_customer=0;
int main(){
    Customer c1("Shivam", 1, 1200);
    Customer c2("Harsh", 2, 12200);
    Customer c3("Pahuja", 3, 5400);
    c1.display();
    c2.display();
    c3.display();

    Customer::accessStatic();

}