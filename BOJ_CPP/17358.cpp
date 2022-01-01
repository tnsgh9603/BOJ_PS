#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    long long r = 1;
    cin >> n;
    for (int i = 1; i < n; i += 2) {
        r *= i;
        r %= 1000000007;
    }
    cout << r;
    return 0;
}