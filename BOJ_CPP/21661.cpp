#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    vector<pair<int, string>> v;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        int sum = 0;
        for (int j = 0; j < m; ++j) {
            int k;
            cin >> k;
            sum += k;
        }
        v.push_back({sum, s});
    }
    sort(v.begin(), v.end());
    cout << v[0].second;
    return 0;
}