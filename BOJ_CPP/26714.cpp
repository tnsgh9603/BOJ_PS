#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i += n / 10) {
        bool flag = 1;
        for (int j = i; j < i + n / 10; ++j) {
            if (s[j] == 'N') {
                flag = 0;
            }
        }
        if (flag) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}