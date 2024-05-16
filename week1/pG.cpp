#include <bits/stdc++.h>
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;
int main()
{
    long long a,b;
    char c;
    cin >> a >> c >> b;
    switch (c) {
        case '+' : cout << a+b; break;
        case '-' : cout << a-b; break;
        case '*' : cout << a*b; break;
        case '/' :
            if (!b) {cout << "ERROR"; break;}
            cout << fixed << setprecision(2) << (double)a/(double)b; break;
    }
}
