#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[26];

int main() {
    fastio;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        ++arr1[s[i] - 'a'];
    }
    bool flag1 = 1, flag2 = 1;
    for (int i = 0; i < 26; ++i) {
        if(arr1[i]) {
            if (arr1[i] & 1) {
                flag1 = 0;
            } else {
                flag2 = 0;
            }
        }
    }
    cout << (flag1 ? 0 : flag2 ? 1 : 2);
    return 0;
}