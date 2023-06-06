#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n, now = -1;
    cin >> n;
    vector<int> v(n + 1), ans(n + 1);
    fill(ans.begin(), ans.end(), -1);
    v[0] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (int i = n - 1; i >= 1; --i) {
        if (v[i] != v[i + 1]) {
            now = i + 1;
        }
        ans[i] = now;
    }
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << " ";
    }
    return 0;
}