#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, w, d, v;
    while (cin >> n >> w >> d >> v) {
        int ans = (w * (n - 1) * n / 2 - v) / d;
        cout << (ans ? ans : n) << "\n";
    }
    return 0;
}