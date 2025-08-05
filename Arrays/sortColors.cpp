#include<iostream>
#include<vector>
using namespace std;
void bruteSortColors(vector<int> &v){
    /* 
    // 1
    int m=0;
    vector<int> a = v;
    for (int i=0; i<a.size(); i++){
        if (a[i] == 0) v[m++] = 0;
    }
    for (int i=0; i<a.size(); i++){
        if (a[i] == 1) v[m++] = 1;
    }
    for (int i=0; i<a.size(); i++){
        if (a[i] == 2) v[m++] = 2;
    } */


    // 2 - counting

    int cntZero = 0;
    int cntOne = 0;
    int cntTwo = 0;
    for (int i=0; i<v.size(); i++){
        if (v[i] == 0) cntZero++;
        else if (v[i] == 1) cntOne++;
        else if (v[i] == 2) cntTwo++;
    }
    int m = 0;
    for (int i=0; i<cntZero; i++) {v[m++] = 0;}
    for (int i=0; i<cntOne; i++) {v[m++] = 1;}
    for (int i=0; i<cntTwo; i++) {v[m++] = 2;}

}
void efficientSortColors(vector<int> &nums){
    int lo = 0;
    int mid = 0;
    int hi = nums.size()-1;
    while (mid<=hi){
        if (nums[mid] == 0){
            swap(nums[lo], nums[mid]);
            lo++, mid++;
        }
        else if (nums[mid] == 1){
            mid++;
        }
        else {
            swap(nums[mid], nums[hi]);
            hi--;
        }
    }
}
int main(){

    vector<int> v = {2,0,2,1,1,0,2,2,1,1,2,1,1,0,0,0};
    // bruteSortColors(v);
    efficientSortColors(v);
    for (int i: v){
        cout << i << " ";
    }
}