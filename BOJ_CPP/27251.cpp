#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= min(i * i, (int) 100); ++j) {
            cout << "*";
        }
        if (i * i > 100) {
            cout << "...";
        }
        cout << "\n";
    }
    return 0;
}