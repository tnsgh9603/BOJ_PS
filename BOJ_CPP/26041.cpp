#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2, s3;
    getline(cin, s1);
    stringstream ss(s1);
    vector<string> v;
    while (ss >> s2) {
        v.push_back(s2);
    }
    cin >> s3;
    int cnt = 0;
    for(string &s : v) {
        if(s != s3 and s.find(s3) == 0) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}