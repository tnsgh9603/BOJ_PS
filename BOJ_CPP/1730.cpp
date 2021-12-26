#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool r[15][15], c[15][15];
int main() {
    fastio;
    int n, x = 0, y = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length(); ++i) {
        switch (s[i]) {
            case 'U':
                if (y - 1 >= 0) {
                    c[y][x] = 1;
                    c[y - 1][x] = 1;
                    --y;
                }
                break;
            case 'D':
                if (y + 1 < n) {
                    c[y][x] = 1;
                    c[y + 1][x] = 1;
                    ++y;
                }
                break;
            case 'L':
                if (x - 1 >= 0) {
                    r[y][x] = 1;
                    r[y][x - 1] = 1;
                    --x;
                }
                break;
            case 'R':
                if (x + 1 < n) {
                    r[y][x] = 1;
                    r[y][x + 1] = 1;
                    ++x;
                }
                break;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (r[i][j] && c[i][j]) {
                cout << '+';
            }
            else if (r[i][j]) {
                cout << '-';
            }
            else if (c[i][j]) {
                cout << '|';
            }
            else {
                cout << '.';
            }
        }
        if (i < (n - 1)) {
            cout << "\n";
        }
    }
    return 0;
}