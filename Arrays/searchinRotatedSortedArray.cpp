#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> v, int tar){
    for (int i=0; i<v.size(); i++){
        if (tar == v[i]){
            return i;
        }
    }
    return -1;
}
int binarySearch(vector<int> a, int tar){
    int lo = 0, hi = a.size()-1;
    int mid;
    while (lo <= hi){
        mid = lo + (hi-lo)/2;
        if (tar == a[mid]){
            return mid;
        }

        if (a[mid] >= a[lo]){
            if (tar >= a[lo] && tar < a[mid]){
                hi = mid - 1;
            }
            else {
                lo = mid+1;
            }
        }
        else {
            if (tar > a[mid] && tar <= a[hi]){
                lo = mid +1;
            }
            else {
                hi = mid - 1;
            }
        }

    }
    return -1;

}

int main(){
    vector<int> v = {7,8,9,1,2,3,4,5,6};
    int target = 8;
    /* int res = linearSearch(v, target);
    if (res==-1) cout << "Element not found" << endl;
    else cout << "Element found at position: " << res << endl; */

    int res = binarySearch(v, target);
    if (res == -1) cout << "Element not found" << endl;
    else cout << "Element found at position: " << res << endl;
}