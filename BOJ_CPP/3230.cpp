#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, a;
    cin >> n >> m;
    vector<int> v1, v2;
    for (int i = 1; i <= n; ++i) {
        cin >> a;
        v1.insert(v1.begin() + a - 1, i);
    }
    for (int i = 0; i < m; ++i) {
        cin >> a;
        v2.insert(v2.begin() + a - 1, v1[m - 1 - i]);
    }
    for (int i = 0; i < 3; ++i) {
        cout << v2[i] << "\n";
    }
    return 0;
}