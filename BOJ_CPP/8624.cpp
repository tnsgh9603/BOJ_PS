#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
#define int int64_t

int f(int x) {
    return x * (x + 1) / 2;
}

int32_t main() {
    fastio;
    int n, k, l, r;
    cin >> n >> k >> l >> r;
    cout << (r <= k ? f((n - k) + r) - f((n - k) + l - 1) : k < l ? f(r - k) - f(l - k - 1) : f(n) - f((n - k) + l - 1) + f(r - k));
    return 0;
}