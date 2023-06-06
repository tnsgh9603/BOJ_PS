#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long q, cnt;
    cin >> q;
    for (long long i = 1; q >= i * i; ++i) {
        ++cnt;
        q -= i * i;
    }
    cout << cnt;
    return 0;
}