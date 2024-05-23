#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    bool a[n1], b[n2];
    char arr[n1][n2];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for(int i = 0; i<n1; ++i){
        for(int j = 0; j<n2; ++j){
            cin >> arr[i][j];
            if (arr[i][j] == '#'){
                a[i] = true;
                b[j] = true;
            }
        }
    }
    for(int i = 0; i<n1; ++i){
        for(int j = 0; j<n2; ++j){
            if (a[i] || b[j]){
                cout << '#';
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
}
