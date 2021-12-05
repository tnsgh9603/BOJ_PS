#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double n;
    cin >> n;
    cout << fixed << setprecision(6) << 6 * sqrt((4 * n / (6 * sqrt(3))));
    return 0;
}