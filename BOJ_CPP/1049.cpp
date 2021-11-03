#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int p = 1000, o = 1000, n, m, package, one;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> package >> one;
        p = min(p, package);
        o = min(o, one);
    }
    cout << min({p * (n / 6) + o * (n % 6), o * n, p * (n / 6) + p});
    return 0;
}