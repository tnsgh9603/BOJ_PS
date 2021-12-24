#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    if (a % 3 != b % 3) {
        cout << -1;
    } else {
        cout << a / 3 << " " << a % 3 << " " << b / 3;
    }
    return 0;
}