#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    int idx = 1;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> left(n, -987654321), right(n, -987654321);
        int x = -987654321;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                x = i;
            }
            left[i] = x;
        }
        x = 987654321;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == '1') {
                x = i;
            }
            right[i] = x;
        }
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += min(right[i] - i, i - left[i]);
        }
        cout << "Case #" << idx++ << ": " << sum << "\n";
    }
    return 0;
}