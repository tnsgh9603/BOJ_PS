#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c;
    cin >> a >> b >> c;
    cout << (b >= a ? 250 : 250 + (a - b) / c * 100 + bool(a - b >= 0 && (a - b) % c) * 100);
    return 0;
}