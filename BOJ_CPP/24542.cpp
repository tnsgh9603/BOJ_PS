#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, mp, parent[200'001], cnt[200'001];
const int MOD = 1e9 + 7;

void init() {
    for (int i = 1; i <= n; ++i) {
        parent[i] = i;
    }
}

int get_parent(int x) {
    if (parent[x] == x) {
        return x;
    }
    return parent[x] = get_parent(parent[x]);
}

void union_parent(int x, int y) {
    x = get_parent(x);
    y = get_parent(y);
    if (x != y) {
        parent[x] = y;
    }
}


int main() {
    fastio;
    cin >> n >> mp;
    init();
    for (int i = 0; i < mp; ++i) {
        int u, v;
        cin >> u >> v;
        union_parent(u, v);
    }
    for (int i = 1; i <= n; ++i) {
        ++cnt[get_parent(i)];
    }
    long long ans = 1;
    for (int i = 1; i <= n; ++i) {
        if (cnt[i]) {
            ans = (ans * cnt[i]) % MOD;
        }
    }
    cout << ans;
    return 0;
}