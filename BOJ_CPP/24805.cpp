#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c;
    cin >> a >> b >> c;
    int now = 0, ans = 0;
    while (1) {
        now += a;
        ++ans;
        if (now >= c) {
            cout << ans;
            return 0;
        }
        now -= b;
    }
}