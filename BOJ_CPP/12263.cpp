#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    k = n * m - k;
    if (k == 1) {
        auto func = [&](int i, int j) {
            if (i == 1 && j == 1) {
                return 'c';
            }
            return '*';
        };
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cout << func(i, j);
            }
            cout << "\n";
        }
        return;
    }
    if (n == 1 || m == 1) {
        auto func = [&](int i, int j) {
            if (i == 1 && j == 1) {
                return 'c';
            }
            if (i <= k && j <= k) {
                return '.';
            }
            return '*';
        };
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cout << func(i, j);
            }
            cout << "\n";
        }
        return;
    }
    for (int i = 2; i <= n; ++i) {
        for (int j = 2; j <= m; ++j) {
            if (i * 2 + j * 2 <= k + 4 && i * j >= k) {
                k -= i * 2 + j * 2 - 4;
                int I = i, J = j;
                auto func = [&](int i, int j) {
                    if (i == 1 && j == 1) {
                        return 'c';
                    }
                    if (i <= 2 && j <= J) {
                        return '.';
                    }
                    if (i <= I && j <= 2) {
                        return '.';
                    }
                    if (k && i <= I && j <= J) {
                        --k;
                        return '.';
                    }
                    return '*';
                };
                for (int i = 1; i <= n; ++i) {
                    for (int j = 1; j <= m; ++j) {
                        cout << func(i, j);
                    }
                    cout << "\n";
                }
                return;
            }
        }
    }
    cout << "Impossible\n";
}

int main() {
    fastio;
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        cout << "Case #" << i << ": \n";
        solve();
    }
    return 0;
}