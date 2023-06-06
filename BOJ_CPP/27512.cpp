#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    cout << n * m + (n % 2 == 0 || m % 2 == 0 ? 0 : -1);
    return 0;
}