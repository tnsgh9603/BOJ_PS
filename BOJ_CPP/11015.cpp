#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
#define sol(x) ((x<='Z')?(x):(x-'z'+'Z'))

int main() {
    fastio;
    int K;
    cin >> K;
    for (int tc = 1; tc <= K; ++tc) {
        cout << "Data Set " << tc << ":\n";
        vector<string> v;
        string s;
        int n;
        cin >> n;
        getline(cin, s);
        for (int i = 0; i < n; ++i) {
            getline(cin, s);
            v.push_back(s);
        }
        getline(cin, s);
        for (int i = 0; i < n; ++i) {
            int idx = 0;
            for (int j = 0; idx < s.length() && j < v[i].length(); ++j) {
                if (sol(v[i][j]) == sol(s[idx])) {
                    ++idx;
                }
            }
            if (idx == s.length()) cout << v[i] << "\n";
        }
        cout << "\n";
    }
    return 0;
}