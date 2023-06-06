#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double n;
    cin >> n;
    n = min(n, 1.0);
    double ans = n / 2;
    cout << fixed << setprecision(6) << ans * ans;
    return 0;
}