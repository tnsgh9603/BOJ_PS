#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[26];

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        ++arr[s[0] - 'A'];
    }
    int cnt = 0;
    for (int i = 0; i < 26; ++i) {
        if (arr[i]) {
            ++cnt;
        } else {
            break;
        }
    }
    cout << cnt;
    return 0;
}