#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cnt = 0;
    cin >> n;
    for (int i = 0, p = 0, t; i < n && cin >> t; ++i) {
        if (p + t <= 30) {
            (p += t) < 30 || (p = 0);
            ++cnt;
        } else {
            cnt += 30 - p << 1 >= t, p = 0;
        }
    }
    cout << cnt;
    return 0;
}