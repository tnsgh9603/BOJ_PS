#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int N, a, b, c, d, idx;
    ll mn = LLONG_MAX;
    cin >> N >> a >> b >> c >> d;
    for (int i = 0; i < N; ++i) {
        int q;
        cin >> q;
        ll sum = 0, now_x = a, now_y = b;
        while (q--) {
            int w, e;
            cin >> w >> e;
            sum += abs(now_x - w) + abs(now_y - e);
            now_x = w, now_y = e;
        }
        sum += abs(now_x - c) + abs(now_y - d);
        if (mn > sum) {
            mn = sum;
            idx = i + 1;
        }
    }
    cout << idx;
    return 0;
}