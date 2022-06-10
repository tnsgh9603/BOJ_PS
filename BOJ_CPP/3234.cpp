#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int x, y, n;
    string path;
    cin >> x >> y >> n >> path;
    int nx = 0, ny = 0, temp = 0;
    for (int i = 0; i <= n; ++i) {
        if (abs(nx - x) + abs(ny - y) <= 1 || (abs(nx - x) == 1 && abs(ny - y) == 1)) {
            cout << i << "\n";
            temp = 1;
        }
        if (path[i] == 'I') {
            ++nx;
        } else if (path[i] == 'S') {
            ++ny;
        } else if (path[i] == 'Z') {
            --nx;
        } else if (path[i] == 'J') {
            --ny;
        }
    }
    if (!temp) {
        cout << -1;
    }
    return 0;
}