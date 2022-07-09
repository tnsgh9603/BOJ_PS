#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int i = 0; i < a; ++i) {
        int d, e, f, g;
        cin >> d >> e >> f >> g;
        ans += (d <= b && b <= f && e <= c && c <= g);
    }
    cout << (ans > 0 ? "Yes" : "No");
    return 0;
}