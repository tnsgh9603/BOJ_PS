#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long n;
    cin >> n;
    cout << (n < 16 ? int(sqrt(2 * n) + .5) : --n / 7 + 4);
    return 0;
}