#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int t1, t2, length, unique, n1, n2;
    cin >> t1 >> t2;
    length = max(t1,t2);
    vector<int> a1;
    if (t1 == 0){
        cout << 0;
    } else {
        cin >> n1;
        unique = n1;
        for(int i = 1; i<t1; ++i){
            cin >> n2;
            if (unique != n2){
                a1.push_back(unique);
                unique = n2;
            }
        }
    }
    if (t2 == 0){
        cout << 0;
    } else {
        for(int i = 0; i<t2; ++i){
            cin >> n2;
            unique = n2;
        }
    }
    for(int i = 0; i<length; ++i){
        cout << a1[i] << " ";
    }
}
