#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2;
    char c;
    cin >> s1 >> ws;
    getline(cin, s2);
    stringstream ss(s2);
    vector<char> v;
    while (ss >> c) {
        v.push_back(c);
    }
    for (int i = 0; i < s1.length(); ++i) {
        for (int j = 0; j < v.size(); ++j) {
            if(s1[i] == v[j]) {
                s1[i] = tolower(s1[i]);
                break;
            }
        }
    }
    cout << s1;
    return 0;
}