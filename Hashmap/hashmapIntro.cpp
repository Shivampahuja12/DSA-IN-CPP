#include<iostream>

#include<unordered_map>     // necessary
using namespace std;
/* 
    In hashmap is a data structure in which the data is stored in a key value pair.

    Ordered map -> O(log n)
    unorderd map -> O(1)

    Q. Create a data structure which can do insertion, updation, deletion, searching, getRandom in O(1) complexity ?
    -> 
*/
int main(){

    // creation
    // unordered_map<key, value> name;      //syntax
    unordered_map<string, int> m;
    

    // insertion
    pair<string, int> p = make_pair("scorpio", 2);
    m.insert(p);
    
    pair<string, int> p2("swift", 5);
    m.insert(p2);

    m["fortuner"] = 10;


    // access
    // cout << m.at("fortuner") << endl;    // error - out of bound
    // cout << m["fortuner"] << endl;      // right syntax



    // search
    // cout << "Key Exist if 1 else 0: " << m.count("fortuner") << endl;
    // if (m.find("fortuner") != m.end()) cout << "Fortuner found" << endl;
    // else cout << "Not found" << endl;


    cout << m.size() << endl;

}