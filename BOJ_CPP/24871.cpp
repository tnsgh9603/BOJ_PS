#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long d, m, w, i, j, k, sum = 0;
    cin >> d >> m >> w >> i >> j >> k;
    sum += (k - 1) * m * d + (j - 1) * d + i - 1;
    cout << char('a' + sum % w);
    return 0;
}