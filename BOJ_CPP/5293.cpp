#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cout << n / m + n % m << " ";
        n -= n / m + n % m;
    }
    cout << "\n" << n;
    return 0;
}