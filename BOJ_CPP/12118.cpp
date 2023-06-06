#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX_N = 1e6, MAX_TIMES = 180;
int LEFT[10][MAX_N + 1], RIGHT[10][MAX_N + 1];

int costly_binary_search() {
    string S;
    cin >> S;
    const int n = S.length();
    for (int p = 0; p <= n; ++p) {
        LEFT[0][p] = p;
        RIGHT[0][p] = p;
    }
    for (int t = 1; t <= MAX_TIMES; ++t) {
        for (int p = 0; p <= n; ++p) {
            LEFT[t % 10][p] = LEFT[(t - 1) % 10][p];
            RIGHT[t % 10][p] = RIGHT[(t - 1) % 10][p];
        }
        for (int p = 0; p < n; ++p) {
            const int tt = t - (S[p] - '0');
            if (tt >= 0) {
                const int l = LEFT[tt % 10][p];
                const int r = RIGHT[tt % 10][p + 1];
                LEFT[t % 10][r] = min(LEFT[t % 10][r], l);
                RIGHT[t % 10][l] = max(RIGHT[t % 10][l], r);
            }
        }
        for (int p = n; p > 0; --p) {
            LEFT[t % 10][p - 1] = min(LEFT[t % 10][p - 1], LEFT[t % 10][p]);
        }
        for (int p = 0; p < n; ++p) {
            RIGHT[t % 10][p + 1] = max(RIGHT[t % 10][p + 1], RIGHT[t % 10][p]);
        }
        if (RIGHT[t % 10][0] == n) {
            return t;
        }
    }
    return MAX_TIMES;
}

int main() {
    fastio;
    int T;
    cin >> T;
    for (int test = 1; test <= T; ++test) {
        cout << "Case #" << test << ": " << costly_binary_search() << "\n";
    }
    return 0;
}