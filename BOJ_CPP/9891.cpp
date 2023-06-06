#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a, b, c, d, cnt = 0;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c >> d;
        v.push_back({min(abs(a - c), abs(b - d)), max(abs(a - c), abs(b - d))});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (!(v[i].first > v[j].first and v[i].second > v[j].second or v[i].first <= v[j].first and
                  v[i].second <= v[j].second)) {
                ++cnt;
            }
        }
    }
    cout << cnt;
    return 0;
}