#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
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


    IN ALGORITHM HEADER FILE
    THERE ARE BUILT-IN FUNCTIONS OF BOTH
    1. FIRST OCCURANCE - LOWER BOUND
    2. LAST OCCURANCE - UPPER BOUND


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
int findLastMissing(vector<int> a){
    int lo = 0;
    int hi = a.size()-1;
    int mid;
    int ans;
    while (lo<=hi){
        mid = lo + (hi-lo)/2;
        if (a[mid] == mid+1){
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
            ans = a[mid];
        }
    }
    return ans-1;
}
int findFirstMissing(vector<int> a){
    int lo = 0;
    int hi = a.size()-1;
    int mid;
    int ans;
    while (lo<=hi){
        mid = lo + (hi-lo)/2;
        if (a[mid] == mid+1){
            lo = mid + 1;
            ans = a[mid];
        }
        else {
            hi = mid - 1;
        }
    }
    return ans+1;
}
int missingNumber(vector<int> a){
    int lo = 0;
    int hi = a.size()-1;
    int mid;
    int ans;
    while (lo<=hi){
        mid = lo + (hi-lo)/2;
        if (a[mid] == mid){
            lo = mid + 1;
            ans = a[mid];
        }
        else {
            hi = mid - 1;
        }
    }
    return ans+1;
}
int sqRootBinarySearch(int n){
    vector<int> v((n/2)+1);
    iota(v.begin(), v.end(), 0);
    for (int i: v){
        cout << i << " ";
    }

    cout << endl;

    int lo = 0;
    int hi = v.size()-1;

    int mid;
    int ans = -1;
    while (lo<=hi){
        mid = lo + (hi-lo)/2;
        if (v[mid] * v[mid] > n){
            hi = mid-1;
        }
        else {
            ans = v[mid];
            lo = mid + 1;
        }
    }
    return ans;

}
double sqrtPrecision(int n, int prec){
    vector<int> v((n/2)+1);
    iota(v.begin(), v.end(), 0);
    for (int i: v){
        cout << i << " ";
    }

    cout << endl;

    int lo = 0;
    int hi = v.size()-1;

    int mid;
    int ans = -1;
    while (lo<=hi){
        mid = lo + (hi-lo)/2;
        if (v[mid] * v[mid] > n){
            hi = mid-1;
        }
        else {
            ans = v[mid];
            lo = mid + 1;
        }
    }


    double step = 0.1;
    double finalAns = ans;
    for (int i=0; i<prec; i++){
        for (double j=ans; j*j <= n; j=j+step){
            finalAns = j;
        }
        step = step/10; 
    }

    return finalAns;

}
bool searchIn2D(vector<vector<int>> a, int target){

    // a.size - number of rows
    // a[0].size - number of columns
    int col = a[0].size();
    int row = a.size();
    int lo = 0;
    int hi = row * col - 1;
    int mid;
    int ans = -1;
    while (lo<=hi){
        mid = lo + (hi-lo)/2;  
        int rowIndex = mid/col;
        int colIndex = mid % col;
        if (a[rowIndex][colIndex] == target){
            cout << "Element found at " << rowIndex << " " << colIndex << endl;
            return true;
        } 
        else if (a[rowIndex][colIndex] > target) hi = mid -1;
        else if (a[rowIndex][colIndex] < target) lo = mid+1;
    }
    return false;
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


    /* vector <int> v = {1,3,4,4,4,4,4,4,4,4,4,4,4,6,6,7, 9};
    int target = 6;

    int first = firstOccurance(v, target);

    int last = lastOccurance(v, target);
    
    if (first == -1) cout << "(First Occurance) Element not found" << endl;
    else cout << "(First Occurance) Element found at index " << first << endl;

    if (last == -1) cout << "(Last Occurance) Element not found" << endl;
    else cout << "(Last Occurance) Element found at index " << last << endl;

    if (first == -1 && last == -1) cout << "Total occurance of " << target << " is " << 0 << endl;
    else cout << "Total Occurances of " << target << " are " << last - first + 1 << endl; */


    /* // BUILT-IN (FIRST OCCURANCE AND LAST OCCURANCE)
    auto first = lower_bound (v.begin(), v.end(), target); 
    auto last = upper_bound (v.begin(), v.end(), target);

    if (first-v.begin() == -1) cout << "(First Occurance) Element not found" << endl;
    else cout << "(First Occurance) Element found at index " << first-v.begin() << endl;

    if (last-v.begin() == -1) cout << "(Last Occurance) Element not found" << endl;
    else cout << "(Last Occurance) Element found at index " << last-v.begin() << endl; */



    /* // FIND MISSING ELEMENT
    vector<int> v = {1,2,3,5};
    // cout << "Last Missing element is: " << findLastMissing(v) << endl;  // wrong output
    cout << "First Missing element is: " << findFirstMissing(v) << endl;
    return 0; */


    
    /* // square root using binary search
    int num = 3;
    cout << sqRootBinarySearch(num) << endl; */


    /* // square root with precision (upto 5 decimal points)
    int num = 3;
    int precision = 5;
    cout << sqrtPrecision(num, precision) << endl; */


    // binary search on 2-D matrix
    // in 2d matrix, s=0, e = r*c -1
    // if we know i, j then we can find the index of the element where it is stored linearly -> c * i+j;
    // if we know the index of the element and then we have to find the row number and column number then we use rowIndex = mid/cols, colIndex = mid % cols;
    vector<vector<int>> v = {{1,2,3,4}, {5,6,7,8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int target = 12;
    cout << searchIn2D(v, target) << endl;


    // pivot element
    // search in rotated sorted array
    // search in a nearly sorted array in log time
    // division of 2 no. using binary search
    // find odd occuring element using binary search    
} 