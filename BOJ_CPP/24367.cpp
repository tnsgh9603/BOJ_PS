#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int m, n, t1, t2, t3, t4;
    cin >> m >> n >> t1 >> t2 >> t3 >> t4;
    int ans;
    if (m >= 4 && t1 + t2 + t3 + t4 <= n) {
        ans = 1;
    } else if (
            (m >= 2 && (
                    (t1 + t2 <= n && t3 + t4 <= n) ||
                    (t1 + t3 <= n && t2 + t4 <= n) ||
                    (t1 + t4 <= n && t2 + t3 <= n)
            )) ||
            (m >= 3 && (
                    t1 + t2 + t3 <= n ||
                    t1 + t2 + t4 <= n ||
                    t1 + t3 + t4 <= n ||
                    t2 + t3 + t4 <= n
            )))
        ans = 2;
    else if (
            m >= 2 && (
                    t1 + t2 <= n ||
                    t1 + t3 <= n ||
                    t1 + t4 <= n ||
                    t2 + t3 <= n ||
                    t2 + t4 <= n ||
                    t3 + t4 <= n
            ))
        ans = 3;
    else {
        ans = 4;
    }
    cout << ans;
    return 0;
}