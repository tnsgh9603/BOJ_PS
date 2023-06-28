#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int visited[2'000'001];

int main() {
    fastio;
    int n, m, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        visited[v[i]] = i;
    }
    cin >> m;
    for (int i = 0; i < n; ++i) {
        int now = v[i];
        if (m - now >= 0 and visited[m - now] > i) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}