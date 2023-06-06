#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n;
    while (n--) {
        cin >> m;
        int cnt = 0;
        if (m == 1) {
            cout << "1\n";
            continue;
        }
        for (int i = 9; i >= 2; --i) {
            while (m % i == 0) {
                m /= i;
                ++cnt;
            }
        }
        cout << (m == 1 ? cnt : -1) << "\n";
    }
    return 0;
}