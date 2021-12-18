#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        string arr[101], b = "0", c;
        bool flag = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == j) {
                    continue;
                }
                b = arr[i] + arr[j];
                c = b;
                reverse(b.begin(), b.end());
                if (b == c) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }
        cout << (flag ? b : "0") << "\n";
    }
    return 0;
}