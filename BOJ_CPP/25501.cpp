#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int l = 0, r = s.size() - 1, cnt = 1;
        while (l < r) {
            if (s[l] != s[r]) {
                break;
            }
            ++cnt;
            ++l;
            --r;
        }
        cout << (l >= r) << " " << cnt << "\n";
    }
    return 0;
}
