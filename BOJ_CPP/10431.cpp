#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int t, a[20], ans = 0;
        cin >> t;
        for (int i = 0; i < 20; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < 20; ++i) {
            for (int j = i + 1; j < 20; ++j) {
                if (a[i] > a[j]) {
                    ++ans;
                }
            }
        }
        cout << t << " " << ans << "\n";
    }
    return 0;
}