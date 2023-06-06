#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string s[11];

int main() {
    fastio;
    int n, h, w;
    cin >> n >> h >> w;
    for (int i = 0; i < h; ++i) {
        cin >> s[i];
    }
    for (int i = 0; i < n; ++i) {
        char c = '?';
        for (int j = 0; j < h; ++j) {
            for (int k = 0; k < w; ++k) {
                if (s[j][i * w + k] != '?') {
                    c = s[j][i * w + k];
                }
            }
        }
        cout << c;
    }
    return 0;
}