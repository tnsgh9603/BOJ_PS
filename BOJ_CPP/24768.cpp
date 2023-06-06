#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    while (cin >> a >> b && !(a == 0 && b == 0)) {
        if (a + b == 13) {
            cout << "Never speak again.\n";
        } else if (a < b) {
            cout << "Left beehind.\n";
        } else if (a == b) {
            cout << "Undecided.\n";
        } else {
            cout << "To the convention.\n";
        }
    }
    return 0;
}