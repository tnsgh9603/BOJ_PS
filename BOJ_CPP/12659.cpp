#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int dp[21][501];
string temp = "welcome to code jam", s;

int f(int a, int b) {
    if (a >= 19 || b >= s.size()) {
        return 0;
    }
    if (dp[a][b] >= 0) {
        return dp[a][b];
    }
    int result = (temp[a] == s[b] ? (a == 18 ? 1 + f(a, b + 1) : f(a + 1, b + 1) + f(a, b + 1)) : f(a, b + 1));
    return dp[a][b] = result % 10000;
}

int main() {
    fastio;
    int n;
    cin >> n;
    getline(cin, s);
    for (int i = 1; i <= n; ++i) {
        getline(cin, s);
        memset(dp, -1, sizeof(dp));
        int answer = f(0, 0);
        cout << "Case #" << i << ": " << setw(4) << setfill('0') << answer << '\n';
    }
    return 0;
}