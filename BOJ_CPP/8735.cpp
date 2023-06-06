#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<tuple<double, int, int>> v1;
    vector<pair<int, int>> v2;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        v1.push_back({1. * a / b, a, i});
        v2.push_back({a, b});
    }
    sort(v1.rbegin(), v1.rend());
    long long sum1 = 0, sum2 = 0, cnt = 0, mx = 0;
    for (auto[a, b, c]: v1) {
        sum1 += v2[c].first;
        sum2 += v2[c].second;
        ++cnt;
        if (sum1 >= sum2 and mx < cnt) {
            mx = cnt;
        }
    }
    cout << mx;
    return 0;
}