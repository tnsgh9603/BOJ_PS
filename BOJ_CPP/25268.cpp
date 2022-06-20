#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    string s = "bcdfghjklmnpqrstvwxyzaeiou";
    int cnt = 0;
    for (int a = 0; a < 21; ++a) {
        for (int b = 0; b < 21; ++b) {
            for (int c = 21; c < 26; ++c) {
                for (int d = 0; d < 21; ++d) {
                    for (int e = 0; e < 21; ++e) {
                        ++cnt;
                        cout << s[a] << s[b] << s[c] << s[d] << s[e] << "\n";
                        if (cnt == n) {
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
