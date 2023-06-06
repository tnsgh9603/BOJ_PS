#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n, string(n, '.'));
    int mid = n / 2;
    int p, q;
    cin >> p >> q;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (abs(i - mid) + abs(j - mid) >= p && abs(i - mid) + abs(j - mid) <= q) {
                v[i][j] = '*';
            }
        }
    }
    for (auto &i: v) {
        cout << i << "\n";
    }
    return 0;
}