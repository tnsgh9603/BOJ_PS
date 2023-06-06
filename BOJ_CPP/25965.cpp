#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        ll m, k, d, a, sum = 0;
        cin >> m;
        vector<tuple<ll, ll, ll>> v;
        for (int i = 0; i < m; ++i) {
            cin >> k >> d >> a;
            v.push_back({k, d, a});
        }
        cin >> k >> d >> a;
        for (auto &[q, w, e]: v) {
            sum += max(0ll, k * q - d * w + a * e);
        }
        cout << sum << "\n";
    }
    return 0;
}