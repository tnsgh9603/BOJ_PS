#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2, s3;
    vector<tuple<int, string, string>> v(3);
    for (auto &[a, b, c]: v) {
        cin >> a >> b >> c;
    }
    vector<string> ans1;
    for (int i = 0; i < 3; ++i) {
        auto[a, b, c] = v[i];
        string s = to_string(stoi(b) % 100);
        ans1.push_back(string(2 - s.length(), '0') + s);
    }
    sort(ans1.begin(), ans1.end());
    for (string &s: ans1) {
        cout << s;
    }
    cout << "\n";
    sort(v.rbegin(), v.rend());
    for (auto[a, b, c]: v) {
        cout << c[0];
    }
    return 0;
}