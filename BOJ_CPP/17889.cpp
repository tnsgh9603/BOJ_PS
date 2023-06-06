#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a = 2018, b = 3;
    cin >> n;
    while (a < n) {
        b += 26;
        while (b >= 12) {
            ++a;
            b -= 12;
        }
    }
    cout << (a == n ? "yes" : "no");
    return 0;
}