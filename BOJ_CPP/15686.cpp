#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[51][51], ans = INT_MAX, n, m;
vector<pair<int, int>> chicken, house;
bool visited[14];

int dist(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

void dfs(int k, int pos) {
    if (k == m) {
        int sum = 0;
        for (auto &[x1, y1]: house) {
            int mn = INT_MAX;
            for (int i = 0; i < chicken.size(); ++i) {
                if (visited[i]) {
                    mn = min(mn, dist(x1, y1, chicken[i].first, chicken[i].second));
                }
            }
            sum += mn;
        }
        ans = min(ans, sum);
        return;
    }
    for (int i = pos; i < chicken.size(); ++i) {
        if (!visited[i]) {
            visited[i] = 1;
            dfs(k + 1, i + 1);
            visited[i] = 0;
        }
    }
}

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                house.push_back({i, j});
            } else if (arr[i][j] == 2) {
                chicken.push_back({i, j});
            }
        }
    }
    dfs(0, 0);
    cout << ans;
    return 0;
}