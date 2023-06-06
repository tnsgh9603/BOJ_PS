#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int xmin, ymin, xmax, ymax, j, l;
bool is_prime[201][201];

int main() {
    fastio;
    int i;
    string s;
    cin >> i >> s;
    xmin = ymin = xmax = ymax = i = j = 50;
    is_prime[i][j] = 1;
    for (char c: s) {
        switch (c) {
            case 'L':
                l = l > 0 ? l - 1 : 3;
                break;
            case 'R':
                l = (l + 1) % 4;
                break;
            case 'F':
                i += "2101"[l] - '1';
                j += "1012"[l] - '1';
        }
        is_prime[i][j] = 1;
        xmin = min(i, xmin);
        xmax = max(i, xmax);
        ymin = min(j, ymin);
        ymax = max(j, ymax);
    }
    for (i = xmin; i <= xmax; ++i, cout << '\n') {
        for (j = ymin; j <= ymax; ++j) {
            cout << (is_prime[i][j] ? '.' : '#');
        }
    }
    return 0;
}