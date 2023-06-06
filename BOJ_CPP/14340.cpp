#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MOD = int(1e9) + 7;

inline void add(int &a, int b) {
    a += b;
    if (a >= MOD) {
        a -= MOD;
    }
}

inline void sub(int &a, int b) {
    a -= b;
    if (a < 0) {
        a += MOD;
    }
}

inline int mul(int a, int b) {
    return (long long) a * b % MOD;
}

inline int power(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) {
            res = mul(res, a);
        }
        b >>= 1;
        a = mul(a, a);
    }
    return res;
}

inline int inv(int x) {
    return power(x, MOD - 2);
}

const int N = 1000'0001;
int f[N], s[N];

int main() {
    fastio;
    f[0] = 1;
    f[1] = 0;
    s[0] = 1;
    s[1] = 1;
    for (int i = 2; i < N; ++i) {
        f[i] = mul(s[i - 2], inv(i));
        s[i] = s[i - 1];
        add(s[i], f[i]);
    }
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, k;
        cin >> n >> k;
        int l = k - 1, r = n - k;
        cout << "Case #" << tc << ": " << (MOD + 1 - mul(f[l], f[r])) % MOD << "\n";
    }
    return 0;
}