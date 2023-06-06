#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector<int> adj[100'001];
int num[100'001], N, K, ans;
bool visited[100'001], Complex[100'001];

void dfs(int n) {
    visited[n] = 1;
    int cnt = 0;
    for (int now: adj[n]) {
        if (visited[now]) {
            continue;
        }
        dfs(now);
        if (num[now]) {
            ++cnt;
        }
        num[n] += num[now];
    }
    // 해당 번호의 건물이 단지면 ++num
    if (Complex[n]) {
        ++num[n];
    }
    // 자식들 중 단지가 1개더라도 부모쪽에 단지가 있다면 good place가 될 수 있다.
    if (K > num[n]) {
        ++cnt;
    }
    // 자식들 중 단지가 2개 이상이면 -> 그 단지들 사이의 중단점이 될 수 있으므로
    // + 자기 자신이 단지면 무조건 good place
    if (cnt >= 2 || Complex[n]) {
        ++ans;
    }
}

int main() {
    fastio;
    cin >> N >> K;
    for (int i = 1; i < N; ++i) {
        int u, v, l;
        cin >> u >> v >> l;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < K; ++i) {
        int x;
        cin >> x;
        Complex[x] = 1;
    }
    dfs(1);
    cout << ans;
    return 0;
}