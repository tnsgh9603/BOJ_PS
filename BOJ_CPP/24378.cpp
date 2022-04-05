#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int m, n, a, b, c;
    cin >> m >> n >> a >> b >> c;
    cout << (m & 1 ? max(a + b + c - 2 * n, 0) : min({a, b, c}));
    return 0;
}