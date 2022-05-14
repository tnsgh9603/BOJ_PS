#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

long long n, b;
int arr[5][5], ans[5][5], temp[5][5];

void sol(int v1[5][5], int v2[5][5]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            temp[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                temp[i][j] += (v1[i][k] * v2[k][j]);
            }
            temp[i][j] %= 1000;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            v1[i][j] = temp[i][j];
        }
    }
}
int main() {
    fastio;
    cin >> n >> b;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
        // ans의 초기값은 단위 행렬이어야 한다.
        ans[i][i] = 1;
    }
    while (b) {
        if (b % 2) {
            sol(ans, arr);
        }
        sol(arr, arr);
        b /= 2;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}