#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, b, ans = 0, m = 1e5;
    cin >> n;
    while (n--) {
        cin >> b;
        ans = b - m > ans ? b - m : ans, m = b < m ? b : m;
    }
    cout << ans;
    return 0;
}