#include<iostream>
#include<vector>
using namespace std;


// return any one of the peak elements in the array

int peakElement(vector<int> v){
    int n = v.size();
    if (n == 1) return 0;
    if (v[0] > v[1]) return 0;
    if (v[n-2] < v[n-1]) return n-1;
    
    int lo = 0;
    int hi = n-1;
    int mid;

    while (lo<=hi){
        mid = lo+(hi-lo)/2;
        if (v[mid] > v[mid-1] && v[mid] > v[mid+1]) return mid;
        else if (v[mid] < v[mid+1]) lo = mid+1;
        else hi = mid-1;
    }

    return -1;
}
using namespace std;
int main(){
    vector<int> v = {-1, 10, -12, 24, 23, -14};
    cout << peakElement(v) << endl;
}