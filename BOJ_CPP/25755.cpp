#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[21][21], arr2[21][21];

int main() {
    fastio;
    char c;
    int n;
    cin >> c >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> arr1[i][j];
        }
    }
    if (c == 'D' || c == 'U') {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                int idx1 = n + 1 - i, idx2 = j;
                if (arr1[i][j] == 1) {
                    arr2[idx1][idx2] = 1;
                } else if (arr1[i][j] == 2) {
                    arr2[idx1][idx2] = 5;
                } else if (arr1[i][j] == 5) {
                    arr2[idx1][idx2] = 2;
                } else if (arr1[i][j] == 8) {
                    arr2[idx1][idx2] = 8;
                }
            }
        }
    } else {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                int idx1 = i, idx2 = n + 1 - j;
                if (arr1[i][j] == 1) {
                    arr2[idx1][idx2] = 1;
                } else if (arr1[i][j] == 2) {
                    arr2[idx1][idx2] = 5;
                } else if (arr1[i][j] == 5) {
                    arr2[idx1][idx2] = 2;
                } else if (arr1[i][j] == 8) {
                    arr2[idx1][idx2] = 8;
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (arr2[i][j]) {
                cout << arr2[i][j];
            } else {
                cout << "?";
            }
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
​