#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        double a, b, c;
        cin >> a >> b >> c;
        cout << "$" << fixed << setprecision(2) << a * b * c << "\n";
    }
    return 0;
}