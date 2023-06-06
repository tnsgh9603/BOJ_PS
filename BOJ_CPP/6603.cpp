#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n;
vector<int> chicken(n), ans;
bool visited[13];

void dfs(int m) {
    if (m == 6) {
        for (int i = 0; i < 6; ++i) {
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (!visited[i] and (ans.empty() or ans.back() < chicken[i])) {
            ans.push_back(chicken[i]);
            visited[i] = 1;
            dfs(m + 1);
            ans.pop_back();
            visited[i] = 0;
        }
    }
}

int main() {
    fastio;
    while (cin >> n && n) {
        chicken.clear();
        chicken.resize(n);
        ans.clear();
        for (int &i : chicken) {
            cin >> i;
        }
        dfs(0);
        cout << "\n";
    }
    return 0;
}