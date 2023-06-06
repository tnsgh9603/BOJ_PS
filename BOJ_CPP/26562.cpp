#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<string> v = {"Franklin", "Grant", "Jackson", "Hamilton", "Lincoln", "Washington"};
    vector<int> u = {100, 50, 20, 10, 5, 1};
    int T;
    cin >> T >> ws;
    while (T--) {
        string str;
        getline(cin, str);
        vector<string> w;
        string tmp = "";
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == ' ') {
                if (tmp != "") {
                    w.push_back(tmp);
                }
                tmp = "";
            } else {
                tmp += str[i];
            }
        }
        if (tmp != "") {
            w.push_back(tmp);
        }
        int ans = 0;
        for (int i = 0; i < w.size(); ++i) {
            for (int j = 0; j < v.size(); ++j) {
                if (w[i] == v[j]) {
                    ans += u[j];
                }
            }
        }
        cout << "$" << ans << "\n";
    }
    return 0;
}