#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[2001][2001], sc[2001];

int main() {
    fastio;
    int n, t, p;
    cin >> n >> t >> p;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= t; ++j) {
            cin >> arr[i][j];
            if (arr[i][j]) {
                --sc[j];
            }
        }
    }
    for (int i = 1; i <= t; ++i) {
        sc[i] += n;
    }
    int s = 0, c = 0;
    for (int i = 1; i <= t; ++i) {
        if (arr[p][i]) {
            s += sc[i];
            ++c;
        }
    }
    int res = 1;
    for (int i = 1; i <= n; ++i) {
        if (i != p) {
            int x = 0, y = 0;
            for (int j = 1; j <= t; ++j) {
                if (arr[i][j]) {
                    x += sc[j];
                    ++y;
                }
            }
            if (x > s || (x == s && y > c) || (x == s && y == c && i < p)) {
                ++res;
            }
        }
    }
    cout << s << " " << res;
    return 0;
}