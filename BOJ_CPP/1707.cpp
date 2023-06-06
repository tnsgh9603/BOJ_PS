#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector<int> v[20001];
int is_prime[20001];
bool visited[20001];

void dfs(int n, int temp) {
    visited[n] = 1;
    is_prime[n] = temp;
    temp *= -1;
    for (int m: v[n]) {
        if (!visited[m]) {
            dfs(m, temp);
        }
    }
}

int main() {
    fastio;
    int k, V, E;
    cin >> k;
    while (k--) {
        cin >> V >> E;
        memset(is_prime, 0, sizeof(is_prime));
        memset(visited, 0, sizeof(visited));
        for (int i = 1; i <= V; ++i) {
            v[i].clear();
        }
        for (int i = 0; i < E; ++i) {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        for (int i = 1; i <= V; ++i) {
            if (!visited[i]) {
                dfs(i, 1);
            }
        }
        bool flag = 1;
        for (int i = 1; i <= V; ++i) {
            for (int m: v[i]) {
                if (is_prime[i] == is_prime[m]) {
                    flag = 0;
                    goto hell;
                }
            }
        }
        hell:;
        cout << (flag ? "YES" : "NO") << "\n";
    }
    return 0;
}