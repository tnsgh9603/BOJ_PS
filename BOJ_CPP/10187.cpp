#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double t = 1.61803399, a, b;
    int n;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cout << (abs(a / b - t) <= 0.001 ? "golden" : "not") << "\n";
    }
    return 0;
}