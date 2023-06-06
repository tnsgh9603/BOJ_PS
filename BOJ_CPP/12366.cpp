#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define all(v) (v).begin(), (v).end()
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n;
        cin >> n;
        pair<int, int> P[n];
        for (int j = 0; j < n; ++j) {
            cin >> P[j].first;
        }
        for (int j = 0; j < n; ++j) {
            cin >> P[j].second;
        }
        vector<int> v(n);
        iota(all(v), 0);
        sort(all(v), [&](const int &x, const int &y) {
            int temp = P[x].first * P[y].second - P[y].first * P[x].second;
            if (!temp) {
                return x < y;
            }
            return temp < 0;
        });
        cout << "Case #" << tc << ": ";
        for (auto &i: v) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}