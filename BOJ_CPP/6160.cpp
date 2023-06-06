#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

struct st {
    int a, b, id;
} c[50001];
int mx, mi;

bool cmp(st p, st q) {
    return p.a > q.a;
}

int main() {
    fastio;
    int i, n, k;
    cin >> n >> k;
    for (i = 1; i <= n; ++i) {
        cin >> c[i].a >> c[i].b;
        c[i].id = i;
    }
    sort(c + 1, c + n + 1, cmp);
    for (i = 1; i <= k; ++i) {
        if (c[i].b > mx) {
            mx = c[i].b, mi = c[i].id;
        }
    }
    cout << mi;
    return 0;
}