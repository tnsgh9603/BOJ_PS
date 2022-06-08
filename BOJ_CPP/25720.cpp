#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a;
    cin >> a;
    int a2 = a / 100 * 100;
    cout << (a <= 99 ? 99 : a % 100 < 49 ? a2 - 1 : a2 + 99);
    return 0;
}