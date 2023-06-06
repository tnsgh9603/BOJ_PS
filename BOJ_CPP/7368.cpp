#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[51], y[51], x2[51], y2[51];

bool chk(int i, int j) {
    return (x2[i] < arr1[j] || arr1[i] > x2[j] || y2[i] < y[j] || y[i] > y2[j] ? 0 : 1);
}

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        for (int i = 0; i < n; ++i) {
            cin >> arr1[i] >> y[i] >> y2[i] >> x2[i];
            x2[i] += arr1[i] - 1;
            y2[i] += y[i] - 1;
        }
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == j) {
                    continue;
                }
                if (chk(i, j)) {
                    ++cnt;
                    break;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}