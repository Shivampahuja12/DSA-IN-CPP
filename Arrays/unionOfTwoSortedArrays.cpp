#include<iostream>
#include<vector>
#include<set>
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

vector<int> bruteUnionOfTwoArrays(vector<int> a, vector<int> b){
    /* 
        Time complexity: O(n1 + n2)
        Space complexity: O(n1 + n2)
    */

    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for (int i=0; i<n1; i++){
        st.insert(a[i]);
    }
    for (int i=0; i<n2; i++){
        st.insert(b[i]);
    }

    vector<int> temp;
    for (auto it: st){
        temp.push_back(it);
    }
    return temp;
}

vector<int> optimalUnionOfTwoArrays(vector<int> a, vector<int> b){

    /* 
        TC - O(n1 + n2)
        SC - O(n1 + n2) only for return not to do any operation
    */
    int n1 = a.size();
    int n2 = b.size();
    int i=0;
    int j=0;

    vector<int> unionArr;
    while (i<n1 && j<n2){
        if (a[i] <= b[j]){
            if (unionArr.size() == 0 || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
            }
            i++;
        }
        else {
            if (unionArr.size() == 0 || unionArr.back() != b[j]){
            unionArr.push_back(b[j]);
            }
            j++;
        }
        
    }
    
    while (j<n2){
        if (unionArr.size() == 0 || unionArr.back() != b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
    }
    
    while (i<n1){
        if (unionArr.size() == 0 || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
    }


    return unionArr;
}


int main(){
    vector<int> a = {1, 3, 4,5,6,9};
    vector<int> b = {2,3,11};

    // vector<int> ans = unionNoDup(a, b);
    // sort(ans.begin(), ans.end());

    vector<int> ans1 = bruteUnionOfTwoArrays(a,b);
    vector<int> ans2 = optimalUnionOfTwoArrays(a,b);

    for (int i: ans2) {
        cout << i << " ";
    }
}