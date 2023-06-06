#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n, cnt1 = 0, cnt2 = 0;
        string s1, s2;
        cin >> n >> s1 >> s2;
        for (int i = 0; i < s1.length(); ++i) {
            if (s1[i] == 'W' and s2[i] == 'B') {
                ++cnt1;
            }
            if (s1[i] == 'B' and s2[i] == 'W') {
                ++cnt2;
            }
        }
        cout << max(cnt1, cnt2) << "\n";
    }
    return 0;
}