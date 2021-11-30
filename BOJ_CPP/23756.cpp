#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cur, sum = 0;
    cin >> n >> cur;
    while (n--) {
        int m;
        cin >> m;
        sum += min({abs(m - cur), abs(360 - m + cur), abs(360 - cur + m)});
        cur = m;
    }
    cout << sum;
    return 0;
}