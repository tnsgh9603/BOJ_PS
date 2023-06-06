#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    cout << ((c > a || c == a && b <= 0) && (c - a) * n >= b ? "1" : "0");
    return 0;
}