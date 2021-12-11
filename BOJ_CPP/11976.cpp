#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    int dp = -a + b - c + d - e + f - g + h;
    cout << (dp = a + dp - b) << "\n" << (dp = c + dp - d) << "\n" << (dp = e + dp - f);
    return 0;
}