#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int cnt_in[10001], cnt_out[10001], kind_in = 1, kind_out, n, k;

bool check(int now, bool flag) {
    if (flag) {
        if (--cnt_out[now] == 0) {
            --kind_out;
        }
        if (++cnt_in[now] == 1) {
            ++kind_in;
        }
    } else {
        if (++cnt_out[now] == 1) {
            ++kind_out;
        }
        if (--cnt_in[now] == 0) {
            --kind_in;
        }
    }
    return kind_out == k && kind_in == k;
}

int main() {
    fastio;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        ++cnt_out[v[i]];
    }
    int l = 0, r = 0, ans = INT_MAX;
    ++cnt_in[v[0]];
    --cnt_out[v[0]];
    kind_out = cnt_out[v[0]] ? kind_out - 1 : kind_out;
    while (1) {
        if (kind_in < k) {
            if(++r == n) {
                break;
            }
            if(check(v[r], 1)) {
                ans = min(ans, r - l);
            }
        } else if (check(v[++l], 0)) {
            ans = min(ans, r - l);
        }
    }
    cout << ((ans == INT_MAX) ? 0 : ans);
    return 0;
}