#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, mx=INT32_MIN, mn=INT32_MAX;
    cin>>n;
    while(n--){
        cin >> a;
        mx = max(mx, a);
        mn = min(mn, a);
    }
    cout << mn << ' ' << mx;
}
