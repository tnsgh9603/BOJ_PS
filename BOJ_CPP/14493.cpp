#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a, b, mx = 0;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        mx = 1 + max(mx, (mx / (a + b)) * (a + b) + b);
    }
    cout << mx;
    return 0;
}