#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &v, int lo, int mid, int hi){
    vector<int> temp;
    int left = lo;
    int right = mid+1;
    while (left <= mid && right <= hi){
        if (v[left] <= v[right]){
            temp.push_back(v[left]);
            left++;
        }
        else {
            temp.push_back(v[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(v[left]);
        left++;
    }

    while(right <= hi){
        temp.push_back(v[right]);
        right++;
    }


    for (int i=lo; i<=hi; i++){
        v[i] = temp[i-lo];
    }
}
void mergeSort(vector<int> &v, int lo, int hi){
    if (lo == hi) return;
    int mid = lo+(hi-lo)/2;
    mergeSort(v, lo, mid);
    mergeSort(v, mid+1, hi);
    merge(v, lo, mid, hi);
}
int main(){
    vector<int> v = {8,4,3,23,7,55,23,90,12,1,30};
    mergeSort(v, 0, v.size()-1);
    for (int i: v){
        cout << i << " ";
    }
}