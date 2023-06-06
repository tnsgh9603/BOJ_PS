#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int x, l, r;
    cin >> x >> l >> r;
    vector<int> v;
    for (int y = l; y <= r; ++y) {
        if (x != y && is_prime(gcd(x, y))) {
            v.push_back(y);
        }
    }
    cout << v.size() << "\n";
    for (int y: v) {
        cout << y << " ";
    }
    return 0;
}