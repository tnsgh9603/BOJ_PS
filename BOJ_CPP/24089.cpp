#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int where[2001];

int main() {
    fastio;
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        where[i] = i;
    }
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        where[x] = y;
    }
    for (int i = 1; i <= n; ++i) {
        cout << where[i] << "\n";
    }
    return 0;
}