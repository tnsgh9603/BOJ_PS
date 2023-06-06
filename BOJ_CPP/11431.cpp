#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, s, p;
        cin >> n >> s >> p;
        int len = 0, x, y;
        cin >> x >> y;
        for (int i = 0; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            len += abs(x - a) + abs(y - b);
            x = a;
            y = b;
        }
        len *= s;
        int ans = len / p + (len % p != 0);
        cout << "Data Set " << tc << ":\n" << ans << "\n\n";
    }
    return 0;
}