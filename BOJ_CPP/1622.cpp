#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int cnt1[26], cnt2[26];

int main() {
    fastio;
    string a, b;
    while (getline(cin, a), getline(cin, b)) {
        memset(cnt1, 0, sizeof(cnt1));
        memset(cnt2, 0, sizeof(cnt2));
        for (char i: a) {
            ++cnt1[i - 'a'];
        }
        for (char i: b) {
            ++cnt2[i - 'a'];
        }
        for (int i = 0; i < 26; ++i) {
            for (int j = 0; j < min(cnt1[i], cnt2[i]); ++j) {
                cout << (char) (i + 'a');
            }
        }
        cout << "\n";
    }
    return 0;
}