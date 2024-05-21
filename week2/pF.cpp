#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,ret = 0;
    char c1, c2;
    cin >> a >> b;
    for(int i = 0; i<a; ++i){
        for(int j = 0; j<b; ++j){
            cin >> c1 >> c2;
            if (c1  == '#' || c2 == '#'){
                ++ret;
            }
        }
    }
    cout << ret;
}
