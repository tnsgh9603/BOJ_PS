#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, t1, t2, t3;
    while (cin >> n >> t1 >> t2 >> t3 && n) {
        cout << 4 * n - 1 + 2 * t2 + -t1 + (t1 < t2 ? 0 : n) - t3 + (t2 > t3 ? 0 : n) << "\n";
    }
    return 0;
}