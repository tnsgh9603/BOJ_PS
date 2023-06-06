#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
ll n, q, arr[200'001], sum[200'001];

pair<ll, ll> trial(int v) {
    int cnt = 0;
    pair<ll, ll> ans(0, 0);
    for (int i = 1; i <= n; ++i) {
        while (arr[i] - arr[cnt] > v) {
            ++cnt;
        }
        ans.first += i - cnt;
        ans.second += 1ll * arr[i] * (i - cnt) - (sum[i - 1] - (cnt ? sum[cnt - 1] : 0));
    }
    return ans;
}

ll query(ll x) {
    int st = 0, ed = 987654321;
    while (st != ed) {
        int m = (st + ed + 1) / 2;
        if (trial(m).first <= x) {
            st = m;
        } else {
            ed = m - 1;
        }
    }
    pair<ll, ll> y = trial(st);
    return (st + 1) * (x - y.first) + y.second;
}

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cin >> n >> q;
        for (int j = 1; j <= n; ++j) {
            cin >> arr[j];
            arr[j] += arr[j - 1];
            sum[j] = sum[j - 1] + arr[j];
        }
        cout << "Case #" << tc << ":\n";
        while (q--) {
            ll s, e;
            cin >> s >> e;
            cout << query(e) - query(s - 1) << "\n";
        }
    }
    return 0;
}