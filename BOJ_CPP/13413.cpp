#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0;
        cin >> n;
        string s1, s2, s = "";
        cin >> s1 >> s2;
        for (int i = 0; i < n; ++i) {
            if (s1[i] != s2[i]) {
                s += s1[i];
                c += s1[i] == 'W';
            }
        }
        cout << max(int(s.length()) - c, c) << "\n";
    }
    return 0;
}