#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[26];

int main() {
    fastio;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if(islower(s[i])) {
            ++arr1[s[i] - 'a'];
        }
        else {
            ++arr1[s[i] - 'A'];
        }
    }
    int cnt = 0;
    for (int i = 0; i < 26; ++i) {
        if(arr1[i] == 1) {
            ++cnt;
        }
    }
    cout << (cnt ? cnt : 1);
    return 0;
}