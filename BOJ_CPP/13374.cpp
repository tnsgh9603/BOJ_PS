#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int f(int i, int j, int n, int start) {
    if (n == 1) {
        return start;
    } else if (n == 2) {
        return (i == 0 && j == 0 ? start : i == 0 && j == 1 ? (start + 1) % 10 : (start + 2) % 10);
    }
    return (i == 0 ? (start + j) % 10 : j == n - 1 ? (start + n - 1 + i) % 10 : i == j ?
                                                                                (start + 2 * n - 2 + (n - 1 - j)) % 10
                                                                                       : f(i - 1, j - 2, n - 3,
                                                                                           (start + 3 * n - 3) % 10));
}

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n, k, a, b;
        cin >> n >> k;
        while (k--) {
            cin >> a >> b;
            int cur = f(a, b, n, 0);
            cur = (cur == 9 ? 0 : cur + 1);
            cout << cur << "\n";
        }
    }
    return 0;
}