#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    string s;
    cin >> s;
    string prev = s;
    --n;
    int ans = s.length();
    while (n--) {
        cin >> s;
        int cnt = 0;
        for (int i = 0, j = 0; i < prev.length() && j < s.length(); ++i, ++j) {
            if (prev[i] != s[j]) {
                break;
            }
            ++cnt;
        }
        ans += s.length() + 1 - cnt;
        prev = s;
    }
    cout << ans;
    return 0;
}