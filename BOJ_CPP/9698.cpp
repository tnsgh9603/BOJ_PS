#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int a, b;
        cin >> a >> b;
        if (b < 45) {
            --a;
            b += 60;
        }
        b -= 45;
        if (a < 0) {
            a += 24;
        }
        cout << "Case #" << i << ": " << a << " " << b << "\n";
    }
    return 0;
}