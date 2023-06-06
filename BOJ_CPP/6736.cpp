#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T, a, b;
    cin >> T;
    while (T--) {
        long long sum = 1, cnt = 0;
        cin >> a >> b;
        for (int i = 2; i <= a; ++i) {
            sum *= i;
        }
        string s = to_string(sum);
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] - '0' == b) {
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}