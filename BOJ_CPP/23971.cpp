#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int h, w, n, m;
    cin >> h >> w >> n >> m;
    cout << ((h - 1) / (n + 1) + 1) * ((w - 1) / (m + 1) + 1);
    return 0;
}