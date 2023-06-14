#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
ll dist[1001][1001];

int main() {
    fastio;
    int n, m, x;
    cin >> n >> m >> x;
    fill(dist[0], dist[1001], INT_MAX);
    for (int i = 1; i <= n; ++i) {
        dist[i][i] = 0;
    }
    for (int i = 1; i <= m; ++i) {
        ll a, b, c;
        cin >> a >> b >> c;
        dist[a][b] = (dist[a][b] == INT_MAX ? c : min(dist[a][b], c));
    }
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    ll mx = 0;
    for (int i = 1; i <= n; ++i) {
        mx = max(mx, dist[i][x] + dist[x][i]);
    }
    cout << mx;
    return 0;
}