#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
ll MOD = 1'000'000'007;

// x의 y승 -> 빠른 거듭제곱 알고리즘
ll f(ll x, ll y) {
    if (y == 1) {
        return x;
    }
    if (y & 1) {
        return x * f(x, y - 1) % MOD;
    }
    ll p = f(x, y / 2);
    return (p * p) % MOD;
}

int main() {
    fastio;
    ll m, n, s, ans = 0;
    cin >> m;
    while (m--) {
        cin >> n >> s;
        // 먼저 기약 분수 형태로 약분해줌 -> 문제에 명시되어 있기 때문
        ll gcd_ = gcd(n, s);
        n /= gcd_;
        s /= gcd_;
        // 모듈러 산술 연산에서 분배 법칙을 적용
        ans += (s * f(n, MOD - 2)) % MOD;
        ans %= MOD;
    }
    cout << ans;
    return 0;
}