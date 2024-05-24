#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1; cin >> n1;
    int count = n1;
    int arr[n1];
    for (int i = 0; i < n1; i++){
        cin >> arr[i];
    }
    while(count){
        for(int i = 0; i<n1-1; ++i){
            if(arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
        count--;
    }
    for (int i = 0; i < n1; i++){
        cout << arr[i] << " ";
    }
}
