#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    for (int i = 0; i < 4; ++i) {
        cnt += (s1[i] == s2[i]);
    }
    cout << int(pow(2, 4 - cnt));
    return 0;
}