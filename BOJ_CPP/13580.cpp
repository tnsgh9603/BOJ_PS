#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == b || a == c || b == c || a + b == c || a + c == b || b + c == a ? "S" : "N");
    return 0;
}