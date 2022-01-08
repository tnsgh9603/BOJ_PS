#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[15001];

int main() {
    fastio;
    int n, m, s, e, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    s = 0;
    e = n - 1;
    sort(arr, arr + n);
    while (s < e) {
        if (arr[s] + arr[e] == m) {
            ++ans;
            --e;
            ++s;
        }
        if (arr[s] + arr[e] > m) {
            --e;
        }
        if (arr[s] + arr[e] < m) {
            ++s;
        }
    }
    cout << ans;
    return 0;
}