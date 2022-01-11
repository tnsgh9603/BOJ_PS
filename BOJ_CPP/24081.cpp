#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int cnt[2001];
bool visited[2001];
int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        ++cnt[k];
    }
    int ans = 0;
    for (int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        if(!visited[k]) {
            visited[k] = 1;
            ans += cnt[k];
        }
    }
    cout << ans;
    return 0;
}