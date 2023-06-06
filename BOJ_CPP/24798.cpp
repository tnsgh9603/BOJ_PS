#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    if (a * 26 < b || b < a) {
        cout << "impossible";
    } else {
        string ans = string(a, 'a');
        b -= a;
        while (b) {
            for (char &c: ans) {
                if (c < 'z') {
                    ++c;
                    break;
                }
            }
            --b;
        }
        cout << ans;
    }
    return 0;
}
