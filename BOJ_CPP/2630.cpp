#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool arr[129][129];
int white, blue;

void dfs(int x, int y, int size) {
    bool all_zero = 1, all_one = 1;
    for (int i = x; i < x + size; ++i) {
        for (int j = y; j < y + size; ++j) {
            if (arr[i][j]) {
                all_zero = 0;
            } else {
                all_one = 0;
            }
        }
    }
    if (all_zero) {
        ++white;
    } else if (all_one) {
        ++blue;
    } else {
        dfs(x, y, size / 2);
        dfs(x + size / 2, y, size / 2);
        dfs(x, y + size / 2, size / 2);
        dfs(x + size / 2, y + size / 2, size / 2);
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
    cout << white << "\n" << blue;
    return 0;
}