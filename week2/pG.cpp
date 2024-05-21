#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, n2;
    cin >> n;
    while (cin>>n2){
        if(n2>n) {
            cout << "S";
            n = n2;
        }
        else if (n2 == n){
            cout << "I";
            n = n2;
        }
        else {
            cout << "B";
            n = n2;
        }

    }
}
