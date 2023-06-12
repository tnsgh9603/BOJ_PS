#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[4], mn[2][4], mx[2][4];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cin >> arr[j];
        }
        mn[1][1] = min(mn[0][1], mn[0][2]) + arr[1];
        mn[1][2] = min({mn[0][1], mn[0][2], mn[0][3]}) + arr[2];
        mn[1][3] = min(mn[0][2], mn[0][3]) + arr[3];
        mx[1][1] = max(mx[0][1], mx[0][2]) + arr[1];
        mx[1][2] = max({mx[0][1], mx[0][2], mx[0][3]}) + arr[2];
        mx[1][3] = max(mx[0][2], mx[0][3]) + arr[3];
        mn[0][1] = mn[1][1];
        mn[0][2] = mn[1][2];
        mn[0][3] = mn[1][3];
        mx[0][1] = mx[1][1];
        mx[0][2] = mx[1][2];
        mx[0][3] = mx[1][3];
    }
    cout << max({mx[0][1], mx[0][2], mx[0][3]}) << " " << min({mn[0][1], mn[0][2], mn[0][3]});
    return 0;
}