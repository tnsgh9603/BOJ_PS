#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int h, k, v, s, ans = 0;
    cin >> h >> k >> v >> s;
    while (h > 0) {
        v += s;
        v -= max(1, v / 10);
        if (v >= k) {
            ++h;
        } else if (0 < v && v < k) {
            if (--h == 0) {
                v = 0;
            }
        } else if (v == 0) {
            h = 0;
        }
        ans += v;
        if (s > 0) {
            --s;
        }
    }
    cout << ans;
    return 0;
}
