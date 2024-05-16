#include <bits/stdc++.h>
using namespace std;
int main(){
    int num, tot = 0;
    cin>>num;
    double temp, total = 0;
    for(int i = 0; i<num; ++i){
        cin>>temp;
        if (temp >= 5.0) {
            total += temp;
            tot++;
        }
    }
    cout << fixed << setprecision(2) << total/tot;
}
