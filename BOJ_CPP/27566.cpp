#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    m %= 2 * n;
    cout << (n / 2 < m and m < n * 3 / 2 ? "down" : "up");
    return 0;
}