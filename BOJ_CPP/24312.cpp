#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min({abs(a + c - b - d), abs(a + b - c - d), abs(a + d - b - c), abs(a + b + c - d), abs(a + b + d - c),
                 abs(a + c + d - b), abs(b + c + d - a)});
    return 0;
}