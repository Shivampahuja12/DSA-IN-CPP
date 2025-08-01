#include<iostream>
#include<vector>
using namespace std;

vector<int> intersectionNoDup(vector<int> &a, vector<int> &b){
    vector<int> v;
    for(int i=0; i<a.size(); i++){
        bool flag = 0;
        for (int j=0; j<b.size(); j++){
            if (a[i] == b[j]){
                flag = 1;
            }
        }
        if (flag) v.push_back(a[i]);
    }
    return v;
}
vector<int> intersectionWithDup(vector<int> &a, vector<int> &b){

    // brute
    vector<bool> used(b.size(), false);
    vector<int> v;
    for(int i=0; i<a.size(); i++){
        for (int j=0; j<b.size(); j++){
            if (!used[j] && a[i] == b[j]){
                v.push_back(a[i]);
                used[j] = true;
                break;
            }
        }
    }
    return v;
}
int main(){
    /* vector<int> a = {1,2,3,5,6};
    vector<int> b = {3,6};
    
    vector<int> v = intersectionNoDup(a, b);
    for (int i: v){
        cout << i << " ";
    } */
       
    vector<int> a = {1,2,3,3,3,3,3,5,6};
    vector<int> b = {3,6};
    vector<int> v = intersectionWithDup(a, b);
    for (int i: v){
        cout << i << " ";
    }

}