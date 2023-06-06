#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c;
    while (cin >> a >> b >> c && a) {
        if (a == 13 and b == 13 and c == 13) {
            cout << "*\n";
        }
        else if (a == b and b == c) {
            cout << a + 1 << " " <<  a + 1 << " " << a + 1 << "\n";
        }
        else if (a == b or b == c or a == c) {
            if (a == b) {
                swap(a, c);
            }
            else if (a == c) {
                swap(a, b);
            }
            if (a == 12 and b == 13) {
                cout << "1 1 1\n";
                continue;
            }
            int ans[3] = {a, b, c};
            ++ans[0];
            if (ans[0] == ans[1]) {
                ++ans[0];
            }
            if (ans[0] > 13) {
                ans[0] = 1;
                ++ans[1];
                ++ans[2];
            }
            sort(ans, ans + 3);
            cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
            continue;
        }
        else {
            cout << "1 1 2\n";
        }
    }
    return 0;
}