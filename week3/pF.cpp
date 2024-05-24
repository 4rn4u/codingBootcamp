#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int arr[n2][n1];
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            cin >> arr[j][n1-i-1];
        }
    }
    for(int i = 0; i < n2; i++){
        for(int j = 0; j < n1; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}
