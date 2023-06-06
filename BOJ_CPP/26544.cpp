#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, sum = 0;;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            sum += x;
        }
        int temp = 2 * sum, x;
        cin >> x;
        temp += x;
        for (int i = 1; i < n; ++i) {
            int y;
            cin >> y;
            temp += abs(y - x);
            x = y;
        }
        temp += x;
        cout << temp << "\n";
    }
    return 0;
}