#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    int n;
    cin >> s >> n;
    int val = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'B') {
            val += (1 << i);
        }
    }
    val += n;
    for (int i = 0; i < s.length(); ++i) {
        cout << (val & (1 << i) ? 'B' : 'A');
    }
    return 0;
}
