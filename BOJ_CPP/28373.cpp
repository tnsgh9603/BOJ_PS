#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool visited[21];

int main() {
    fastio;
    string s;
    cin >> s;
    for (char &c: s) {
        c = tolower(c);
    }
    vector<string> v;
    string temp = s;
    v.push_back(s);
    for (int i = 0; i < s.length() - 1; ++i) {
        for (int j = 0; j < s.length() - 1; ++j) {
            if (s[j] == 's' and s[j] == s[j + 1] and !visited[j]) {
                visited[j] = 1;
                s.replace(j, 2, "B");
                v.push_back(s);
                s = temp;
                break;
            }
        }
    }
    for (const string &s: v) {
        cout << s << "\n";
    }
    return 0;
}