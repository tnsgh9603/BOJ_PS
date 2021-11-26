#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; ++tc) {
        cout << "Case #" << tc << ": ";
        int x, r, c;
        cin >> x >> r >> c;
        cout << ((x >= 7 || (r < x && c < x) || r * c % x || x == 5 && r * c == 15)? "RICHARD" : min(r, c) >= x - 1 - (x >= 5) ? "GABRIEL" : "RICHARD") << "\n";
    }
    return 0;
}