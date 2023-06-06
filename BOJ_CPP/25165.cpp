#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, a, d, r, c;
    cin >> n >> m >> a >> d >> r >> c;
    cout << (r == n && (d + 1) % 2 == n % 2 ? "YES!" : "NO...");
    return 0;
}