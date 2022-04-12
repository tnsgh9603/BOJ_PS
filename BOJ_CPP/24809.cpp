#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int tb = 0, lr = 0, n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s[0] == '0') {
            ++tb;
        }
        if (s[1] == '0') {
            ++tb;
        }
        if (s[2] == '0') {
            ++lr;
        }
        if (s[3] == '0') {
            ++lr;
        }
    }
    int swords = min(tb / 2, lr / 2);
    cout << swords << ' ' << tb - 2 * swords << ' ' << lr - 2 * swords;
    return 0;
}