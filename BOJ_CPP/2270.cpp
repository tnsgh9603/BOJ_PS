#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
#define MOD 1000000

int pre[100'001], pos[100'001], ans;

void preprocessing(int n) {
    pre[0] = 1;
    for (int i = 1; i <= n; ++i) {
        pre[i] = (pre[i - 1] * 2) % MOD;
    }
}

void hanoi(int disc, int to) {
    if (disc == 0) {
        return;
    }
    int now = pos[disc], sub;
    for (int i = 1; i <= 3; ++i) {
        if (now != i && to != i) {
            sub = i;
            break;
        }
    }
    if (now == to) {
        hanoi(disc - 1, to);
    } else {
        hanoi(disc - 1, sub);
        ans = (ans + pre[disc - 1]) % MOD;
    }
}

int main() {
    fastio;
    int n, a, b, c, x;
    cin >> n >> a >> b >> c;
    for (int i = 0; i < a; ++i) {
        cin >> x;
        pos[x] = 1;
    }
    for (int i = 0; i < b; ++i) {
        cin >> x;
        pos[x] = 2;
    }
    for (int i = 0; i < c; ++i) {
        cin >> x;
        pos[x] = 3;
    }
    preprocessing(n);
    hanoi(n, pos[n]);
    cout << pos[n] << "\n" << ans;
    return 0;
}