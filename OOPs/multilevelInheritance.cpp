#include<iostream>
using namespace std;

/* 
    +-------+
    | Base  |
    +-------+
        |
        v
    +--------+
    | Level1 |
    +--------+
        |
        v
    +--------+
    | Level2 |
    +--------+


    there can be more levels in this.

*/

class Person {
protected:
    string name;

public:
    void introduce(){
        cout << "Hello My name is: " << name << endl;
    }
};

class Employee : public Person {
protected:
    int salary;

public:
    void monthlySalary(){
        cout << "My monthly salary is: " << salary << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    Manager(string name, int salary, string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work(){
        cout << "I am leading the department: " << department << endl;
    }
};

int main(){
    Manager m("Shivam", 120000, "CS");
    m.work();
    m.monthlySalary();
    m.introduce();
    m.department="Computer Science";
}