#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[17][17];
bool visited[17];

void dfs(int n, int cost) {

}

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> arr[i][j];
        }
    }
    dfs(1, 0);
    return 0;
}