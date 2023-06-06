#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    double m, now = 0, after, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        after = 1 - (1 - now) * (1 - m / 100);
        sum += (after - now) * 100;
        cout << fixed << setprecision(6) << sum << "\n";
        now = after;
    }
    return 0;
}