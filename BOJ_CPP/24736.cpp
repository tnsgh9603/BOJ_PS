#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    for (int i = 0; i < 2; ++i) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        cout << a * 6 + b * 3 + c * 2 + d + e * 2 << " ";
    }
    return 0;
}