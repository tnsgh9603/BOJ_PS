#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int x[4], y[4], a[4];

int f(int n) {
    return n * n;
}

int main() {
    fastio;
    for (int i = 0; i < 4; ++i) {
        cin >> x[i] >> y[i];
        a[i] = i;
    }
    double sum, mn = 99;
    for (int i = 0; i < 6; ++i) {
        sum = 0;
        for (int j = 0; j < 3; ++j) {
            sum += sqrt(f(x[a[j]] - x[a[j + 1]]) + f(y[a[j]] - y[a[j + 1]]));
        }
        mn = min(sum, mn);
        next_permutation(a + 1, a + 4);
    }
    cout << int(mn);
    return 0;
}