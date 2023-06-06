#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        int A, B, C;
        double dA, dB, dC;
        cin >> A >> B >> C;
        dA = (360 / 12) * (A + B / 60.0 + C / 3600.0);
        dB = (360 / 60) * (B + C / 60.0);
        dC = (360 / 60) * (C);
        cout << fixed << setprecision(12)
             << min({abs(dA - dB), abs(dA - dC), abs(dB - dC), 360 - abs(dA - dB), 360 - abs(dA - dC),
                     360 - abs(dB - dC)}) << "\n";
    }
    return 0;
}
