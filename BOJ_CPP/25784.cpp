#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == b + c || b == a + c || c == a + b ? 1 : a == b * c || b == a * c || c == a * b ? 2 : 3);
    return 0;
}