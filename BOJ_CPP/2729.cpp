#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        string s1, s2, ans;
        ans.clear();
        cin >> s1 >> s2;
        while (s1.size() > s2.size()) {
            s2 = '0' + s2;
        }
        while (s2.size() > s1.size()) {
            s1 = '0' + s1;
        }
        int sz = s1.length();
        ans.resize(sz + 1, '0');
        for (int i = sz - 1; i >= 0; --i) {
            ans[i + 1] += s1[i] - '0' + s2[i] - '0';
            if (ans[i + 1] > '1') {
                ans[i + 1] -= 2;
                ++ans[i];
            }
        }
        while (ans[0] == '0' && ans.size() != 1) {
            ans.erase(0, 1);
        }
        cout << ans << "\n";
    }
    return 0;
}