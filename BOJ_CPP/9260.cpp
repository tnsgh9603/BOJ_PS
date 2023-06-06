#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T, n, k, t;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cin >> n >> k >> t >> ws;
        set<string> dict, email;
        string line, s;
        for (int i = 0; i < n; ++i) {
            getline(cin, line);
            istringstream iss(line);
            iss >> s;
            dict.insert(s);
        }
        for (int i = 0; i < k; ++i) {
            getline(cin, line);
            for (int j = 0; j < line.size(); ++j) {
                if (!islower(line[j])) {
                    line[j] = ' ';
                }
            }
            istringstream iss(line);
            string word;
            while (iss >> word) {
                if (dict.count(word)) {
                    email.insert(word);
                }
            }
        }
        cout << "Data Set " << tc << ":\n" << (email.size() < t ? "No " : "") << "Alarm\n\n";
    }
    return 0;
}