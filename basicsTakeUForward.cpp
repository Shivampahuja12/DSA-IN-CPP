#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int largestElement(vector<int> &nums){
    int max = INT_MIN;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] > max){
            max = nums[i];
        }
    }
    return max;
}
bool arrayIsSorted(vector<int> &a){
    for (int i=1; i<a.size(); i++){
        if (a[i-1] <= a[i]) {
            continue;
        }
        else {
            return false;
        }
    }
    return true;
}
int secondLargest(vector<int> &a){
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i=0; i<a.size(); i++){
        if (a[i] > max){
            max = a[i];
        }
    }

    for (int i=0; i<a.size(); i++){
        if ((a[i] > smax) && a[i]!=max){
            smax = a[i];
        }
    }
    return smax;
}
int linearSearch(vector<int> &a, int target){
    for (int i=0; i<a.size(); i++){
        if (a[i]==target){
            return i;
        }
    }
    return -1;
}
void leftRotateByOne(vector<int> &a){
    reverse(a.begin(), a.end());
    reverse(a.begin(), a.end()-1);
    reverse(a.end()-1, a.end());
}
/* int removeDuplicate(vector<int> a){
    vector<int> v;
    for (int i=0; i<a.size(); i++){
        for (int j=i+1; j<a.size(); j++){

        }
    }
} */
void reverseString(string &s){
    int i=0;
    int j = s.size()-1;

    while (i<j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << s << endl;
}
void reverseForloop(string &s){
    for (int i=0, j=s.size()-1; i<j; i++, j--){
        swap(s[i], s[j]);
    }
}
int countDigits(int n){
    int count = 0;
    for (int i=n; i>0; i=i/10){
        count++;
    }
    return count;

    /* while (n>0){
        n/=10;
        count++;
    }
    return count; */
}
int reverseNumber(int n){
    n = abs(n);
    int rev = 0;
    for (int i=n; i>0; i=i/10){
        rev = rev*10 + i%10;
    }
    return rev;
}
void reverseInGroups(vector<int> &a, int n){
    int i;
    for (i=0; i<a.size(); i=i+n){
        if (i+n < a.size()){
            cout << i << " " << i+n<< endl;
            reverse(a.begin()+i, a.begin()+i+n);
        }
    }
    i= i-n;
    reverse(a.begin()+i, a.end());
}
vector<int> plusOne(vector<int> &a){
    // not capable for large vectors
    vector<int> v = a;
    vector<int> last;
    int size = v.size();
    long long int num = 0;
    for (int i=0; i<size; i++){
        num = num * 10 + v[i];
    }
    cout << num << endl;
    cout << ++num << endl;
    long long int i;
    for (i=num; i>0; i=i/10){
        last.push_back(i%10);
    }
    return last;

}
vector<int> makeVec(int n) {
        vector<int> v;
        for (int i = n; i > 0; i = i / 10) {
            v.push_back(i % 10);
        }
        return v;
    }
long long int digitSum(vector<int> v) {
        long long int sum = 0;

        for (int i = 0; i < v.size(); i++) {
            long long int sq = v[i] * v[i];
            sum = sum + sq;
        }
        return sum;
    }
bool isHappy(int n) {

        vector<int> v = makeVec(n);
        long long int func = digitSum(v);

        // while (func < INT_MAX) {
        //     if (func == 1) return true;
        //     vector<int> kuchBhi = makeVec(func);
        //     func = digitSum(kuchBhi);
        // }
        // return false;

        while (func != 1 && func != 4) {  // 4 is the entry point of the unhappy cycle
            vector<int> kuchBhi = makeVec(func);
            func = digitSum(kuchBhi);
        }
        return func == 1;
    }
vector<int> findDisappearedNumbers(vector<int>& nums) {
    
}


int main()
{

    /* // largest element
    vector<int> v = {12, 67, -8, 34, 0, 199, 90};
    cout << largestElement(v) << endl; */


    /* // array is sorted or not
    vector<int> v = {1,2,3,2,5,6};
    cout << arrayIsSorted(v) << endl; */


    /* // second largest element in the array
    vector<int> v = {-1,-2,-3,-4};
    cout << secondLargest(v) << endl; */


    /* // linear search
    vector<int> v = {1,2,4,5,8,34,0};
    int target = 10;
    cout << linearSearch(v, target) << endl; */


    /* // Left Rotate the Array by One
    vector<int> v = {1,2,3,4,5};
    leftRotateByOne(v);
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    } */


    // remove duplicate elements from an array
    // vector<int> v = {1,2,3,4,4,4,5,6,6,7};
    // cout << removeDuplicate(v) << endl;


    /*// reverse a string
    string s =  "Leetcode";
    // reverseString(s);   // pass by value (default)
    // reverseForloop(s);   
    cout << s << endl; */


    /* // count digits
    int num = 12345;
    cout << countDigits(num) << endl; */


    /* // reverse a number
    int num = -234;
    if (num<=0) cout << reverseNumber(num) * -1 << endl;
    else cout << reverseNumber(num) << endl; */ 


    /* // reverseInGroups
    vector<int> v = {1,2};
    int size = 3;
    reverseInGroups(v, size);
    for (int i: v){
        cout << i << " ";
    } */
    

    /* // plus one
    vector<int> a = {9,8,7,6,5,4,3,2,1,0};
    vector<int> v = plusOne(a);
    reverse(v.begin(), v.end());
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    } */
     

    /* // Number is happy or not
    int n = 4;
    cout << isHappy(n) << endl; */


    // find-all-numbers-disappeared-in-an-array
    vector<int> v = {4,3,2,7,8,2,3,1};
    vector<int> a = findDisappearedNumbers(v);
    for (int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }


}