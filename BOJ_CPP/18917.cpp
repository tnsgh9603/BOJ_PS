#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int m, c, x;
    cin >> m;
    long long a = 0, b = 0;
    while (m--) {
        cin >> c;
        if (c < 3) {
            cin >> x;
        }
        if (c == 1) {
            a += x;
            b ^= x;
        } else if (c == 2) {
            a -= x;
            b ^= x;
        } else {
            cout << (c == 3 ? a : b) << "\n";
        }
    }
    return 0;
}