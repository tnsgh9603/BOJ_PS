#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    for (int i = 1; i < 1001; ++i) {
        if (!(a % i + b % i)) {
            cout << i << " " << a / i << " " << b / i << "\n";
        }
    }
}
