#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

double f(int t, int v, int x) {
    return (x - 1) / (t * v) * (2 * t) + 1.0 * (x % (t * v) ? x % (t * v) : t * v) / v;
}

int main() {
    fastio;
    int t1, v1, t2, v2, x;
    cin >> t1 >> v1 >> t2 >> v2 >> x;
    double r1 = f(t1, v1, x), r2 = f(t2, v2, x);
    cout << (r1 == r2 ? "Draw" : r1 < r2 ? "First" : "Second");
    return 0;
}