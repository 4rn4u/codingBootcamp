#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    char arr1[n1][n2];
    for (int i = 0; i<n1; ++i){
        for (int j = 0; j<n2; ++j){
            cin>>arr1[i][j];
        }
    }
    for(int i = 0; i<n1 - 1; ++i){
        for(int j = 0; j<n2 - 1; ++j){
            if (arr1[i][j] == arr1[i+1][j] && arr1[i][j] == arr1[i][j+1] && arr1[i][j] == arr1[i+1][j+1]){
                cout << "NO ORIGINAL";
                return 0;
            }
        }

    }
    cout << "ORIGINAL";


}
