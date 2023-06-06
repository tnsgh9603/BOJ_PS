#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    cout << 2 * a - b / 2 << " " << (b - 2 * a) / 2;
    return 0;
}