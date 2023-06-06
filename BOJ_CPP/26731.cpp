#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool visited[26];

int main() {
    fastio;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        visited[s[i] - 'A'] = 1;
    }
    for (int i = 0; i < 26; ++i) {
        if (!visited[i]) {
            cout << char('A' + i);
            return 0;
        }
    }
    return 0;
}