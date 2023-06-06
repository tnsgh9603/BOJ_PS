#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        for (int i = m + 1;; ++i) {
            string s = to_string(i);
            bool flag = 1;
            for (int j = 0; j < s.length(); ++j) {
                if (s[j] == '0') {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}