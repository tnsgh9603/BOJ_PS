#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long q = a - (a % c), e = b - (b % c), temp = a * b, mn = LLONG_MAX, ans = c * c;
        for(long long i = q; i <= q + 2 * c; i += c) {
            for(long long j = e; j <= e + 2 * c; j += c) {
                if(i * j != 0 && abs(temp - i * j) < mn) {
                    mn = abs(temp - i * j);
                    ans = i * j;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}