#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[4], n, mx = - INT_MAX, mn = INT_MAX;
vector<int> v1;

void dfs(int k, int sum) {
    if (k == n) {
        mx = max(mx, sum);
        mn = min(mn, sum);
        return;
    }
    for (int i = 0; i < 4; ++i) {
        if (arr[i]) {
            --arr[i];
            // +
            if (i == 0) {
                dfs(k + 1, sum + v1[k]);
            }
                // -
            else if (i == 1) {
                dfs(k + 1, sum - v1[k]);
            }
                // *
            else if (i == 2) {
                dfs(k + 1, sum * v1[k]);
            }
                // /
            else if (i == 3 and v1[k] != 0) {
                dfs(k + 1, sum / v1[k]);
            }
            ++arr[i];
        }
    }
}

int main() {
    fastio;
    cin >> n;
    v1.resize(n);
    for (int &i: v1) {
        cin >> i;
    }
    for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
    }
    dfs(1, v1[0]);
    cout << mx << "\n" << mn;
    return 0;
}