#include <iostream>
#include <vector>

using namespace std;
/* int peakElement(vector<int> &arr){


    // code here
    int lo = 0;
    int hi = arr.size();
    int mid;
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1] && arr[mid] >= lo && arr[mid] <= hi)
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            lo = mid + 1;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            hi = mid;
        }
    }
    return false;
}
vector<int> find(vector<int>& arr, int x) {
        // code here
        int lo = 0;
        int hi = arr.size()-1;
        int mid;
        int ans1 = -1, ans2 = -1;
        vector<int> v;
        // first occurance
        while (lo<=hi){
            mid = lo+(hi-lo)/2;
            if (arr[mid] == x){
                ans1 = mid;
                hi = mid-1;
            }
            else if (arr[mid] < x){
                lo = mid+1;
            }
            else if (arr[mid] > x){
                hi = mid-1;
            }
        }
        v.push_back(ans1);



        // last occurance
        lo = 0;
        hi = arr.size()-1;
        while (lo<=hi){
            mid = lo+(hi-lo)/2;
            if (arr[mid] == x){
                ans2 = mid;
                lo = mid+1;
            }
            else if (arr[mid] < x){
                lo = mid+1;
            }
            else if (arr[mid] > x){
                hi = mid-1;
            }
        }
        v.push_back(ans2);
        return v;
    }
int main(){
    vector<int> v = {1, 3 ,5 ,5 ,5 ,5 ,67 ,123 ,125};
    vector<int> ans = find(v, 5);
    for (int i : ans){
        cout << i << " ";
    }
} */

int &largest(int arr[], int size)
{

    // Write logic to return reference to largest element
    int max =INT_MIN;
    int index = 0;
    for (int i=0; i<size; i++){
        if (max < arr[i]){
            max = arr[i];
            index = i;
        }
    }
    return arr[index];
}
int main()
{
    int data[5] = {4, 1, 7, 3, 2};
    cout << "Before: ";
    for (int i = 0; i < 5; i++)
        cout << data[i] << " ";
    cout << endl;
    largest(data, 5) = 0;
    cout << "After: ";
    for (int i = 0; i < 5; i++)
        cout << data[i] << " ";
    cout << endl;
    return 0;
}