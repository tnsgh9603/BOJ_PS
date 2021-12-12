#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, k;
    cin >> n >> m;
    vector<int> v(2 * n);
    iota(v.begin(), v.end(), 1);
    for (int i = 0; i < m; ++i) {
        cin >> k;
        if (k) {
            rotate(v.begin(), v.begin() + k, v.end());
        } else {
            vector<int> w(2 * n);
            for (int i = 0; i < n; ++i) {
                w[2 * i] = v[i];
                w[2 * i + 1] = v[n + i];
            }
            v = w;
        }
    }
    for (int i : v) {
        cout << i << "\n";
    }
    return 0;
}