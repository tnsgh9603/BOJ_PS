#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
struct Node {
    int y, x, m, w;
};

char mp[1001][1001];
int D[1001][1001][2];

int main() {
    fastio;
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            cin >> mp[i][j];
        }
    }
    queue<Node> q;
    q.push({1, 1, 1, 0});
    while (!q.empty()) {
        Node n = q.front();
        q.pop();
        if (n.y < 1 || n.y > N || n.x < 1 || n.x > M || D[n.y][n.x][n.w]) {
            continue;
        }
        if (n.y == N && n.x == M) {
            cout << n.m;
            return 0;
        }
        if (mp[n.y][n.x] == '1') {
            if (n.w) {
                continue;
            }
            n.w = 1;
        }
        D[n.y][n.x][n.w] = n.m;
        q.push({n.y + 1, n.x, n.m + 1, n.w});
        q.push({n.y - 1, n.x, n.m + 1, n.w});
        q.push({n.y, n.x + 1, n.m + 1, n.w});
        q.push({n.y, n.x - 1, n.m + 1, n.w});
    }
    cout << -1;
    return 0;
}