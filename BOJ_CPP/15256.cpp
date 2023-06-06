#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cout << "Data Set " << tc << ":\n";
        int n;
        cin >> n;
        double ans = INT_MAX, eps = 1e-11;
        int c = 0;
        bool flag1 = 0, flag2 = 0;
        while (n--) {
            double x;
            cin >> x;
            if (flag1) {
                ++c;
                if (c == 3) {
                    flag2 = 1;
                }
                if (c > 2) {
                    ans = min(ans, x);
                }
            }
            if (30 <= x && x < 30.2 + eps) {
                flag1 = 1;
            }
        }
        cout << fixed << setprecision(2) << (flag2 ? ans - 30 : 0) << "\n\n";
    }
    return 0;
}