#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        vector<int> b(101), g(101), r(101), y(101);
        int m;
        cin >> m;
        while (m--) {
            int v;
            char s;
            cin >> v >> s;
            if (s == 'b') {
                b[v] = 1;
            }
            if (s == 'g') {
                g[v] = 1;
            }
            if (s == 'r') {
                r[v] = 1;
            }
            if (s == 'y') {
                y[v] = 1;
            }
        }
        bool flag = 0;
        for (int i = 3; i <= 100; ++i) {
            if (b[i - 2] && b[i - 1] && b[i]) {
                flag = 1;
            }
            if (g[i - 2] && g[i - 1] && g[i]) {
                flag = 1;
            }
            if (r[i - 2] && r[i - 1] && r[i]) {
                flag = 1;
            }
            if (y[i - 2] && y[i - 1] && y[i]) {
                flag = 1;
            }
        }
        for (int i = 1; i <= 100; ++i) {
            if (b[i] + g[i] + r[i] + y[i] >= 3) {
                flag = 1;
            }
        }
        cout << (flag ? "YES" : "NO") << "\n";
    }
    return 0;
}