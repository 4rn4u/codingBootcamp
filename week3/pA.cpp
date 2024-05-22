#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    bool c = false;
    cin >> n;
    char a[n][n];
    char b[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
            if (a[i][j] == '#' || b[i][j] == '#'){
                c = true;
            }
            if (a[i][j] != b[i][j]){
                count++;
            }
        }
    }
    if(c){
        if  (count == 0){
            cout << "HA HABIDO SUERTE";
        } else if (count != 0){
            cout << "TRAGEDIA";
        }
    } else {
        cout << "NO LLEVABA MERMELADA";
    }
}
