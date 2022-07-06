#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int a;
        double b, c, d;
        cin >> a >> b >> c >> d;
        cout << a << " " << b + c + d << " "
             << (b >= 35 * 0.3 and c >= 25 * 0.3 and d >= 40 * 0.3 and b + c + d >= 55 ? "PASS" : "FAIL") << "\n";
    }
    return 0;
}