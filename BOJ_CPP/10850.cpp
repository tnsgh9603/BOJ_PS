#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool visited[1001];
int n, match[1001];
vector<int> v[1001];

bool dfs(int u) {
    visited[u] = 1;
    for (int i: v[u]) {
        if (match[i] == -1 or (!visited[match[i]] and dfs(match[i]))) {
            match[i] = u;
            return 1;
        }
    }
    return 0;
}

int sol() {
    memset(match, 255, sizeof(match));
    int tot = 0;
    for (int i = 0; i < n; ++i) {
        memset(visited, 0, sizeof(visited));
        if (dfs(i)) {
            ++tot;
        }
    }
    return tot;
}

int main() {
    fastio;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        for (int j = 0; j < m; ++j) {
            int n;
            cin >> n;
            v[i].push_back(n);
        }
    }
    cout << n - sol();
    return 0;
}