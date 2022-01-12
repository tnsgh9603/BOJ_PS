#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, cnt = 0;
    cin >> n >> m;
    vector<int> v1(n), v2(m);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.rbegin(), v2.rend());
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m && v1[i] <= v2[j]; ++j, ++cnt);
    }
    cout << cnt;
    return 0;
}