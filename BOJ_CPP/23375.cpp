#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int x, y, r;
    cin >> x >> y >> r;
    for (int i = 0; i < 4; ++i) {
        int dx = "0022"[i] - '1';
        int dy = "0220"[i] - '1';
        cout << x + dx * r << ' ' << y + dy * r << '\n';
    }
    return 0;
}