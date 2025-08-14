#include<iostream>
using namespace std;
/* 
    +-------+    +--------+    +--------+    +--------+
    | Base1 |    | Base2  |    | Base3  |    | Base4  |
    +-------+    +--------+    +--------+    +--------+
            \           /             \            /
            \         /               \          /
            v       v                 v        v
            +---------------------------------+
            |            Derived              |
            +---------------------------------+

*/
/* 
    Whose constructor will be called first ?
    it will call according to the order that is

    class CodeTeacher: public Youtuber , public Engineer

    here youtuber class is written first then youtuber class is called first after engineer class is called and codeteacher in the last;

*/


class Engineer {
public:
    string specialization;
    Engineer(){
        cout << "Engineer" << endl;
    }
    void work(){
        cout << "I have specialization in: "<< specialization << endl;
    }
};


class Youtuber {
public:
    string subscriber;
    Youtuber(){
        cout << "Youtuber" << endl;
    }
    void subs(){
        cout << "I have subscribers: "<< subscriber << endl;
    }
};


class CodeTeacher: public Youtuber , public Engineer{
public:
    string name;

    CodeTeacher(string name, string specialization, int subsriber){
        this->name = name;
        this->specialization = specialization;
        this->subscriber = subscriber;
    }

    CodeTeacher(){
        cout << "Code Teacher" << endl;
    }

    void show(){
        cout << name << endl;
        work();
        subs();

    }
};

int main(){
    // CodeTeacher c("Shivam", "CS", 120000);
    // c.show();


    CodeTeacher c;
}