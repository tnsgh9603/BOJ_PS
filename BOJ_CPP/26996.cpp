#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    vector<tuple<int, int, int>> ans;
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if ((v[i].first - v[j].first) * (v[j].second - v[k].second) ==
                    (v[i].second - v[j].second) * (v[j].first - v[k].first)) {
                    ans.push_back({i + 1, j + 1, k + 1});
                }
            }
        }
    }
    cout << ans.size() << "\n";
    for (auto &[a, b, c]: ans) {
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}