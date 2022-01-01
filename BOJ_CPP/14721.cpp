#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    ll mn = INT_MAX, ans1, ans2, sum;
    for (int a = 1; a <= 100; ++a) {
        for (int b = 1; b <= 100; ++b) {
            sum = 0;
            // y = ax + b;
            for (int i = 0; i < n; ++i) {
                ll temp = abs(v[i].second - (a * v[i].first + b));
                sum += temp * temp;
            }
            if (sum < mn) {
                mn = sum;
                ans1 = a;
                ans2 = b;
            }
        }
    }
    cout << ans1 << " " << ans2;
    return 0;
}