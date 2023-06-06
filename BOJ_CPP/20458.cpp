#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long k, x, y;
    cin >> k >> x >> y;
    cout << y / x * x + (y % x ? x : 0);
    return 0;
}