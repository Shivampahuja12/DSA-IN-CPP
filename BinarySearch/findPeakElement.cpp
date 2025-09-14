#include<iostream>
#include<vector>
using namespace std;
int brutePeak(vector<int> a){
    if (a.size()==1) return 0;
    if (a[0] > a[1]) return 0;
    if (a[a.size()-1] > a[a.size()-2]) return a.size()-1;
    int i=1;
    while (i<a.size()-1){
        if (a[i] > a[i-1] && a[i] > a[i+1]){
            return i;
        }
        i++;
    }
    return -1;
}
int BSpeak(vector<int> a){

}
int main(){
    vector<int> v = {1,2,1,3,5,6,4};
    // cout << brutePeak(v);
    cout << BSpeak(v);
}