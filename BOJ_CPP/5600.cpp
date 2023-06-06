#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[301];

int main() {
    fastio;
    int a, b, c, T, i, j, k, r;
    cin >> a >> b >> c >> T;
    vector<tuple<int, int, int>> v;
    fill(arr1, arr1 + 300, 2);
    while (T--) {
        cin >> i >> j >> k >> r;
        if (r) {
            arr1[i] = 1;
            arr1[j] = 1;
            arr1[k] = 1;
        } else {
            v.push_back({i, j, k});
        }
    }
    for (auto[x, y, z]: v) {
        if (arr1[x] == 1 and arr1[y] == 1) {
            arr1[z] = 0;
        } else if (arr1[y] == 1 and arr1[z] == 1) {
            arr1[x] = 0;
        } else if (arr1[x] == 1 and arr1[z] == 1) {
            arr1[y] = 0;
        }
    }
    for (int i = 1; i <= a + b + c; ++i) {
        cout << arr1[i] << "\n";
    }
    return 0;
}