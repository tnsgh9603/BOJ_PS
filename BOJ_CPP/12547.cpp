#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve(int t) {
    int k, c;
    cin >> k >> c;
    cout << "Case #" << t << ": ";
    if (c == 1) {
        cout << k << '\n';
        return;
    }
    int a = (k + 1) / 2;
    if (c == 2) {
        cout << k + a << '\n';
        return;
    }
    int b = (3 * k - k - a - a + 2) / 3;
    if (c == 3) {
        cout << k + a + b << '\n';
        return;
    }
}

int main() {
    fastio;
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        solve(t);
    }
    return 0;
}