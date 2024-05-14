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
    int temp;
    for(int z = 0; z<num; ++z){
        if (z%2 != 0){
            temp = arr1[z];
            arr1[z] = arr2[z];
            arr2[z] = temp;
        }
    }
    for(int i = 0; i<num; ++i){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int j = 0; j<num; ++j){
        cout << arr2[j] << " ";
    }
    cout << endl;
}
