#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--) {
        string s;
        cin >> s;
        ++mp[s];
    }
    int a = mp["1/4"], b = mp["1/2"], c = mp["3/4"], cnt = 0, temp = min(a, c);
    cnt += temp;
    c -= temp;
    a -= temp;
    if (c) {
        cnt += c;
    }

    cnt += b / 2;
    b %= 2;
    if (b) {
        a = max(0, a - 2);
        ++cnt;
    }

    cnt += a / 4;
    a %= 4;
    if (a) {
        ++cnt;
    }

    cout << cnt;
    return 0;
}