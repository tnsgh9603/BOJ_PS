#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
struct hiker {
    ll pos;
    ll term;
    int val;
};

bool operator<(const hiker &lhs, const hiker &rhs) {
    if (lhs.pos != rhs.pos) {
        return lhs.pos > rhs.pos;
    }
    return lhs.val < rhs.val;
}

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        priority_queue<hiker> pq;
        ll total_H = 0;
        int N;
        cin >> N;
        for (int i = 0; i < N; ++i) {
            ll D, H, M;
            cin >> D >> H >> M;
            total_H += H;
            for (int j = 0; j < H; ++j) {
                pq.push({(360 - D) * (M + j), 360 * (M + j), -1});
            }
        }
        ll ans = total_H, cur = ans;
        int cnt = 0;
        while (cnt < 2 * total_H) {
            hiker top = pq.top();
            pq.pop();
            cur += top.val;
            ans = min(ans, cur);
            pq.push({top.pos + top.term, top.term, 1});
            ++cnt;
        }
        cout << "Case #" << tc << ": " << ans << "\n";
    }
    return 0;
}