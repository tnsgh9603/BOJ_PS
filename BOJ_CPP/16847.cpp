#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

string arr1[1001];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        int cnt = 0;
        for (int i = 0; i < k; ++i) {
            bool flag = 1;
            for (int j = 0; j < n; ++j) {
                if (arr1[j][i] == s[i]) {
                    flag = 0;
                }
            }
            if (flag) {
                ++cnt;
            }
        }
        cout << "Data Set " << tc << ":\n" << cnt << "/" << k << "\n\n";
    }
    return 0;
}