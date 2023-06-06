#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        cout << "Data Set " << i << ":\n";
        int ans = 0, a, b, c, d, e, f;
        cin >> a >> b >> c >> d;
        set<int> S;
        for (int i = 0; i < b; ++i) {
            cin >> e;
            S.insert(e);
        }
        for (int i = 0; i < c; ++i) {
            cin >> e >> f;
            if (S.find(e) != S.end()) {
                ans += (f * d) / 100;
            }
        }
        cout << ans << "\n\n";
    }
    return 0;
}