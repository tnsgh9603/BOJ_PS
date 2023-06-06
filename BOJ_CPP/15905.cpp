#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cnt = 0;
    pair<int, int> p[66];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p + n);
    for (int i = 0; i < n - 5; ++i) {
        if (p[n - 5].first == p[i].first) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}