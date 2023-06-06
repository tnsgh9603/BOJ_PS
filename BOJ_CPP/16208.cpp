#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += (sum - v[i]) * v[i];
        sum -= v[i];
    }
    cout << ans;
    return 0;
}