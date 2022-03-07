#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    queue<pair<ll, ll>> q;
    q.push({a, 1});
    while (!q.empty()) {
        auto[now, cnt] = q.front();
        q.pop();
        if (now == b) {
            cout << cnt;
            return 0;
        }
        ll temp1 = now * 2, temp2 = stoll(to_string(now) + "1");
        if (temp1 <= b) {
            q.push({temp1, cnt + 1});
        }
        if (temp2 <= b) {
            q.push({temp2, cnt + 1});
        }
    }
    cout << -1;
    return 0;
}