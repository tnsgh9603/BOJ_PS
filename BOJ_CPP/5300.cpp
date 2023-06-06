#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
        if (i % 6 == 0 || i == n) {
            cout << "Go! ";
        }
    }
    return 0;
}