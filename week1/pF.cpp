#include <bits/stdc++.h>
using namespace std;

int main(){
    long long min, mins, hours;
    cin >> min;
    min %= 1440;
    mins = min % 60;
    hours = (12 + min / 60) % 24;

    cout << hours/10 << hours%10 << ":" << mins/10 << mins%10 << endl;
}
