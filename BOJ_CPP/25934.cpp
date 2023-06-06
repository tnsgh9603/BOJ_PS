#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int x, B, K;
        cin >> x >> B >> K;
        cout << "Practice #" << tc << ": " << x << ' ' << B << "\n";
        while (K--) {
            cin >> x;
            while (B <= x) {
                B *= 2;
            }
            B -= x;
            cout << x << " " << B << "\n";
        }
        cout << "\n";
    }
    return 0;
}