#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a, b, c;
    cin >> n;
    for (int k = 1; k <= n; ++k) {
        cin >> a >> b >> c;
        cout << "Data set: " << a << " " << b << " " << c << "\n";
        for (int j = 1; j <= c; ++j) {
            (a > b ? a : b) /= 2;
        }
        if (a > b) {
            cout << a << " " << b << "\n\n";
        } else {
            cout << b << " " << a << "\n\n";
        }
    }
    return 0;
}