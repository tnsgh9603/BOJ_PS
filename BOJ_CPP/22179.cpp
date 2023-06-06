#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int h, m;
    scanf("%d:%d", &h, &m);
    int n, now = h * 60 + m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int h1, m1, h2, m2, t;
        scanf("%d:%d %d:%d %d", &h1, &m1, &h2, &m2, &t);
        int l = h1 * 60 + m1, r = h2 * 60 + m2 - t;
        now = max(now, l);
        if (now > r) {
            cout << "No";
            return 0;
        }
        now += t;
    }
    if (now > 1440) {
        cout << "No";
    } else {
        cout << "Yes\n";
        printf("%02d:%02d\n", now / 60, now % 60);
    }
    return 0;
}