#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    set<string> S;
    vector<string> v;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool flag = 0;
        while (n--) {
            string s;
            cin >> s;
            if (!flag && S.find(s) == S.end()) {
                S.insert(s);
                v.push_back(s);
                flag = 1;
            }
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    return 0;
}
