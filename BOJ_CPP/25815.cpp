#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int y, m;
    cin >> y >> m;
    int ans = (y == 0 ? 15 * m : y == 1 ? 15 * 12 + 9 * m : 15 * 12 + 9 * 12 + (y - 2) * 4 * 12 + 4 * m);
    cout << ans / 12 << " " << ans % 12;
    return 0;
}