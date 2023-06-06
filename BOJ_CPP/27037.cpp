#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    map<string, int> mp;
    string now = string(4 - s.length(), '0') + s;
    int cnt = 0;
    while (!mp.count(now)) {
        mp[now] = 1;
        ++cnt;
        int num = (now[1] - '0') * 10 + now[2] - '0';
        num *= num;
        string temp = to_string(num);
        now = string(4 - temp.length(), '0') + to_string(num);
    }
    cout << cnt;
    return 0;
}