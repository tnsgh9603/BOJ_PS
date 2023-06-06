#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool visited[26];

int main() {
    fastio;
    int n, m;
    string s1, s2;
    cin >> n >> s1 >> m >> s2;
    for (int i = 0; i < s1.length(); ++i) {
        visited[s1[i] - 'a'] = 1;
    }
    for (int i = 0; i < s2.length(); ++i) {
        if (!visited[s2[i] - 'a']) {
            cout << -1;
            return 0;
        }
    }
    int cnt = 0, idx1 = 0, idx2 = 0;
    while (1) {
        if(idx2 == m) {
            break;
        }
        if(idx1 == n) {
            idx1 = 0;
        }
        if(s1[idx1] == s2[idx2]) {
            ++idx2;
        }
        ++idx1;
        ++cnt;
    }
    cout << cnt;
    return 0;
}