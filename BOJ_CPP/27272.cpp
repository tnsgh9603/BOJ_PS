#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max({a * b + c * d, a * c + b * d, a * d + b * c});
    return 0;
}