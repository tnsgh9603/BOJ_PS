#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        ans += b > a ? (b - a) * c : 0;
    }
    cout << ans;
    return 0;
}