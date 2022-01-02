#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1001];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; ++i) {
        if (arr[i] != i) {
            int j = i;
            while (arr[++j] != i);
            v.push_back({i, j});
            reverse(arr + i, arr + 1 + j);
        }
    }
    cout << v.size() << "\n";
    for (auto x: v) {
        cout << x.first << " " << x.second << "\n";
    }
    return 0;
}