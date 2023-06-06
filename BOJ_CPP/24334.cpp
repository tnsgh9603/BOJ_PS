#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        m += a * 60 + b;
    }
    double mn = INT_MAX;
    for (int i = 0; i <= 1000; ++i) {
        for (int j = 0; j <= 1000; ++j) {
            if (240 * i + 180 * j >= m) {
                mn = min(mn, 10.9 * i + 9.15 * j);
                break;
            }
        }
    }
    cout << fixed << setprecision(2) << mn;
    return 0;
}