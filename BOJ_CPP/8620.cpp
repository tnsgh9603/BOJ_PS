#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int box[26];
bool trapped[26];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char c;
        int x;
        cin >> c >> x;
        box[c - 'A'] += x;
        trapped[c - 'A'] = 1;
    }
    for (int i = 0; i < 26; ++i) {
        if (trapped[i]) {
            cout << char(i + 'A') << " " << box[i] << "\n";
        }
    }
    return 0;
}