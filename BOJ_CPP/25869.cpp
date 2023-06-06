#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int w, h, d;
    cin >> w >> h >> d;
    cout << (2 * d > w || 2 * d > h ? 0 : (w - 2 * d) * (h - 2 * d));
    return 0;
}