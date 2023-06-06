#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool upper[200'001];

int main() {
    fastio;
    int n, q, cnt = 0;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) {
        if(i % 10 == 1 or i % 10 == 4 or i % 10 == 7) {
            upper[i] = 1;
            ++cnt;
        }
    }
    for (int i = 1; i <= q; ++i) {
        int m;
        cin >> m;
        if (upper[m]) {
            upper[m] = 0;
            --cnt;
        } else {
            upper[m] = 1;
            ++cnt;
        }
        cout << cnt << "\n";
    }
    return 0;
}