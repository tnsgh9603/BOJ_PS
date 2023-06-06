#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
long long x[1'000'001];

int main() {
    fastio;
    long long mx = 0, n, x_i, g_i, k, x_max = 0, b = 0, a = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> g_i >> x_i;
        if (x_max < x_i) {
            x_max = x_i;
        }
        x[x_i] = g_i;
    }
    for (int i = 0; i <= x_max; ++i) {
        if (b >= k * 2 + 1) {
            if (mx < a) {
                mx = a;
            }
            a -= x[i - k * 2 - 1];
        }
        ++b;
        a += x[i];
    }
    if (mx < a) {
        mx = a;
    }
    cout << mx;
    return 0;
}