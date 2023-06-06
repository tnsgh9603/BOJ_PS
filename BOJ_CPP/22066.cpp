#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a, b, c;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        int mn = min(a, b);
        if ((a - b + 1) % c != 0) {
            cout << "-1\n";
            continue;
        }
        for (int i = 0; i < mn; ++i) {
            int x = a - i, y = b - i;
            if (x % 100 == c * (y % 100)) {
                cout << i << "\n";
                goto hell;
            }
        }
        cout << "-1\n";
        hell:;
    }
    return 0;
}