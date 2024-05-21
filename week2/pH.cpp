#include <bits/stdc++.h>
using namespace std;

int main(){
    int t1, t2, prev, n, p1, p2;
    cin >> t1 >> t2;
    int a[t1], b[t2];
    for(int i = 0; i<t1; ++i){
        cin >> a[i];
    }
    for(int i = 0; i<t2; ++i){
        cin >> b[i];
    }
    while(p1 <= t1 && p2 <= t2){
        if (a[p1] == b[p2]){
            prev = a[p1];
            cout << prev << ' ';
            while(p1 < t1 && a[p1] == prev) ++p1;
            while(p2 < t2 && b[p2] == prev) ++p2;
        } else if (a[p1] < b[p2]){
            ++p1;
        } else {
            ++p2;
        }
    }
}
