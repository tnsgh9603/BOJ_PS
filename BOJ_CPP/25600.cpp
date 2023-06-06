#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long n, a, b, c, mx = -LLONG_MAX;
    cin >> n;
    while (n--) {
        long long sum = 0;
        cin >> a >> b >> c;
        sum = (a == b + c ? 2 : 1) * a * (b + c);
        mx = max(sum, mx);
    }
    cout << mx;
    return 0;
}