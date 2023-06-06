#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    long long ans = (m + n - 1) / n + 2;
    if (m == 0 && n % 2 == 1) {
        ++ans;
    }
    cout << ans * 10;
    return 0;
}