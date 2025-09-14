#include <iostream>
#include <vector>
using namespace std;
int findCeil(vector<int> &arr, int x)
{

    /*
    // brute
    int i = 0;
    int n = arr.size();
    while (i<n){
        if (arr[i] >= x){
            return i;
        }
        i++;
    }
    return -1; */

    // binary search
    int n = arr.size();
    int lo = 0;
    int hi = n - 1;
    int ans = -1;
    int mid;
    while (lo <= hi){
        mid = lo + (hi - lo) / 2;
        if (arr[mid] >= x){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> v = {1, 1, 2, 8, 10, 10, 12, 19};
    int x = 9;
    cout << findCeil(v,x);
}