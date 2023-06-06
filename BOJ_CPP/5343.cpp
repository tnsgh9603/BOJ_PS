#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        int cnt1 = 0, cnt2 = 0;
        for (int j = 0; j < s.length(); ++j) {
            if ((j + 1) % 8 == 0) {
                if(s[j] != '1' and cnt1 & 1 or s[j] == '1' and (cnt1 % 2) == 0) {
                    ++cnt2;
                }
                cnt1 = 0;
            }
            else if (s[j] == '1') {
                ++cnt1;
            }
        }
        cout << cnt2 << "\n";
    }
    return 0;
}