#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, f;
    cin >> n >> f;
    int idx;
    double mn = INT_MAX;
    for (int i = 1; i <= n; ++i) {
        double x, v;
        cin >> x >> v;
        if ((f - x) / v < mn) {
            mn = (f - x) / v;
            idx = i;
        }
    }
    cout << idx;
    return 0;
}