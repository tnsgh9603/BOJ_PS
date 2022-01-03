#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int W, E, T, D, DE, A;
    cin >> W >> E >> T >> D >> DE >> A;
    int x = E, w1 = W + (DE - A - x) * D, w2 = W;
    if (w1 > 0) {
        cout << w1 << " " << x << "\n";
    } else {
        cout << "Danger Diet\n";
    }
    for (int i = 1; i <= D; ++i) {
        int d = DE - x - A;
        w2 += d;
        if (d > T || d < -T) {
            x = d % 2 ? x + d / 2 - 1 : x + d / 2;
        }
        if (x <= 0 || w2 <= 0) {
            cout << "Danger Diet\n";
            return 0;
        }
    }
    cout << w2 << " " << x << " " << (E - x > 0 ? "YOYO" : "NO");
    return 0;
}