#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[26], arr2[26];

int main() {
    fastio;
    int cnt = 0, n;
    string s1, s2;
    cin >> n >> s1;
    --n;
    for (int i = 0; i < s1.size(); ++i) {
        ++arr1[s1[i] - 'A'];
    }
    while (n--) {
        memset(arr2, 0, sizeof(arr2));
        int diff = 0;
        cin >> s2;
        for (int i = 0; i < s2.size(); ++i) {
            ++arr2[s2[i] - 'A'];
        }
        for (int i = 0; i < 26; ++i) {
            diff += abs(arr2[i] - arr1[i]);
        }
        if (diff <= 1 || s1.size() == s2.size() && diff == 2) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}