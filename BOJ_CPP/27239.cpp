#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    map<int, string> mp;
    int idx = 1;
    char c = 'a';
    int num = 1;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            mp[idx++] = c++ + to_string(num);
        }
        c = 'a';
        ++num;
    }
    cin >> num;
    cout << mp[num];
    return 0;
}