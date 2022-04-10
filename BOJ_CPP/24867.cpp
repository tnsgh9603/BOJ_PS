#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << max({0ll, max(a - b, 0ll) * c + max(a - b - d, 0ll) * e, max(a - d, 0ll) * e + max(a - b - d, 0ll) * c});
    return 0;
}