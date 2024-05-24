#include <bits/stdc++.h>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int diff = INT_MAX;
    for (int i = 0; i < n-1; i++){
        if (abs(arr[i]-arr[i+1]) < diff){
            diff = abs(arr[i] - arr[i+1]);
        }
    }
    cout << diff << '\n';
}
