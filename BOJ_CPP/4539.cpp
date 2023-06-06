#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n, t = 1;
        cin >> n;
        while (n > 10) {
            n += 5;
            n /= 10;
            t *= 10;
        }
        cout << n * t << "\n";
    }
    return 0;
}