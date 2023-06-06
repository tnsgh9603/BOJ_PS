#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool visited[401];
map<string, int> mp;
vector<int> v[401];

void dfs(int u) {
    visited[u] = 1;
    for (int v: v[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    fastio;
    int n, ID = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        string s;
        int m;
        cin >> s >> m;
        if (!mp.count(s)) {
            mp.insert({s, ++ID});
        }
        int cid = mp.at(s);
        while (m--) {
            cin >> s;
            if (!mp.count(s)) {
                mp.insert({s, ++ID});
            }
            v1[mp.at(s)].emplace_back(cid);
        }
    }
    for (auto p: mp) {
        if (visited[p.second]) {
            continue;
        }
        string s = p.first;
        int pos = find(s.begin(), s.end(), ':') - s.begin();
        string ns = s.substr(pos + 2);
        if (ns == "PROGRAM") {
            dfs(p.second);
        }
    }
    int ret = 0;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            ++ret;
        }
    }
    cout << ret;
    return 0;
}