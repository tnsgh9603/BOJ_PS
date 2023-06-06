#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    cout << (n + k - 2) * b << " " << (n - 1) * a;
    return 0;
}