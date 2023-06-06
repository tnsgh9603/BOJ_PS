#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int l[2001], r[2001];

int main() {
    fastio;
    int n, m, c = 0;
    cin >> n >> m;
    for (int i = 1; i <= n + m; ++i) {
        cin >> l[i] >> r[i];
    }
    int A = 0, B = 0, flag = -1, a = 1, b = n + 1;
    while (1) {
        if (a <= n && !r[a]) {
            ++a;
        }
        if (b <= n + m && !r[b]) {
            ++b;
        }
        if (a > n && b > n + m) {
            break;
        }
        if (a <= n) {
            --r[a];
            A += l[a];
        }
        if (b <= n + m) {
            --r[b];
            B += l[b];
        }
        if (flag != 0 && A > B) {
            ++c;
            flag = 0;
        }
        if (flag != 1 && A < B) {
            ++c;
            flag = 1;
        }
    }
    cout << max(0, c - 1);
    return 0;
}