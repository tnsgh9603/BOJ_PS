#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        long long a[3], d, e;
        cin >> a[0] >> a[1] >> a[2] >> d;
        sort(a, a + 3);
        while (d) {
            if (a[2] > a[1]) {
                e = min(a[2] - a[1], d);
                d -= e, a[2] -= e;
            } else if (a[1] > a[0]) {
                e = min(2 * (a[1] - a[0]), d);
                a[1] -= (e + 1) / 2, a[2] -= e / 2;
                d -= e;
            } else {
                e = d / 3;
                a[0] -= e + (d % 3 >= 1), a[1] -= e + (d % 3 >= 2), a[2] -= e;
                d = 0;
            }
        }
        cout << a[0] * a[1] * a[2] << "\n";
    }
    return 0;
}