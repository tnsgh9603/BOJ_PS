#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, k;
    cin >> n >> m >> k;
    cout << ((m + k - 4) % n + n) % n + 1;
    return 0;
}