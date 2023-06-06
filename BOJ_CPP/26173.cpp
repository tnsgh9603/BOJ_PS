#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double n;
    cin >> n;
    cout << fixed << setprecision(10) << 2 * sqrt(n / acos(-1));
    return 0;
}