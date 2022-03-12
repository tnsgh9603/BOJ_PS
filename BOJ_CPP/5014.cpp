#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
int dist[1'000'001], f;

bool OOB(int x) {
    return 1 <= x and x <= f;
}

int main() {
    fastio;
    int s, g, u, d;
    cin >> f >> s >> g >> u >> d;
    fill(dist, dist + f + 1, 987654321);
    queue<pair<int, int>> q;
    q.push({s, 0});
    dist[s] = 0;
    while (!q.empty()) {
        auto[now, cnt] = q.front();
        q.pop();
        if (now == g) {
            cout << cnt;
            return 0;
        }
        if (OOB(now + u) and dist[now + u] > cnt + 1) {
            dist[now + u] = cnt + 1;
            q.push({now + u, cnt + 1});
        }
        if (OOB(now - d) and dist[now - d] > cnt + 1) {
            dist[now - d] = cnt + 1;
            q.push({now - d, cnt + 1});
        }
    }
    cout << "use the stairs";
    return 0;
}