#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, x, y;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> m;
            if (m == 1) {
                v.push_back({i, j});
            } else if (m == 2) {
                x = i;
                y = j;
            }
        }
    }
    if(v.empty()) {
        cout << "Lena";
        return 0;
    }
    for (int i = 0; i < v.size(); ++i) {
        if ((abs(v[i].first - x) + abs(v[i].second - y)) % 2 == 0) {
            cout << "Kiriya";
            return 0;
        }
    }
    cout << "Lena";
    return 0;
}