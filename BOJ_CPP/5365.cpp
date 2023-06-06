#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    string s1, s2, s3;
    cin >> n >> ws;
    vector<string> v;
    getline(cin, s1);
    s2 = s1;
    stringstream ss(s2);
    while (ss >> s3) {
        v.push_back(s3);
    }
    cout << s1[0];
    int len = v[0].length();
    for (int i = 1; i < n; ++i) {
        if(v[i].length() < len) {
            cout << ' ';
        }
        else {
            cout << v[i][len - 1];
        }
        len = v[i].length();
    }
    return 0;
}