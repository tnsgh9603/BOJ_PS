#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[10001];
vector<int> v[10001];

int main() {
    fastio;
    int w, s, x, y;
    cin >> w >> s >> x >> y;
    for (int i = 1; i <= w; ++i) {
        v1[i].resize(x);
        for (int j = 0; j < x; ++j) {
            cin >> v[i][j];
        }
    }
    for (int i = 1; i <= s; ++i) {
        for (int j = 0; j < x; ++j) {
            int p;
            cin >> p;
            arr[j] = max(arr[j], p);
        }
    }
    for (int i = 1; i <= w; ++i) {
        for (int j = 0; j < x; ++j) {
            cout << v[i][j] - max(0, (arr[j] - y + v[i][j])) << ' ';
        }
        cout << "\n";
    }
    return 0;
}