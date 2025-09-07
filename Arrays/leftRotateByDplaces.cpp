#include<iostream>
#include<vector>
using namespace std;
void bruteLeftRotateByD(vector<int>& v, int d){
    d = d % v.size();
    int n = v.size();
    vector<int> temp(d);

    for (int i=0; i<d; i++){
        temp[i] = v[i];
    }

    for (int i=d; i<n; i++){
        v[i-d] = v[i];
    }

    for (int i=n-d; i<n; i++){
        v[i] = temp[i-(n-d)];
    }

    // for(int i: temp){
    //     cout << i << " ";
    // }
}

int main(){
    vector<int> v = {1,2,3,4,5,6};
    int d;
    cout << "Enter how many times you want to rotate the array: ";
    cin >> d;
    bruteLeftRotateByD(v, d);
    for (int i: v){
        cout << i << " ";
    }

}