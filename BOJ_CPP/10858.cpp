// koosaga님 코드를 참고하였습니다
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int dp[101][101][5001], r, arr, n, p[101], cst[101];
string typ[105];

int sol(int idx, int g, int s) {
    if (idx == n) {
        return 0;
    }
    if (~dp[idx][g][s]) {
        return dp[idx][g][s];
    }
    int ret = sol(idx + 1, g, s);
    if (s >= cst[idx]) {
        ret = max(ret, 1 + sol(idx + 1, g, s - cst[idx]));
    }
    if (g > 0 && (typ[idx][1] != 'e' || s < cst[idx])) {
        int resi = (r - cst[idx]);
        if (typ[idx][1] == 'r') {
            resi /= p[idx];
        }
        if (typ[idx][1] == 'e') {
            resi = (resi + p[idx] - 1) / p[idx];
        }
        if (typ[idx][1] == 'o') {
            if ((resi % p[idx]) * 2 >= p[idx]) {
                resi = resi / p[idx] + 1;
            } else {
                resi = resi / p[idx];
            }
        }
        ret = max(ret, 1 + sol(idx + 1, g - 1, s + resi * p[idx]));
    }
    return dp[idx][g][s] = ret;
}


int main() {
    fastio;
    cin >> r >> arr >> n;
    for (int i = 0; i < n; ++i) {
        cin >> typ[i] >> p[i] >> cst[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << sol(0, arr, 0);
    return 0;
}