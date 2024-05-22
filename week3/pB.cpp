#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int totalRows = 4 * n + 1;
    int totalCols = 4 * n + 1;
    vector<vector<char> > grid(totalRows, vector<char>(totalCols, ' '));
    for (int i = 0; i < totalRows; ++i) {
        for (int j = 0; j < totalCols; ++j) {
            if (i % 4 == 0 && j % 4 == 0) {
                grid[i][j] = '+';
            } else if (i % 4 == 0) {
                grid[i][j] = '-';
            } else if (j % 4 == 0) {
                grid[i][j] = '|';
            }
        }
    }
    for (int i = 0; i < totalRows; ++i) {
        for (int j = 0; j < totalCols; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}
