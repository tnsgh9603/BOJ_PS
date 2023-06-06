#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1025][1025];

int dfs(int x, int y, int size) {
    vector<int> v;
    if (size == 2) {
        for (int i = x; i <= x + 1; ++i) {
            for (int j = y; j <= y + 1; ++j) {
                v.push_back(arr[i][j]);
            }
        }
    } else {
        v.push_back(dfs(x, y, size / 2));
        v.push_back(dfs(x + size / 2, y, size / 2));
        v.push_back(dfs(x, y + size / 2, size / 2));
        v.push_back(dfs(x + size / 2, y + size / 2, size / 2));
    }
    sort(v.rbegin(), v.rend());
    return v[1];
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
    cout << dfs(1, 1, n);
    return 0;
}