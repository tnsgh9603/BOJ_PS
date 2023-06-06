#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, tc = 1;
    string ans;
    while (cin >> n >> m && n) {
        double d, mx_r = 0, mn_price = INT_MAX;
        int r;
        string s;
        cin >> ws;
        for (int i = 0; i < n; ++i) {
            getline(cin, s);
        }
        for (int i = 0; i < m; ++i) {
            getline(cin, s);
            cin >> d >> r;
            if (mx_r < r || (mx_r == r and mn_price > d)) {
                mx_r = r;
                mn_price = d;
                ans = s;
            }
            cin >> ws;
            for (int i = 0; i < r; ++i) {
                getline(cin, s);
            }
        }
        cout << "RFP #" << tc++ << "\n" << ans << "\n\n";
    }
    return 0;
}