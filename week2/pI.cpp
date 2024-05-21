#include <bits/stdc++.h>
using namespace std;

int main(){
    int ret;
    int a[16];
    for(int i=0;i<15;i++){
        cin>>a[i];
    }
    for(int i = 0; i<15; ++i){
        if (i % 2 == 0){
            a[i] = a[i] * 2;
            if (a[i] > 9){
                a[i] = a[i] - 9;
            }
            ret += a[i];
        }
        ret += a[i];
    }
    if (ret % 10 == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
