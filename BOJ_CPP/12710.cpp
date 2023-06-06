#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int k, n;
string str;
int adj[20][40];

int solve(int s, int e) {
    int ans = 0;
    for (int i = 0; str[i + e]; i += k) {
        if (str[i + s] != str[i + e]) {
            ++ans;
        }
    }
    return ans;
}

int dp[1 << 16][16], s;

int f(int visited, int depth, int pivotted) {
    if (~dp[visited][pivotted]) {
        return dp[visited][pivotted];
    }
    if (visited == (1 << n) - 1) {
        return adj[pivotted][s + n];
    }
    else {
        int r = 987654321, t;
        for (int i = 0; i < n; ++i) {
            if (visited & (1 << i)) {
                continue;
            }
            t = f(visited | (1 << i), depth + 1, i);
            if (t + adj[pivotted][i] < r) {
                r = t + adj[pivotted][i];
            }
        }
        return dp[visited][pivotted] = r;
    }
}

int tsp(int _n) {
    n = _n;
    int ret = 1e9;
    for (int i = 0; i < n; ++i) {
        memset(dp, -1, sizeof(dp));
        s = i;
        ret = min(ret, f(1 << i, 0, i));
    }
    return ret;
}

int main() {
    fastio;
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        cin >> k >> str;
        n = str.length();
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < k * 2; ++j) {
                if (i != j) {
                    adj[i][j] = solve(i, j);
                }
            }
        }
        cout << "Case #" << i << ": " << tsp(k) + 1 << "\n";
    }
    return 0;
}
