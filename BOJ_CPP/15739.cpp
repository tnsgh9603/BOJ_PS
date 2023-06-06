#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int c[10001], s[201];

int main() {
    int n;
    bool flag = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int a;
            cin >> a;
            if (c[a] > 0) {
                flag = 0;
            } else {
                c[a] = 1;
            }
            s[i] += a;
            s[n + j] += a;
            if (i == j) {
                s[n * 2 + 1] += a;
            }
            if (n + 1 - i == j) {
                s[n * 2 + 2] += a;
            }
        }
    }
    for (int i = 1; i <= 2 * n + 2; ++i) {
        if (s[i] != (n * (n * n + 1)) / 2) {
            flag = 0;
            break;
        }
    }
    cout << (flag ? "TRUE" : "FALSE");
    return 0;
}