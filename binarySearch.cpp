#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/* 
    BINARY SEARCH ALGORITHM
    STEPS: 
    1. lo/start - 0th index / least possible index
    2. hi/end - (n-1)th index/ last possible index
    3. mid -> mid = (lo + hi)/2 OR lo + (hi-lo)/2 OR (mid = lo/2 + hi/2) issue when both the numbers are odd.
    4. if target is greater than mid then search in right and take lo to (mid+1)th index
    if target is less than mid then search in left and take hi to (mid-1)th index
    return middle index if element is found

    Q. WHAT IS BINARY SEARCH ?
    -> BINARY SEARCH IS AN OPTIMISED AND FAST SEARCHING ALGORITHM WITH SEARCH THE ELEMENT IN log(n) COMPARISONS (WORKS ON SORTED ARRAY ).
*/

int binarySearch(vector<int> a, int target){
    int lo = 0;
    int hi = a.size()-1;
    int mid;
    while (lo<=hi){
        // to find middle index
        mid = lo + (hi-lo)/2;
    
        // return middle index if element is found
        if (a[mid] == target){
            return mid;
        } 

        // if target is greater than mid then search in right and take lo to (mid+1)th index
        else if (a[mid] < target) lo = mid + 1;

        // if target is less than mid then search in left and take hi to (mid-1)th index
        else if (a[mid] > target) hi = mid - 1;
    }

    //  if element is not found 
    return -1;
}
int firstOccurance(vector<int> a, int target){
    int lo = 0;
    int hi = a.size()-1;
    int mid;
    int ans = -1;
    while (lo<=hi){
        mid = lo + (hi - lo)/2;
        if (target == a[mid]) {
            ans = mid;
            hi = mid - 1;
        }
        else if(a[mid] < target) lo = mid+1;
        else if(a[mid] > target) hi = mid-1;
    }
    return ans;
}
int lastOccurance(vector<int> a, int target){
    int lo = 0;
    int hi = a.size()-1;
    int mid;
    int ans = -1;
    while (lo<=hi){
        mid = lo + (hi-lo)/2;
        if (a[mid] == target) {
            ans = mid;
            lo = mid + 1;
        }
        else if (a[mid] < target) lo = mid + 1;
        else if (a[mid] > target) hi = mid - 1; 
    }
    return ans;
}

int main(){

    /* vector<int> v = {2,4,6,8,10,12,16};
    int a[] = {1,2,3,4,5};
    int target = 11;

    int index = binarySearch(v, target);
    if (index == -1) cout << "Target not found" << endl;
    else cout << "Target Found at " << index << "th index" << endl; */

    /* // ADD ALGORITHM HEADER FILE. 
    // using binary search STL function in vectors
    if (binary_search(v.begin(), v.end(), 3)) cout << "found!\n"; 
    else cout << "not found.\n";
    
    // using binary search STL function in arrays.
    if (binary_search(a, a+5, 3)) cout << "found!\n"; 
    else cout << "not found.\n"; */


    /* vector <int> v = {1,3,4,4,4,4,4,6,6,7, 9};
    int target = 4;

    int first = firstOccurance(v, target);

    int last = lastOccurance(v, target);

    if (first == -1) cout << "(First Occurance) Element not found" << endl;
    else cout << "(First Occurance) Element found at index " << first << endl;

    if (last == -1) cout << "(Last Occurance) Element not found" << endl;
    else cout << "(Last Occurance) Element found at index " << last << endl; */
    
    return 0;
} 