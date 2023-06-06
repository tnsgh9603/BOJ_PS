#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        int cnt = 0;
        for (int i = 1; i < n; i++) {
            int sum = 0;
            for (int j = i; sum < n; ++j) {
                sum += j;
            }
            if (sum == n) {
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}