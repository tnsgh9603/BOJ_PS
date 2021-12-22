#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    while (cin >> n >> m && n) {
        int sum = 3 * m;
        while (n--) {
            string s;
            int k;
            cin >> s >> k;
            sum -= k;
        }
        cout << sum << "\n";
    }
    return 0;
}