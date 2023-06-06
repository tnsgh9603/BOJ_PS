#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int is_prime[3001][3001];

int main() {
    fastio;
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> is_prime[i][j];
        }
    }
    while (q--) {
        int tmp;
        cin >> tmp;
        if (tmp) {
            int x, y;
            cin >> x >> y;
            swap(is_prime[x], is_prime[y]);
        } else {
            int x, y, c;
            cin >> x >> y >> c;
            is_prime[x][y] = c;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << is_prime[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}