#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n;
double ar, S1, S2;
struct point {
    long long x, y;
} w[110];
int main() {
    fastio;
    int i, j;
    long long S = 0;
    cin >> ar >> n;
    for (i = 0; i < n; ++i) {
        cin >> w[i].x >> w[i].y;
    }
    w[n] = w[0], w[n + 1] = w[1];
    for (i = 0; i < n; ++i) {
        S += w[i].x * w[i + 1].y - w[i].y * w[i + 1].x;
    }
    S1 = abs(S) * 0.5;
    for (i = 0; i < n; ++i) {
        S = 0;
        for (j = 0; j < 3; ++j) {
            S += w[i + j].x * w[i + (j + 1) % 3].y - w[i + j].y * w[i + (j + 1) % 3].x;
        }
        S2 += abs(S) * 0.5;
    }
    ar = 1.0 - ar;
    cout << fixed << setprecision(4) << sqrt(S2 / (S1 * ar));
    return 0;
}