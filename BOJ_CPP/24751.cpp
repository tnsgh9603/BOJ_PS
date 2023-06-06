#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double n;
    cin >> n;
    cout << fixed << setprecision(3) << 100 / n << "\n" << 100 / (100 - n);
    return 0;
}