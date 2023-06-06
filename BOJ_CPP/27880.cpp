#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    int x, ans = 0;
    while (cin >> s >> x) {
        ans += x * (s == "Es" ? 21 : 17);
    }
    cout << ans;
    return 0;
}