#include <bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    for(int i = 0; i < cases; ++i){
        int num, col, count = 0;
        cin>>num>>col;
        for(int j = 0; j<num; ++j){
            int a;
            cin>>a;
            if(a == col){
                count++;
            }
        }
        if (count != 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
