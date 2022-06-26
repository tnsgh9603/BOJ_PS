#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        string s1;
        cin >> x >> y >> s1;
        long long val = 0;
        for (auto i: s1) {
            val *= x;
            val += i + (i >= '0' && i <= '9' ? -'0' : -'A' + 10);
        }
        string s2 = "";
        while (val) {
            s2 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[val % y] + s2;
            val /= y;
        }
        if (s2.empty()) {
            s2 = "0";
        }
        cout << s2 << "\n";
    }
    return 0;
}