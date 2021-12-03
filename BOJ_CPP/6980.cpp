#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int cnt, i, j, n, t[51], tc;
    cin >> tc;
    while (tc--) {
        cin >> n;
        for (i = 0; i < n; ++i) {
            cin >> t[i];
        }
        for (cnt = i = 0; i < n; ++i) {
            for (j = i + 1; j < n; ++j) {
                if (t[i] > t[j]) {
                    t[i] ^= t[j] ^= t[i] ^= t[j];
                    ++cnt;
                }
            }
        }
        cout << "Optimal train swapping takes " << cnt << " swaps.\n";
    }
    return 0;
}