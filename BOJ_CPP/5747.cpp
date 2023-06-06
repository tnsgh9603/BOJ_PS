#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        int t, sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; ++i) {
            cin >> t;
            sum1 += t & 1;
        }
        for (int i = 0; i < n; ++i) {
            cin >> t;
            sum2 += ~t & 1;
        }
        cout << n - min(sum1, sum2) - min(n - sum1, n - sum2) << '\n';
    }
    return 0;
}