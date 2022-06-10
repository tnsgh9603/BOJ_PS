#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double n, m;
    cin >> n >> m;
    if(int(n) % 2) {
        cout << max(int(ceil(m / n)), int(n)) * 10;
    }
    else {
        cout << (int(ceil(m / n)) + n) * 10;
    }
    return 0;
}