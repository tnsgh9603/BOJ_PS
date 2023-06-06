#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2;
    int n, cnt = 0;
    cin >> s1 >> n;
    while (n--) {
        cin >> s2;
        if (s1 == s2) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}