#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int L = 0, N, S = 0, ans = 0;
    string s;
    cin >> N >> s;
    for (int i = 0; i < N; i++) {
        if ('1' <= s[i] && s[i] <= '9') {
            ++ans;
        } else if (s[i] == 'L') {
            ++L;
        } else if (s[i] == 'S') {
            ++S;
        } else if (s[i] == 'R') {
            if (L) {
                --L;
                ++ans;
            } else {
                break;
            }
        }
        if (s[i] == 'K') {
            if (S) {
                --S;
                ++ans;
            } else {
                break;
            }
        }
    }
    cout << ans;
    return 0;
}
