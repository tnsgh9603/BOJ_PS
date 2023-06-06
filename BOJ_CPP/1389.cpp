#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
int is_prime[101];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    vector<int> v[101], ans;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int mn = INT_MAX;
    for (int i = 1; i <= n; ++i) {
        queue<pair<int, int>> q;
        q.push({i, 0});
        fill(is_prime, is_prime + 100, 987654321);
        while (!q.empty()) {
            auto[now, cnt] = q.front();
            q.pop();
            for (auto next: v[now]) {
                if (next != i && is_prime[next] > cnt + 1) {
                    is_prime[next] = cnt + 1;
                    q.push({next, cnt + 1});
                }
            }
        }
        int sum = 0;
        for (int j = 1; j <= n; ++j) {
            sum += is_prime[j];
        }
        if (mn > sum - 1) {
            mn = sum - 1;
            ans.clear();
            ans.push_back(i);
        } else if (mn == sum - 1) {
            ans.push_back(i);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans[0];
    return 0;
}