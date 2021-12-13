#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[100'001], sum[100'001];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }
    int m;
    cin >> m;
    while (m--) {
        int s, e;
        cin >> s >> e;
        cout << sum[e + 1] - sum[s] << '\n';
    }
    return 0;
}