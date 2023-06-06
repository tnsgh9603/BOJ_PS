#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

double s1[1001], s2[1001], re;

int main() {
    int n, m, t, p[18];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s1[i] >> s2[i];
    }
    cin >> m;
    while (m--) {
        cin >> t;
        for (int i = 0; i < t; ++i) {
            cin >> p[i];
            if (i) {
                re += sqrt((s1[p[i]] - s1[p[i - 1]]) * (s1[p[i]] - s1[p[i - 1]]) +
                           (s2[p[i]] - s2[p[i - 1]]) * (s2[p[i]] - s2[p[i - 1]]));
            }
        }
        cout << fixed << setprecision(0) << re << "\n";
        re = 0.0;
    }
    return 0;
}