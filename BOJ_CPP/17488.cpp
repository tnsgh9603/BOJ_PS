#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, m, c[1001][1001], s[1001], a;
bool st[1001][1001];

void sol() {
    for (int i = 0; i < n; ++i)
        while (cin >> a) {
            if (a-- < 0) {
                break;
            }
            c[a][++c[a][0]] = i;
        }
    for (int i = 0; i < m; ++i) {
        if (s[i] >= c[i][0]) {
            s[i] -= c[i][0];
            while (c[i][0]) st[c[i][c[i][0]--]][i] = 1;
        }
    }
}

int main() {
    fastio;
    cin >> n >> m;
    for (int i; i < m; cin >> s[i++]);
    sol();
    sol();
    for (int i = 0; i < n; cout << (a ? "\n" : "망했어요\n"), ++i) {
        for (int j = a = 0; j < 1000; ++j) {
            if (st[i][j]) {
                cout << j + 1 << " ";
                a = 1;
            }
        }
    }
    return 0;
}