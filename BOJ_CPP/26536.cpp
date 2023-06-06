#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int cnt[128];

int main() {
    fastio;
    int T;
    string s;
    cin >> T;
    getline(cin, s);
    while (T--) {
        getline(cin, s);
        s += " ";
        for (auto &l: s) {
            if (l == ' ') {
                char x = cnt['M'] * 16 + cnt['O'];
                cout << x;
                cnt['M'] = cnt['O'] = 0;
            } else {
                ++cnt[l];
            }
        }
        cout << '\n';
    }
    return 0;
}