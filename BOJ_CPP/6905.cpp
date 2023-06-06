#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    fastio;
    int n, p = 1;
    while (cin >> n && n) {
        p += n;
        p = (p == 54 ? 19 : p == 90 ? 48 : p == 99 ? 77 : p == 9 ? 34 : p == 40 ? 64 : p == 67 ? 86 : p);
        p = (p > 100 ? p - n : p);
        cout << "You are now on square " << p << "\n";
        if (p == 100) {
            cout << "You Win!";
            return 0;
        }
    }
    cout << "You Quit!";
    return 0;
}