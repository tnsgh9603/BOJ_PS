#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    double ans = 0;
    while (n--) {
        double a, d;
        cin >> a >> d;
        a = a * M_PI / 180.0;
        ans += d * sin(a);
    }
    cout << fixed << setprecision(2) << ans;
    return 0;
}