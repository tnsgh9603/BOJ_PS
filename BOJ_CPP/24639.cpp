#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, c;
    cin >> n >> m >> c;
    int ans = n, aM = 0, aC = 0;
    for (int M = 0; (M - 1) * m <= n; ++M) {
        int r = n - M * m;
        for (int C = max(0, r / c); C <= r / c + 1; ++C) {
            int cur = abs(M * m + C * c - n);
            if (cur < ans) {
                ans = cur;
                aM = M;
                aC = C;
            }
        }
    }
    cout << aM << " " << aC;
    return 0;
}