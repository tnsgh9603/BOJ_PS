#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    long long b, A, n;
    cin >> N;
    while (N--) {
        b = 0;
        cin >> A;
        for (n = 1; A / n; n *= 10) {
            b += 9 * n;
        }
        cout << (A > b / 2 ? (long long) (b / 2) * (b / 2 + 1) : (long long) (b - A) * A) << "\n";
    }
    return 0;
}