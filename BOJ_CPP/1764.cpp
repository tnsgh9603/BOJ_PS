#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N, M;
    cin >> N >> M;
    map<string, int> mp;
    vector<string> v;
    int cnt = 0;
    for (int i = 0; i < N + M; ++i) {
        string s;
        cin >> s;
        ++mp[s];
        if (mp[s] == 2) {
            ++cnt;
            v.push_back(s);
        }
    }
    sort(v.begin(), v.end());
    cout << cnt << "\n";
    for (auto i: v) {
        cout << i << "\n";
    }
    return 0;
}