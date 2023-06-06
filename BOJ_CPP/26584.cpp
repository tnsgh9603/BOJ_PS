#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T >> ws;
    while (T--) {
        string str;
        getline(cin, str);
        int idx;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == ',') {
                idx = i;
            }
        }
        string a = str.substr(0, idx), b = str.substr(idx + 1, str.length() - idx);
        int x = stoi(b);
        vector<int> v(4);
        v[0] = x / (365 * 24 * 60);
        x %= (365 * 24 * 60);
        v[1] = x / (24 * 60);
        x %= (24 * 60);
        v[2] = x / 60;
        v[3] = x % 60;
        int s = -1;
        for (int i = 0; i < 4; ++i) {
            if (v[i] > 0) {
                s = i;
                break;
            }
        }
        cout << a << " - ";
        for (int i = s; i < 4; ++i) {
            cout << v[i] << " " << (i == 0 ? "year" : (i == 1) ? "day" : i == 2 ? "hour" : "minute") << "(s) ";
        }
        cout << "\n";
    }
    return 0;
}