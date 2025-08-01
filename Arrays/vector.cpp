#include<iostream>
#include<vector>
using namespace std;
/* 
    - vector is dynamic array
    - declaration - vector<int> v;

    - for the size of an array declaration will be:
    1.  int n;
        cin >> n;
        vector<int> v(n);

    2.  vector<int> v(10, -1);  // this means a vector is  declared with 10 elements and each element is intialized with -1;

    3. vector<int> v = {1,2,3,4,5};

*/

int main(){
    vector<int> v;
    // cout << sizeof(v)/sizeof(int) << endl;  // 6 why ?

    // cout << v.size() << endl;
    // cout << v.capacity() << endl;


    // insert at the end
    v.push_back(5);
    v.push_back(6);

    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    
    // removing element from the end of the vector
    v.pop_back();
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    

}