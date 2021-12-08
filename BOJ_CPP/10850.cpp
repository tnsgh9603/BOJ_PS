#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool visited[1001];
int n, arr[1001];
vector<int> v[1001];

bool dfs(int u) {
    visited[u] = 1;
    for (int i: v[u]) {
        if (arr[i] == -1 or (!visited[arr[i]] and dfs(arr[i]))) {
            arr[i] = u;
            return 1;
        }
    }
    return 0;
}

int sol() {
    memset(arr, 255, sizeof(arr));
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