#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (a * b == c * d ? 'E' : a * b > c * d ? 'M' : 'P');
    return 0;
}