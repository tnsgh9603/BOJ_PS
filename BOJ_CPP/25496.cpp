#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int p, n, cnt = 0, idx = 0;
    cin >> p >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (p < 200 and idx <= n - 1) {
        p += v[idx++];
        ++cnt;
    }
    cout << cnt;
    return 0;
}