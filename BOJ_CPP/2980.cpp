#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, l, prev = 0, t = 0;
    cin >> n >> l;
    for (int i = 0; i < n; ++i) {
        int d, r, g;
        cin >> d >> r >> g;
        t += d - prev;
        prev = d;
        int red = t % (r + g);
        if (red <= r) {
            t += r - red;
        }
    }
    cout << t + l - prev;
    return 0;
}