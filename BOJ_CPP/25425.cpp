#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long n, m, a, k;
    cin >> n >> m >> a >> k;
    cout << min(n, a - k + 1) << " " << ((a - k + m - 1) / m + 1);
    return 0;
}
