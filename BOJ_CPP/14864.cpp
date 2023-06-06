#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[100'001], visited[100'001];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        arr[i] = i;
    }
    while (m--) {
        int u, v;
        cin >> u >> v;
        ++arr[u];
        --arr[v];
    }
    for (int i = 1; i <= n; ++i) {
        if (visited[arr[i]]) {
            cout << -1;
            return 0;
        }
        visited[arr[i]] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}