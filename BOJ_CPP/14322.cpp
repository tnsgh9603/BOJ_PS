#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool arr1[26];

int sol(string s) {
    int cnt = 0;
    memset(arr1, 0, sizeof(arr1));
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') {
            continue;
        }
        if (!arr1[s[i] - 'A']) {
            arr1[s[i] - 'A'] = 1;
            ++cnt;
        }
    }
    return cnt;
}

int main() {
    fastio;
    int t;
    cin >> t;
    vector<string> v[21];
    for (int i = 1; i <= t; ++i) {
        int n, max = -1;
        string s;
        cin >> n >> ws;
        for (int i = 0; i < n; ++i) {
            getline(cin, s);
            int let = sol(s);
            v[let].push_back(s);
            if (max < let) {
                max = let;
            }
        }
        sort(v[max].begin(), v[max].end());
        cout << "Case #" << i << ": " << v[max][0] << "\n";
        for (int i = 1; i <= 20; ++i) {
            v[i].clear();
        }
    }
    return 0;
}