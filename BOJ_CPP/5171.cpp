#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    vector<vector<string>> v(n, vector<string>(5));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> v[i][j];
        }
    }
    auto getDist = [&](auto &a, auto &b) {
        int ret = 0;
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (a[i][j] != b[i][j]) {
                    ++ret;
                }
            }
        }
        return ret;
    };
    for (int tc = 1; tc <= k; ++tc) {
        vector<string> fp(5);
        for (auto &x: fp) {
            cin >> x;
        }
        int mn = INT_MAX;
        for (int i = 0; i < n; ++i) {
            mn = min(mn, getDist(fp, v[i]));
        }
        cout << "Data Set " << tc << ":\n";
        for (int i = 0; i < n; ++i) {
            if (getDist(fp, v[i]) == mn) cout << i + 1 << ' ';
        }
        cout << "\n\n";
    }
    return 0;
}