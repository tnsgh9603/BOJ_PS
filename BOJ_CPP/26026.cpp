#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T, drnk = 0, has = 0;
    cin >> T;
    while (T--) {
        char c;
        cin >> c;
        if (c == '1') {
            has = 2;
            ++drnk;
        } else if (has > 0) {
            --has;
            ++drnk;
        }
    }
    cout << drnk;
    return 0;
}
