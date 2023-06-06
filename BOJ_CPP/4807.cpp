#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int a[21], b[21];

int main() {
    fastio;
    int t = 0, n;
    while (cin >> n && n) {
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int cnt = 1000;
        for (int i = 0; i < 1000; ++i) {
            if (count(a, a + n, 0) == n) {
                cnt = max(0, i - 1);
                break;
            }
            for (int j = 0; j < n; ++j) {
                b[j] = abs(a[j] - a[(j + 1) % n]);
            }
            for (int j = 0; j < n; ++j) {
                a[j] = b[j];
            }
        }
        cout << "Case " << ++t << ": " << (cnt == 1000 ? "not attained" : to_string(cnt) : " iterations") << "\n";
    }
    return 0;
}
