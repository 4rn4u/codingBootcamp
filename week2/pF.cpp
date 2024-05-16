#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,ret;
    char c;
    cin >> a >> b;
    for(int i = 0; i<a; ++i){
        for(int j = 0; j<b; ++j){
            cin >> c;
            if(c == '#'){
                ret++;
            }
        }
    }
    cout << ret;
}
