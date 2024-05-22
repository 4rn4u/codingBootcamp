#include <bits/stdc++.h>
using namespace std;

int main(){
    int ret = 0;
    char a[16];
    for(int i=0;i<16;i++){
        cin>>a[i];
        a[i] -= '0';
    }
    for(int i = 0; i<16; ++i){
        if (i % 2 == 0){
            a[i] = a[i] * 2;
            if (a[i] > 9){
                a[i] = a[i] - 9;
                ret += a[i];
                continue;
            }
            ret += a[i];
        }
        else {
            ret += a[i];
        }
    }
    if (ret % 10 == 0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
