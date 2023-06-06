#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[100'001];

int main() {
    fastio;
    int n, cnt = 0, ans = -INT_MAX;
    cin >> n;
    for (int i = 0; i < 2 * n; ++i) {
        int m;
        cin >> m;
        ++cnt;
        ++arr1[m];
        if (arr1[m] == 2) {
            cnt -= 2;
        }
        ans = max(cnt, ans);
    }
    cout << ans;
    return 0;
}