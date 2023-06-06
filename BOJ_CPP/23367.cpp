#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<char> l{'q', 'w', 'e', 'r', 't', 'a', 's', 'd', 'f', 'g', 'z', 'x', 'c', 'v', 'b'}, r{'y', 'u', 'i', 'o',
                                                                                                 'p', 'h', 'j', 'k',
                                                                                                 'l', 'n', 'm'};
    string s;
    cin >> s;
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    bool flag1 = 0, flag2 = 0;
    if (binary_search(l.begin(), l.end(), s[0])) {
        flag1 = 1;
    } else {
        flag2 = 1;
    }
    for (int i = 1; i < s.length(); ++i) {
        if (binary_search(l.begin(), l.end(), s[i]) && flag2) {
            flag1 = 1;
            flag2 = 0;
        } else if (binary_search(r.begin(), r.end(), s[i]) && flag1) {
            flag1 = 0;
            flag2 = 1;
        } else {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}