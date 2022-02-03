#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int ans = ((60 * h2 + m2) - (60 * h1 + m1) + 24 * 60) % 1440;
    cout << ans << " " << ans / 30;
    return 0;
}