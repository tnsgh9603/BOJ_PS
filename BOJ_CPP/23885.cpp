#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, st_x, st_y, en_x, en_y;
    cin >> n >> m >> st_x >> st_y >> en_x >> en_y;
    if ((n == 1 || m == 1) && (st_x != en_x || st_y != en_y)) {
        cout << "NO";
    }
    else if (abs(en_x - st_x) % 2 != abs(en_y - st_y) % 2) {
        cout << "NO";
    }
    else {
        cout << "YES";
    } 
    return 0;
}