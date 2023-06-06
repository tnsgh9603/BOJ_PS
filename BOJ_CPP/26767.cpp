#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 11 == 0 and i % 7 == 0) {
            cout << "Wiwat!";
        } else if (i % 11 == 0) {
            cout << "Super!";
        } else if (i % 7 == 0) {
            cout << "Hurra!";
        } else {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}