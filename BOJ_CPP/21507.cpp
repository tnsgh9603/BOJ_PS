#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long a, b, c, d, sum;
    cin >> a >> b >> c >> d;
    sum = min(a, b) + min(c, d);
    cout << (long long) (sqrtl(sum));
    return 0;
}