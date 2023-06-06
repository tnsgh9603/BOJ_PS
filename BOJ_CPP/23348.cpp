#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int mx = 0;
    while (n--) {
        int sum = 0;
        for (int i = 0; i < 3; ++i) {
            int x, y, z;
            cin >> x >> y >> z;
            sum += a * x + b * y + c * z;
        }
        mx = max(sum, mx);
    }
    cout << mx;
    return 0;
}