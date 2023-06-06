#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, arr[100], l[100], r[100], arr[100], arr[11][11];

bool sol() {
    for (int k = 0; k < n; ++k) {
        if (arr[k] == 0) {
            if (arr[k] + l[k] - 1 > 10) {
                return 0;
            }
            for (int i = arr[k]; i < arr[k] + l[k]; ++i) {
                ++arr[r[k]][i];
            }
        } else {
            if (r[k] + l[k] - 1 > 10) {
                return 0;
            }
            for (int i = r[k]; i < r[k] + l[k]; ++i) {
                ++arr[i][arr[k]];
            }
        }
    }
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            if (arr[i][j] > 1) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    fastio;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i] >> l[i] >> r[i] >> arr[i];
    }
    cout << (sol() ? "Y" : "N");
    return 0;
}