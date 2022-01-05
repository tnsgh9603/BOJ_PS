#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bool flag = 1;
        for (int i = 2; i <= 1'000'000; ++i) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << "\n";
    }
    return 0;
}