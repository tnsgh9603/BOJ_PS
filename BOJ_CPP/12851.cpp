#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
#define INF 987654321
int visited[100'001];

int main() {
    fastio;
    int n, k, f = INF;
    cin >> n >> k;
    queue<pair<int, int>> q;
    q.push({n, 0});
    while (!q.empty()) {
        int x = q.front().first;
        int c = q.front().second;
        if (f == INF && x == k) f = c;
        if (c > f) break;
        ++visited[x];
        q.pop();
        if (x > 0 && !visited[x - 1]) {
            q.push({x - 1, c + 1});
        }
        if (x < 100000 && !visited[x + 1]) {
            q.push({x + 1, c + 1});
        }
        if (2 * x < 100001 && !visited[2 * x]) {
            q.push({2 * x, c + 1});
        }
    }
    cout << f << "\n" << visited[k];
    return 0;
}