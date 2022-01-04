#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
struct Mat {
    ll a[50][50];
};

int main() {
    fastio;
    int n, R, C;
    bool flag = 1;
    cin >> n;
    Mat A[3];
    int x = 0, y = 1;
    for (int a = 0; a < n; ++a) {
        int r, c;
        cin >> r >> c;
        if (a && C != r) {
            flag = 0;
            break;
        }
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> A[2].a[i][j];
            }
        }
        if (a) {
            for (int i = 0; i < R; ++i) {
                for (int j = 0; j < c; ++j) {
                    ll d = 0;
                    for (int k = 0; k < C; ++k) {
                        d += A[x].a[i][k] * A[2].a[k][j] % MOD;
                    }
                    A[y].a[i][j] = d % MOD;
                }
            }
            C = c;
        }
        else {
            A[y] = A[2], R = r, C = c;
        }
        swap(x, y);
    }
    if (flag) {
        ll ans = 0;
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                ans += A[x].a[i][j];
            }
        }
        cout << ans % MOD;
    } else {
        cout << "-1;
    }
    return 0;
}