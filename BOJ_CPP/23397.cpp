#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t, d, m;
    cin >> t >> d >> m;
    int cur = 0;
    bool flag = 0;
    for (int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        if (k - cur >= t) {
            flag = 1;
        }
        cur = k;
    }
    if (d - cur >= t) {
        flag = 1;
    }
    cout << (flag ? "Y" : "N");
    return 0;
}