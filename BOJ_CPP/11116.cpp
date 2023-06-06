#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        set<int> l, r;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> m;
            l.insert(m);
        }
        for (int i = 0; i < n; ++i) {
            cin >> m;
            r.insert(m);
        }
        int ans = 0;
        for (const auto &x: l) {
            if (l.count(x + 500) > 0 && r.count(x + 1000) > 0 && r.count(x + 1500) > 0) {
                ++ans;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}