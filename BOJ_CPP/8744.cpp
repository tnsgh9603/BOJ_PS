#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    bool a = 0, b = 0, c = 0;
    int mx = 1;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        if (m == 0) {
            a = 1;
        }
        else if (m == 1) {
            b = 1;
            if (a) {
                c = 1;
                mx = max(mx, 2);
            }
        }
        else {
            if (c) {
                mx = 3;
            }
            if (a || b) {
                mx = max(mx, 2);
            }
        }
    }
    cout << mx;
    return 0;
}