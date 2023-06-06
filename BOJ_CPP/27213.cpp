#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int r, c;
    cin >> r >> c;
    cout << (r == 1 || c == 1 ? r + c - 1 : (r + c) * 2 - 4);
    return 0;
}