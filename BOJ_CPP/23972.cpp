#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long k, n;
    cin >> k >> n;
    cout << (n == 1 ? -1 : (k * n) % (n - 1) ? k * n / (n - 1) + 1 : k * n / (n - 1));
    return 0;
}