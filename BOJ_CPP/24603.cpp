#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double n, x, y, k;
    cin >> n >> x >> y;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        cout << fixed << setprecision(0) << k * (y / x) << "\n";
    }
    return 0;
}