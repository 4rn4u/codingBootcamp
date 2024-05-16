#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int arr1[num];
    int arr2[num];
    int n;
    for(int i = 0; i<num; ++i){
        cin >> n;
        arr1[i] = n;
    }
    for(int j = 0; j<num; ++j){
        cin >> n;
        arr2[j] = n;
    }
    for(int j = 0; j<num; ++j){
        cout << arr1[j] + arr2[j] << " ";
    }
}
