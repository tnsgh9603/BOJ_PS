#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int m;

void i(int s, int t) {
    if (t == 0) {
        if (s > m) {
            m = s;
        }
        return;
    }
    i(s * 1.05, t - 1);
    if (t > 2) {
        i(s * 1.2, t - 3);
    }
    if (t > 4) {
        i(s * 1.35, t - 5);
    }
}

int main() {
    fastio;
    int x, y;
    cin >> x >> y;
    i(x, y);
    cout << m;
    return 0;
}