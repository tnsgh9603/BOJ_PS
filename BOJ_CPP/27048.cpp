#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1001];

int main() {
    fastio;
    int n, p, c, x, e, cc, mx = 0;
    cin >> n >> p >> c;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        ++arr[x];
    }
    for (int i = 1; i < p; ++i) {
        cc = 0;
        for (e = i + 1; e <= p; ++e) {
            cc += arr[e - 1];
            if (cc > c) {
                break;
            }
        }
        --e;
        mx = max(mx, e - i);
    }
    cout << mx;
    return 0;
}