#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int m = a * d - b * c, n = b * d, g = gcd(m, n);
        m /= g;
        n /= g;
        if (m == 1) {
            cout << m << "/" << n << "\n";
        } else {
            cout << "NOT NEIGHBORS\n";
        }
    }
    return 0;
}