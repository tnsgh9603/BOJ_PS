#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

string arr[101];

int main() {
    fastio;
    string s;
    int n;
    cin >> s >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    while (1) {
        bool flag = 0;
        for (int i = 0; i < n; ++i) {
            if (s.find(arr[i]) != -1) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            cout << s;
            return 0;
        } else {
            for (auto &i: s) {
                i = (i - 'a' + 1) % 26 + 'a';
            }
        }
    }
    return 0;
}
