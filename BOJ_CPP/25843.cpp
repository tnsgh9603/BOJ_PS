#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2, s3;
    int r, d, e, c, t;
    vector<string> v1, v2;
    getline(cin, s1);
    getline(cin, s2);
    cin >> r >> d >> e >> c;
    cin.ignore();
    for (int i = 0; i < c; ++i) {
        getline(cin, s3);
        v1.push_back(s3);
    }
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; ++i) {
        getline(cin, s3);
        v2.push_back(s3);
    }
    int dot = s2.rfind('.');
    string ext = s2.substr(dot + 1);
    s2 = s2.substr(0, dot);
    string ans;
    ans = ((s2 != s1 || (ext != "c" && ext != "cpp" && ext != "java" && ext != "py")) ? "Compile Error" : r ? "Run-Time Error": e > d ? "Time Limit Exceeded": "");
    if(ans != "") {
        cout << ans;
        return 0;
    }
    bool wa = c != t;
    for (int i = 0; i < c && !wa; ++i) {
        wa = v1[i] != v2[i];
    }
    cout << (wa ? "Wrong Answer" : "Correct");
    return 0;
}
