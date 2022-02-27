#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, x = 0, y = 0, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        char c;
        cin >> c;
        if (c == 'I') {
            x = y + 1, y = 0;
        } else {
            y = x, x = 0;
        }
        if (x > n) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}