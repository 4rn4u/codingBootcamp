#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2; cin>>n1>>n2;
    int arr1[n1];
    for (int i = 0; i < n1; i++) cin>>arr1[i];
    sort(arr1,arr1+n1);
    cout << arr1[n2 - 1] << " " << arr1[n2];
}
