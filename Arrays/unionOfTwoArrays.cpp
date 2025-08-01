#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> unionNoDup(vector<int> &a, vector<int> &b){
    vector<int> ans;
    for (int i=0; i<a.size(); i++){
        ans.push_back(a[i]);
    }
    for (int i=0; i<b.size(); i++){
        ans.push_back(b[i]);
    }
    return ans;
}

vector<int> unionwithDup(vector<int> &a, vector<int> &b){
    
}

int main(){
    vector<int> a = {1,4,5,6,9};
    vector<int> b = {2,3,11};

    vector<int> ans = unionNoDup(a, b);
    sort(ans.begin(), ans.end());
    for (int i: ans) {
        cout << i << " ";
    }
}