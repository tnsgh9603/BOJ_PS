#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int a, b, c, cnt = 0;
        cin >> a >> b >> c;
        if (a >= 10) {
            ++cnt;
        }
        if (b >= 10) {
            ++cnt;
        }
        if (c >= 10) {
            ++cnt;
        }
        cout << a << " " << b << " " << c << "\n" << (cnt == 3 ? "triple-double" : cnt == 2 ? "double-double" : cnt == 1 ? "double" : "zilch") << "\n\n";
    }
    return 0;
}