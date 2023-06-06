#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N, M, a, b;
    cin >> N;
    M = N = N - 2;
    cin >> a;
    while (M--) {
        cin >> b;
    }
    cin >> b;
    while (--N) {
        --(a > b ? a : b);
    }
    cout << max(a, b) - 1;
    return 0;
}