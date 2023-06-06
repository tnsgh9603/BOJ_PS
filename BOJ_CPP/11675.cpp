#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        int x1 = 0, x2 = 0, y;
        cin >> y;
        for (int i = 0; i < 8; ++i) {
            if (x2 & (1 << i)) {
                if (!(y & (1 << i))) {
                    x1 |= (1 << i);
                    x2 |= (1 << (i + 1));
                }
            } else {
                if (y & (1 << i)) {
                    x1 |= (1 << i);
                    x2 |= (1 << (i + 1));
                }
            }
        }
        cout << x1 << " ";
    }
    return 0;
}