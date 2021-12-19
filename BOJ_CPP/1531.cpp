#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int s, x[101][101];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    while (n--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i = a; i <= c; ++i) {
            for (int j = b; j <= d; ++j) {
                ++x[i][j];
            }
        }
    }
    for (int i = 1; i < 101; ++i) {
        for (int j = 1; j < 101; ++j) {
            if (x[i][j] > m) {
                ++s;
            }
        }
    }
    cout << s;
    return 0;
}