#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0, ans = 0;
    for (char &c: s) {
        if (c == 'a') {
            ++cnt;
        } else {
            if (cnt > 1) {
                ans += cnt;
            }
            cnt = 0;
        }
    }
    if (cnt > 1) {
        ans += cnt;
    }
    cout << ans;
    return 0;
}