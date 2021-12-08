#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, i, j, u[200001], z[200001], r[200001], p;
bool check[200001];
vector<int> g[200001];
int dfs(int x) {
    if (!visited[x]) {
        visited[x] = 1;
        int sum = v2[x];
        for (int k = 0; k < r[x]; ++k) {
            sum += dfs(g[x][k]);
        }
        if (z[x] > sum) {
            z[x] = sum;
        }
    }
    return z[x];
}
int main() {
    fastio;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> v2[i] >> z[i] >> r[i];
        for (j = 0; j < r[i]; ++j) {
            cin >> p;
            g[i].push_back(p);
        }
        visited[i] = 0;
    }
    cout << dfs(1);
    return 0;
}