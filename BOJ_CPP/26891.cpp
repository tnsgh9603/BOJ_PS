#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long LL;

int main() {
    LL n;
    cin >> n;
    LL ans = (n + 1) * 2;
    LL i = 1;
    while (true) {
        LL j = n / i;
        if (i * j < n) j++;
        if (j < i) break;
        ans = min(ans, (i + 1) * (j + 1));
        i++;
    }
    cout << ans << endl;
    return 0;
}