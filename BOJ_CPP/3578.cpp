#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    if (n == 0) {
        cout << 1;
    } else if (n == 1) {
        cout << 0;
    } else if (n & 1) {
        cout << 4;
        --n;
        for (int i = 0; i < n / 2; ++i) {
            cout << 8;
        }
    } else {
        for (int i = 0; i < n / 2; ++i) {
            cout << 8;
        }
    }
    return 0;
}