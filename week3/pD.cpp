#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int columnas[n2];
    memset(columnas, 0, sizeof(columnas));
    int s, count, ret = 0;
    for (int i = 0; i<n1; ++i){
        count=0;
        for (int j = 0; j<n2; ++j){
            cin >> s;
            count += s;
            columnas[j] += s;
        }
        ret = max(ret, count);
    }
    for (int i = 0; i<n2; ++i){
        ret = max(ret, columnas[i]);
    }
    cout << ret;
}
