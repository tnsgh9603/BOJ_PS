#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[21][21], mn = INT_MAX, n;
bool visited[21];

void dfs(int k, int pos) {
    if (k == n / 2) {
        int sum1 = 0, sum2 = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                if (!visited[i] and !visited[j]) {
                    sum2 += arr[i][j] + arr[j][i];
                } else if (visited[i] and visited[j]) {
                    sum1 += arr[i][j] + arr[j][i];
                }
            }
        }
        mn = min(mn, abs(sum1 - sum2));
        if (mn == 0) {
            cout << 0;
            exit(0);
        }
        return;
    }
    for (int i = pos; i <= n; ++i) {
        if (!visited[i]) {
            visited[i] = 1;
            dfs(k + 1, i + 1);
            visited[i] = 0;
        }
    }
}

int main() {
    fastio;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> arr[i][j];
        }
    }
    dfs(0, 1);
    cout << mn;
    return 0;
}