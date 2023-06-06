#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T >> ws;
    string line;
    getline(cin, line);
    for (int tc = 1; tc <= T; ++tc) {
        getline(cin, line);
        string s;
        stringstream ss(line);
        string num;
        while (getline(ss, num, ' ')) {
            int x = stoi(num);
            if (!(x >= 'A' && x <= 'Z') && !(x >= 'a' && x <= 'z')) {
                s += '-';
            } else {
                s += tolower((char) x);
            }
        }
        cout << s.substr(1, s.length() - 1) << s[0] << "ay\n";
    }
    return 0;
}