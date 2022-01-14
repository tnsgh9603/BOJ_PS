#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, p;
    while (cin >> n >> m >> p && n) {
        vector<int> v(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
        }
        if (!v[m]) {
            cout << "0\n";
            continue;
        }
        cout << accumulate(v.begin(), v.end(), 0) * (100 - p) / v[m] << "\n";
    }
    return 0;
}