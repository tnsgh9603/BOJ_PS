#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int a[50][50], b[50];

int getsum(int *a, int n) {
    int res = 0;
    if (n % 3 == 0) {
        for (int i = 1; i < n; i += 3) {
            res += a[i];
        }
    } else if (n % 3 == 1) {
        res += a[0] + a[n - 1];
        for (int i = 3; i < n - 3; i += 3) {
            res += a[i];
        }
    } else {
        for (int i = 0; i < n; i += 3) {
            res += a[i];
        }
    }
    return res;
}

int getcenter(int *a, int n) {
    int c = n / 2, res = 0;
    if (n % 3 == 1) {
        res = getsum(a, n);
        for (int i = 1; i < c; i += 3) {
            res -= a[i];
        }
        for (int i = c + 2; i < n; i += 3) {
            res -= a[i];
        }
    } else if (n % 3 == 2) {
        res = getsum(a, n) - a[0] - a[n - 1];
        for (int i = 3; i < c; i += 3) {
            res -= a[i];
        }
        for (int i = c + 2; i < n - 3; i += 3) {
            res -= a[i];
        }
    } else {
        res += a[0] + a[n - 1];;
        for (int i = 3; i < c; i += 3) {
            res += a[i];
        }
        for (int i = c + 1; i < n - 3; i += 3) {
            res += a[i];
        }
        res -= getsum(a, n);
    }
    return res;
}

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
            b[i] = getsum(a[i], m);
        }
        cout << "Case #" << tc << ": " << getcenter(b, n) << "\n";
    }
    return 0;
}