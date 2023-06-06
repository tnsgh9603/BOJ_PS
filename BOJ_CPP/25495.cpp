#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N, p = 0, b = 0, c = 0;
    cin >> N;
    while (N--) {
        int a;
        cin >> a;
        b = (a == p ? 2 * b : 2);
        c += b;
        p = a;
        if (c >= 100) {
            b = c = p = 0;
        }
    }
    cout << c;
    return 0;
}