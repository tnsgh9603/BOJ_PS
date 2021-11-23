#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
int arr[1'000'001], pd[15], pn;

int recur(int dep, int y) {
    if (dep == pn) {
        return y + 1;
    }
    return recur(dep + 1, y) - recur(dep + 1, y / pd[dep]);
}

int sol(int x, int y) {
    pn = 0;
    while (x != 1) {
        pd[pn] = arr[x];
        while (x % pd[pn] == 0) {
            x /= pd[pn];
        }
        ++pn;
    }
    return recur(0, y);
}

int main() {
    fastio;
    for (int i = 2; i < 1'000'001; ++i) {
        if (arr[i] == 0) {
            for (int j = i; j < 1'000'001; j += i) {
                arr[j] = i;
            }
        }
    }
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        ll n, r;
        cin >> n >> r;
        ll ans = 1, d = 999999999999LL / r / r, p = n - 1;
        if (p > 1e6 + 5) {
            p = 1e6 + 5;
        }
        for (ll i = 1; i < n; ++i) {
            while (p >= 0 && i * i + p * p > d) {
                --p;
            }
            if (p < 0) {
                break;
            }
            ans += sol(i, p);
        }
        cout << "Case #" << tc << ": " << ans << "\n";
    }
    return 0;
}
