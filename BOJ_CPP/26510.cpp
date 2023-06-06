#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    while (cin >> n) {
        for (int i = 0; i < n - 1; ++i) {
            cout << string(i, ' ') << "*" << string(2 * (n - 1 - i) - 1, ' ') << "*\n";
        }
        cout << string(n - 1, ' ') << "*\n";
    }
    return 0;
}