#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string w1, w2;
    cin >> w1 >> w2;
    if (w1.length() != w2.length()){
        cout << "NO" << endl;
        return 0;
    }
    char* arr1 = new char[w1.length() + 1];
    char* arr2 = new char[w2.length() + 1];
    strcpy(arr1, w1.c_str());
    strcpy(arr2, w2.c_str());
    sort(arr1, arr1 + w1.length());
    sort(arr2, arr2 + w2.length());
    for (int i = 0; i < w1.length(); i++){
        if (arr1[i] != arr2[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
