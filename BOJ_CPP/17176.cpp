#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int cnt[53], result[53];

int main() {
    fastio;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        ++cnt[num];
    }
    cin >> ws;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') {
            ++result[0];
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            ++result[s[i] - 'A' + 1];
        } else {
            ++result[s[i] - 'a' + 27];
        }
    }
    bool flag = 1;
    for (int i = 0; i < 53; ++i) {
        if (cnt[i] != result[i]) {
            flag = 0;
            break;
        }
    }
    cout << (flag ? "y" : "n");
    return 0;
}