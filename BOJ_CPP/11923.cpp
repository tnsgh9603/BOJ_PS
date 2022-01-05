#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int w[1001];

int main() {
    fastio;
    int n, c, ans = 0;;
    cin >> n >> c;
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }
    for (int i = 0; i < n; ++i) {
        int sum = 0, r = 0;
        for (int j = i; j < n; ++j) {
            if (sum + w[j] <= c) {
                ++r;
                sum += w[j];
            }
        }
        if (ans < r) {
            ans = r;
        }
    }
    cout << ans;
    return 0;
}