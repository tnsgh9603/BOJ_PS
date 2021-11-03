#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s, temp;
    vector<string> v;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        temp = s.substr(i, s.length() - i);
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << "\n";
    }
    return 0;
}