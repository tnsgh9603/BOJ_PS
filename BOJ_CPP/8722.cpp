#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, mx = -1, ans = -1;
    cin >> n >> m;
    while (n--) {
        int a, b;
        cin >> a >> b;
        int t1 = a * b;
        a -= 2, b -= 2;
        int t2 = (a / m + 2) * (b / m + 2);
        if (mx < t2 || mx == t2 && ans < t1) {
            mx = t2, ans = t1;
        }
    }
    cout << ans;
    return 0;
}