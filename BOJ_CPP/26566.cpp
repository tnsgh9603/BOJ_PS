#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (a / b < acos(-1) * c * c / d ? "Whole" : "Slice of") << " pizza\n";
    }
    return 0;
}