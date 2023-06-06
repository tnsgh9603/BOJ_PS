#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    if (n == 1 or n == 3) {
        cout << -1;
    } else {
        if (n % 5 == 4) {
            cout << n / 5 + 2;
        } else if (n % 5 == 3) {
            cout << n / 5 + 3;
        } else if (n % 5 == 2) {
            cout << n / 5 + 1;
        } else if (n % 5 == 1) {
            cout << n / 5 + 2;
        } else {
            cout << n / 5;
        }
    }
    return 0;
}