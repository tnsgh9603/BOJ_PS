#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int tc, k;
    cin >> tc;
    while (tc--) {
        cin >> k;
        --k;
        k %= 28;
        ++k;
        if (k > 15) {
            k = 30 - k;
        }
        for (int i = 8; i >= 1; i /= 2) {
            cout << (k & i ? "딸기" : "V");
        }
        cout << "\n";
    }
    return 0;
}