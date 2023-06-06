#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int g, p, t;
    cin >> g >> p >> t;
    cout << (g * p < g + (t * p) ? 1 : g * p > g + (t * p) ? 2 : 0);
    return 0;
}