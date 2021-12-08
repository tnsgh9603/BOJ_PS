#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
const int MOD = 10007;

ll ipow(ll x, ll p) {
    ll ret = 1, piv = x % MOD;
    while (p) {
        if (p & 1) {
            ret *= piv;
        }
        piv *= piv;
        ret %= MOD;
        piv %= MOD;
        p >>= 1;
    }
    return ret % MOD;
}

int fact[10001], invf[10001], n, dp[101], cnt[101][101];
pi a[101];

int bino(int x, int y) {
    x += y;
    ll ans = 1;
    while (x) {
        int p = x % MOD, q = y % MOD;
        if (p < q) {
            return 0;
        }
        ans *= fact[p] * (invf[q] * invf[p - q] % MOD);
        ans %= MOD;
        x /= MOD;
        y /= MOD;
    }
    return ans;
}

int solve() {
    int w, h, n;
    cin >> w >> h >> n;
    P[0] = pi(1, 1);
    P[n + 1] = pi(w, h);
    for (int i = 1; i <= n; ++i) {
        cin >> P[i].first >> P[i].second;
    }
    sort(P + 1, a + n + 1);
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i <= n + 1; ++i) {
        for (int j = i + 1; j <= n + 1; ++j) {
            if (a[j].second < a[i].second) {
                continue;
            }
            int p = a[j].first - a[i].first, q = a[j].second - a[i].second;
            if (2 * p - q >= 0 && 2 * q - p >= 0 && (p + q) % 3 == 0) {
                cnt[i][j] = bino((2 * p - q) / 3, (2 * q - p) / 3);
            }
        }
    }
    dp[n + 1] = 1;
    for (int i = n; i >= 0; --i) {
        dp[i] = cnt[i][n + 1];
        for (int j = i + 1; j <= n; ++j) {
            dp[i] += MOD - dp[j] * cnt[i][j] % MOD;
            dp[i] %= MOD;
        }
    }
    return dp[0];
}

int main() {
    fastio;
    fact[0] = invf[0] = 1;
    for (int i = 1; i < 10007; ++i) {
        fact[i] = fact[i - 1] * i % MOD;
        invf[i] = ipow(fact[i], MOD - 2);
    }
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        cout << "Case #" << i << ": " << solve() << "\n";
    }
}
