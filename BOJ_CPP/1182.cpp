#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
vector<int> chicken, ans;
bool visited[21];
int n, k, cnt;

void dfs(int m, int sum) {
    if (m == n) {
        if (sum == k) {
            ++cnt;
        }
        return;
    }
    dfs(m + 1, sum);
    dfs(m + 1, sum + chicken[m]);
}

int main() {
    fastio;
    cin >> n >> k;
    chicken.resize(n);
    for (int &i: chicken) {
        cin >> i;
    }
    dfs(0, 0);
    cout << cnt + (k ? 0 : -1);
    return 0;
}