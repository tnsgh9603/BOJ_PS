#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int f(int t) {
    int mn = t;
    for (int i = 0; i < 4; ++i) {
        t = t % 1000 * 10 + t / 1000;
        mn = min(mn, t);
    }
    return mn;
}

int main() {
    fastio;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int s = f(a * 1000 + b * 100 + c * 10 + d), ans = 0;
    for (int i = 1111; i <= s; ++i) {
        if (f(i) == i) {
            ++ans;
        }
    }
    cout << ans;
    return 0;
}