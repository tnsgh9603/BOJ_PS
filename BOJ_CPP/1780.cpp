#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[2188][2188], ans1, ans2, ans3;

void dfs(int x, int y, int size) {
    bool all_zero = 1, all_one = 1, all_minus_one = 1;
    for (int i = x; i < x + size; ++i) {
        for (int j = y; j < y + size; ++j) {
            if (arr[i][j] == 1) {
                all_zero = 0;
                all_minus_one = 0;
            } else if (arr[i][j] == -1) {
                all_one = 0;
                all_zero = 0;
            } else {
                all_one = 0;
                all_minus_one = 0;
            }
        }
    }
    if (all_minus_one) {
        ++ans1;
    } else if (all_zero) {
        ++ans2;
    } else if (all_one) {
        ++ans3;
    } else {
        dfs(x, y, size / 3);
        dfs(x, y + size / 3, size / 3);
        dfs(x, y + size / 3 * 2, size / 3);
        dfs(x + size / 3, y, size / 3);
        dfs(x + size / 3, y + size / 3, size / 3);
        dfs(x + size / 3, y + size / 3 * 2, size / 3);
        dfs(x + size / 3 * 2, y, size / 3);
        dfs(x + size / 3 * 2, y + size / 3, size / 3);
        dfs(x + size / 3 * 2, y + size / 3 * 2, size / 3);
    }
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
    dfs(1, 1, n);
    cout << ans1 << "\n" << ans2 << "\n" << ans3;
    return 0;
}