#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long a, b, c;
    cin >> a >> b >> c;
    cout << max({a * b + c, a * c + b, c * b + a});
    return 0;
}