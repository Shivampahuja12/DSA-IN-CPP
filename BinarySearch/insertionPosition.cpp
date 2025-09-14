#include<iostream>
#include<vector>
using namespace std;
int insertionPosition(vector<int> a, int t){
    int lo = 0;
    int hi = a.size()-1;
    int mid;
    int ans = -1;
    while (lo<=hi){
        mid = lo + (hi-lo)/2;
        if (a[mid] == t){
            return mid;
        }
        else if (a[mid] < t){
            ans = mid;
            lo = mid+1;
        }
        else {
            hi = mid -1;
        }
    }
    return ans+1;
}
int main(){
    vector<int> v = {1001};
    int target = 5;
    cout << insertionPosition(v, target);

}