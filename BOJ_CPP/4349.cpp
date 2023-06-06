#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        int ans = 1000 * 1000 * 1000;
        for (int i = 1; i * i * i <= N; ++i) {
            for (int j = i; i * j * j <= N; ++j) {
                if (N % (i * j)) {
                    continue;
                }
                int k = N / (i * j), area = 2 * i * j + 2 * i * k + 2 * j * k;
                if (area < ans) {
                    ans = area;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}