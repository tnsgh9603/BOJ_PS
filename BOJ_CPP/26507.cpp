#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

signed main() {
    fastio;
    int N;
    cin >> N;
    vector<vector<vector<char>>> v(N, vector<vector<char>>(10, vector<char>(10)));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 10; ++k) {
                cin >> v[i][j][k];
            }
        }
    }
    int M;
    cin >> M >> ws;
    while (M--) {
        string s;
        getline(cin, s);
        vector<int> u;
        string tmp = "";
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ' ') {
                if (tmp != "") {
                    u.push_back(stoi(tmp));
                }
                tmp = "";
            } else {
                tmp += s[i];
            }
        }
        if (tmp != "") {
            u.push_back(stoi(tmp));
        }
        vector<vector<int>> w(10, vector<int>(10));
        for (int i = 0; i < u.size(); ++i) {
            for (int j = 0; j < 10; ++j) {
                for (int k = 0; k < 10; ++k) {
                    w[j][k] += (v[u[i]][j][k] - '0');
                }
            }
        }
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                string x = to_string(w[i][j]);
                while (x.length() < 2) {
                    x = '0' + x;
                }
                cout << x << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
