#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, cnt = 0;
    string s;
    cin >> n >> m >> s;
    for (auto i: s) {
        if (i == 'R') {
            ++cnt;
        }
    }
    cout << (m - cnt ? 'R' : 'W');
    return 0;
}