#include<iostream>
using namespace std;
/* 
    Constructor - Firstly the parent class constructor is called when we Create an object of derived class -> as it uses another class so to give respect parent class constructor is called.

    Destructor is just reverse of the constructor.



    Q. Now both parent class and derived class has a function named display() then which will execute ?
    Ans. Firstly it will check the derived class that it has display function or not if it is present then it will execute derived class display() but if it is not present there then parent class display() will be executed.
    
    
*/

class Human {
protected:
    string name;
    int age;

public:
    // void work(){
    //     cout << "I am working" << endl;
    // }

    // ~Human(){
    //     cout << "I am human" << endl;
    // }

    Human(string name, int age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout << name << " " << age << endl;
    }
};


class Student : public Human {
private:
    int rollno, fees;

public:
    // ~Student() {
    //     cout << "I am student" << endl;
    // }
    Student(string name, int age, int rollno, int fees): Human(name, age){
        this->rollno = rollno;
        this->fees = fees;
    }

    void display(){
        cout << name << " ";
        cout << age << " ";
        cout << rollno << " ";
        cout << fees << " ";
    }
};

int main(){
    // Student s1("Shivam", 19, 629, 120000);
    // s1.work();
    // Student s2("Harsh", 24, 1999, 77000);
    // s2.work();
    
    
    Student s1("Shivam", 19, 629, 120000);
    s1.display();
}