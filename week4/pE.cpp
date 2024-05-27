#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, min = 0; cin>>n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++) cin>>arr1[i];
    sort(arr1,arr1+n1);
    for (int i = 0; i < n1 - 1; i++){
        if (i == 0 && arr1[i] != 0){
            cout << 0;
            return 0;
        }
        if (arr1[i] != min){
            cout << min;
            return 0;
        }
        if (arr1[i] != min){
            cout << min;
            return 0;
        }
        if (arr1[i] == min && arr1[i] == arr1[i+1]) continue;
        if (arr1[i] == min && arr1[i] != arr1[i+1]){
            min++;
            continue;
        }

    }
}
