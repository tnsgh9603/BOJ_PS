#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<tuple<int, char, int>> v(n);
    for (auto &i: v) {
        int a, c;
        char b;
        cin >> a >> b >> c;
        i = {a, b, c};
    }
    int cur;
    cin >> cur;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            auto[x, y, z] = v[j];
            if (x == cur) {
                if (y == 'L') {
                    cur -= z;
                } else {
                    cur += z;
                }
                break;
            }
        }
    }
    cout << cur;
    return 0;
}