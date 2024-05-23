#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1][n2], arr2[n2][n1];
    for (int i = 0; i<n1; ++i){
        for (int j = 0; j<n2; ++j){
            cin>>arr1[i][j];
        }
    }
    for(int i = 0; i<n2; ++i){
        for(int j = 0; j<n1; ++j){
            arr2[j][i] = arr1[i][j];
            cout << arr2[j][i] << " ";
        }
        cout << endl;
    }


}
