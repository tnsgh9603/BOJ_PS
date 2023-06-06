#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long k, a, b, c, d;
    cin >> k >> a >> b >> c >> d;
    if (a * k + b == c * k + d) {
        cout << "Yes " << a * k + b;
    } else {
        cout << "No";
    }
    return 0;
}