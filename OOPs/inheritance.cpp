#include<iostream>
using namespace std;

/* 

    Priority:
    private > protected > public 


*/


class Human {

// private:
//     string name;
//     int age, weight;         // not accessible outside the class whether the inherited class has any of the specifiers.
// };


// protected:       // not accessible in main function but only accessible in inherited class or own class
//     string name;
//     int age, weight;

// };


public:
    string name;
    int age, weight;

};

class Student : public Human {
    int rollno, fees;

public:
    Student(string name, int age, int weight, int rollno, int fees){
        this->name = name;
        this->age = age;
        this->weight= weight;
        this->rollno= rollno;
        this->fees= fees;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << endl;
        cout << "Rollno: " << rollno << endl;
        cout << "Fees: " << fees << endl;
    }
};

int main(){
    /* Student A;
    A.name = "Shivam";  // error because name is private in the parent class
    
    A.name = "Shivam";  // error because name is protected in the parent class
    
    A.name = "Shivam";
    cout << A.name << endl; */
    



    Student A("Shivam", 19, 65, 629, 120000);
    A.display();
}