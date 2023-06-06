#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        double p, q;
        cin >> p >> q;
        cout << "f = " << fixed << setprecision(1) << p * q / (p + q) << "\n";
    }
    return 0;
}