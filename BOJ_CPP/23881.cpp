#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = n; i >= 1; --i) {
        int mx = 0, idx;
        for (int j = 1; j <= i; ++j) {
            if (mx < v[j]) {
                mx = v[j];
                idx = j;
            }
        }
        if (idx != i) {
            if (++cnt == k) {
                cout << min(v[idx], v[i]) << " " << max(v[idx], v[i]);
                return 0;
            }
            swap(v[idx], v[i]);
        }
    }
    cout << -1;
    return 0;
}