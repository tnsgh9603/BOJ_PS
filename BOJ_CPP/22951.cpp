#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N, K, x;
    vector<pair<int, int>> v;
    cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j) {
            cin >> x;
            v.push_back({x, i});
        }
    }
    int cur = 0;
    while (v.size() > 1) {
        int val = v[cur].first;
        v.erase(v.begin() + cur);
        cur = (cur + val - 1) % v.size();
    }
    cout << v[0].second + 1 << " " << v[0].first;
    return 0;
}