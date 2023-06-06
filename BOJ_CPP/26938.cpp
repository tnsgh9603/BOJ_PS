#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int h, p;
    cin >> h >> p;
    for (int d = 1;; ++d) {
        double c1 = (d * h + 999) / 1000 * 5 + p * 60 * d * h / 100000.0;
        double c2 = 60 + p * 11 * d * h / 100000.0;
        if (c1 > c2) {
            cout << d;
            break;
        }
    }
    return 0;
}