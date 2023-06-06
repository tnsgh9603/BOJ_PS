#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool is_leap_year(int n) {
    return (((n % 4 == 0 and n % 100 != 0) or n % 400 == 0) ? 1 : 0);
}

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    cout << (is_leap_year(n) ? 30 : 29);
    return 0;
}