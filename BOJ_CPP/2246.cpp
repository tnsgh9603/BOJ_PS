#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
pair<int, int> p[10001];

int main() {
    fastio;
    int n, cnt = 0, mn = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p + n);
    for (int i = 0; i < n; ++i) {
        if (p[i].second < mn) {
            ++cnt;
            mn = p[i].second;
        }
    }
    cout << cnt;
    return 0;
}