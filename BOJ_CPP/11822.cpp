#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(7));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> v[i][j];
        }
    }
    int idx = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        while (!v[i][idx]) {
            idx = (idx + 1) % 7;
            ++ans;
        }
        idx = (idx + 1) % 7;
        ++ans;
    }
    cout << ans;
    return 0;
}