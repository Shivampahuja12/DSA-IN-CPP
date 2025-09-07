#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void optimalMoveZeros(vector<int> v){
    int j=-1;

    for(int i=0; i<v.size(); i++){
        if (v[i] == 0){
            j = i;
            break;
        }
    }

    for (int i=j+1; i<v.size(); i++){
        if (v[i] != 0){
            swap(v[i], v[j]);
            j++;
        }
    }

    for (int i: v){
        cout << i << " ";
    }
}
void bruteMoveZeros(vector<int> v){

    // TC - O(3N) ~ O(N), N - size of the vector;
    // SC - O(N)

    int n = v.size();
    vector<int> temp;
    int cntZero=0;
    int cntNonZ=0;
    for(int i=0; i<v.size(); i++){
        if (v[i] == 0){
            cntZero++;
        }
        if (v[i] != 0){
            temp.push_back(v[i]);
        }
    }

    for (int i=0; i<temp.size(); i++){
        v[i] = temp[i];
    }

    for (int i=temp.size(); i<n; i++){
        v[i] = 0;
    }
    
    for (int i: v){
        cout << i << " ";
    }

}
int main(){
    vector<int> v = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    // vector<int> v = {0, 0};
    // bruteMoveZeros(v);
    optimalMoveZeros(v);
}