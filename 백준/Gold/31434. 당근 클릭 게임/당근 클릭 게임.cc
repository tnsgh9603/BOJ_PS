#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

// dp[a][b] -> a초가 지나고 나서 s값이 b일 때, 소지할 수 있는 최대 당근 수
int dp[101][10001];
// (a초 째 경과, s, 현재 당근 량)
vector<tuple<double, double, double>> v;

int main()
{
    fastio;
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    int mx = 0, ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
        mx = max(mx, b);
    }
    fill(&dp[0][0], &dp[100][10001], -1);
    dp[0][1] = 0;
    mx = mx * k + 1;
    for (int i = 0; i <= k; ++i)
    {
        for (int j = 0; j < mx; ++j)
        {
            ans = max(ans, dp[i][j]);
            if (dp[i][j] == -1 || i == k)
            {
                continue;
            }
            dp[i + 1][j] = max(dp[i][j] + j, dp[i + 1][j]);
            for (int k = 0; k < n; ++k)
            {
                auto [a, b] = v[k];
                dp[i + 1][j + b] = max(dp[i][j] - a, dp[i + 1][j + b]);
            }
        }
    }
    cout << ans;
    return 0;
}