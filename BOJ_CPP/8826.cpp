#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'E') {
                ++cnt1;
            } else if (s[i] == 'W') {
                --cnt1;
            } else if (s[i] == 'N') {
                ++cnt2;
            } else {
                --cnt2;
            }
        }
        cout << abs(cnt1) + abs(cnt2) << "\n";
    }
    return 0;
}