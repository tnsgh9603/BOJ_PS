#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int h, m;
    cin >> h >> m;
    cout << (h - 9) * 60 + m;
    return 0;
}