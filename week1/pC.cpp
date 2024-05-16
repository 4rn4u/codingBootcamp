#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isVowel(char c){
    c |= 32;
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    int n, temp;
    cin >> n;
    for (int i = 0; i<n; ++i){
        cin >> temp;
        cout << temp*2 << ' ';
    }
    cout << endl;
    char s;
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> s;
        cout << (char)(s&(~32)) << ' ';
    }
    cout << endl;

    string c;
    cin >> n;
    for(int i = 0; i<n; ++i){
        cin >> c;
        for(int j = 0; j<c.size(); j++){
            if(isVowel(c[j])){
                c[j] = '0';
            }
            cout << c[j];
        }
        cout << ' ';
    }
    cout << endl;
}
