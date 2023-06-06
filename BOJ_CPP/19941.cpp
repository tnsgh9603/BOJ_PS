#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool arr1[20001];

int main() {
    fastio;
    int n, k, cnt = 0;
    string s;
    cin >> n >> k >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'P') {
            for (int j = max(0, i - k); j <= min(n - 1, i + k); ++j) {
                if (s[j] == 'H' && !arr1[j]) {
                    arr1[j] = 1;
                    ++cnt;
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}