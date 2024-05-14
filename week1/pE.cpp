#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b ,c, ans;
    cin >>a >>b >>c;
    ans = a*5 + b*7 + c*13;
    if (c) ans -= 13;
    else if (b) ans -= 7;
    else if (a) ans -= 5;
    cout << ans << endl;
}
