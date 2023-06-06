#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    int h = (g - c) * 360 + (f - b) * 30 + (e - a), i = (d + h) % 7;
    if (i == 0) {
        i = 7;
    }
    cout << i;
    return 0;
}