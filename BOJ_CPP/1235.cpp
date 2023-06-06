#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string str[1001];

int main() {
    fastio;
    int n, cnt = 1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> str[i];
    }
    while (1) {
        map<string, int> mp;
        bool flag = 1;
        for (int i = 0; i < n; ++i) {
            string temp = str[i].substr(str[i].length() - cnt, cnt);
            int kk = ++mp[temp];
            if (kk >= 2) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            break;
        }
        ++cnt;
    }
    cout << cnt;
    return 0;
}