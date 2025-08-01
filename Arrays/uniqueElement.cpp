#include<iostream>
#include<vector>
using namespace std;
/* 
    here in the vector every element occurs twice except one
*/

// approach 1 - xor(best approach)
int xoro(vector<int> &v){    
    int xoro = 0;
    for (int i=0; i<v.size(); i++){
        xoro ^= v[i];
    }
    return xoro;

}


// approach 2 - hash
int hashApproach(vector<int> &v){
    
    vector<int> v2(v.size(), 0);
    for (int i=0; i<v.size(); i++){
        v2[v[i]]++;
    }
    for (int i=0; i<v2.size(); i++){
        if (v2[i] == 1) {
            return i;
        }
    }
    return -1;
}


// approach 3 - nested loop
int nestedLoop(vector<int> &v){
    
    for (int i=0; i<v.size(); i++){
        int count = 0;
        for (int j=0; j<v.size(); j++){
            if (v[i] == v[j]){
                count++;
            }
        }
        if (count == 1) return v[i];
    }

    return -1;
}


int main(){
    vector<int> v = {1,2,4,2,1,3,6,5,5,6,3};
    // cout << xoro(v) << endl;
    // cout << hashApproach(v) << endl;
    // cout << nestedLoop(v) << endl;
    return 0;
}