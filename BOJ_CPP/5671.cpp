#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int i, n, m;
    while (cin >> n >> m) {
        int c = 0;
        for (int i = n; i <= m; ++i) {
            int k = i, esc = 1, freq[10] = {0};
            while (k && esc) {
                esc &= (freq[k % 10]++ < 1);
                k /= 10;
            }
            c += esc;
        }
        cout << c << "\n";
    }
    return 0;
}