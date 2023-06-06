#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        int k, c, s;
        cin >> k >> c >> s;
        cout << "Case #" << tc << ":";
        if (s < (k + c - 1) / c) {
            cout << " IMPOSSIBLE";
        } else {
            for (int i = 0; i < k; i += c) {
                ll idx = 0;
                for (int j = 0; j < c; j++) {
                    idx = idx * k + min(i + j, k - 1);
                }
                cout << " " << idx + 1;
            }
        }
        cout << "\n";
    }
    return 0;
}