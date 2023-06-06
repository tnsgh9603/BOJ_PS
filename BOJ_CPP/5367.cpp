#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cout << "|";
        if (i == 1 || i == n) {
            for (int j = 2; j <= n - 1; ++j) {
                cout << "-";
            }
        } else {
            for (int j = 2; j <= n - 1; ++j) {
                cout << (i == j || i == n - j + 1 ? '*' : ' ');
            }
        }
        cout << "|\n";
    }
    return 0;
}