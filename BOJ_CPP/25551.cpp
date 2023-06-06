#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int x = min({a, d, e}), y = min({b, c, f});
    cout << (x == y ? 2 * x : 2 * min(x, y) + 1);
    return 0;
}