#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
ll n, x, ans, patty[51]{1}, total[51]{1};

ll dfs(ll n, ll x) {
    ll half = (total[n] + 1) / 2;
    if (n == 1) {
        return (x == 0 or x == 1 ? 0 : x == 2 ? 1 : x == 3 ? 2 : 3);
    }
    if (x == 1) {
        return 0;
    } else if (x == half - 1) {
        return patty[n - 1];
    } else if (x == half) {
        return patty[n - 1] + 1;
    } else if (x > half) {
        return patty[n - 1] + 1 + dfs(n - 1, x - half);
    } else {
        return dfs(n - 1, x - 1);
    }
}

int main() {
    fastio;
    cin >> n >> x;
    for (int i = 1; i <= 50; ++i) {
        patty[i] = patty[i - 1] * 2 + 1;
        total[i] = total[i - 1] * 2 + 3;
    }
    cout << dfs(n, x);
    return 0;
}