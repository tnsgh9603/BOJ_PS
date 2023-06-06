#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        int mn = INT_MAX, ans = 0, a, b;
        for (int i = 1; i <= int(sqrt(n)); ++i) {
            if(n % i == 0 and mn > i + n / i) {
                a = i, b = n / i;
                mn = min(mn, i + b);
                ans = (i + b) * 2;
            }
        }
        cout << "Minimum perimeter is " << ans << " with dimensions " << a << " x " << b << "\n";
    }
    return 0;
}