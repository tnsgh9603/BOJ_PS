#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        double r, b;
        cin >> r >> b;
        cout << fixed << setprecision(3) << (sqrt(2) * r <= b ? 2 * r * r : b * sqrt(4 * r * r - b * b)) << "\n";
    }
    return 0;
}