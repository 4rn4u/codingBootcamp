#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
    int n1; cin >> n1;
    int max = 0, min = 0;
    int arr[n1];

    for (int i = 0; i < n1; i++){
        cin >> arr[i];
        if (arr[i] > max) max = arr[i];
        else if (arr[i] < min) min = arr[i];
    }
    int auxarr[max - min - 1];
    memset(auxarr, 0 , sizeof(auxarr));
    for (int i = 0; i < max - min - 1; i++){
        auxarr[arr[i] - min]++;
    }
    for (int i = 0; i < min-max+1; i++){
        cout << auxarr[i] << " ";
    }
}
