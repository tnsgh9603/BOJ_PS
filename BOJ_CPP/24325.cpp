#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        double a, b;
        cin >> a >> b;
        int x = (int) (b - a);
        cout << x / 50 << "-$50, ";
        x %= 50;
        cout << x / 20 << "-$20, ";
        x %= 20;
        cout << x / 10 << "-$10, ";
        x %= 10;
        cout << x / 5 << "-$5, ";
        x %= 5;
        cout << x << "-$1\n";
    }
    return 0;
}
