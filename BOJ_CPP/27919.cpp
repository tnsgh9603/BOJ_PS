#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s, ans = "";
    cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for (char &c: s) {
        if (c == 'U' or c == 'C') {
            ++cnt1;
        } else {
            ++cnt2;
        }
    }
    if (cnt1 > (cnt2 + 1) / 2) {
        ans += "U";
    }
    if (cnt2 > 0) {
        ans += "DP";
    }
    cout << ans;
    return 0;
}