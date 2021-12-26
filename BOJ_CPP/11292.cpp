#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

double h[51];
string s[51];

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        double mx = -1.0;
        for (int i = 0; i < n; ++i) {
            cin >> s[i] >> h[i];
            mx = max(mx, h[i]);
        }
        for (int i = 0; i < n; ++i) {
            if (h[i] == mx) {
                cout << s[i] << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}