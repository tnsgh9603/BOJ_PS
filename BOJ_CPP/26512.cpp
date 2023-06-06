#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

string binary(int n) {
    if (n < 0) {
        string b = binary(-n - 1);
        for (char &c: b) {
            c = (char) ((int) '0' + '1' - c);
        }
        return b;
    }
    string b;
    for (int i = 0; i < 8; ++i) {
        b += (char) ((n & 1) + '0');
        n >>= 1;
    }
    reverse(b.begin(), b.end());
    return b;
}

int main() {
    fastio;
    int x, y;
    while (cin >> x >> y && x) {
        cout << x << " = " << binary(x) << "\n";
        cout << y << " = " << binary(y) << "\n";
        cout << -x << " = " << binary(-x) << "\n";
        cout << -y << " = " << binary(-y) << "\n";
        cout << x - y << " = " << binary(x - y) << "\n\n";
    }
    return 0;
}