#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int U, N;
    cin >> U >> N;
    map<int, vector<string>> mp;
    for (int i = 0; i < N; ++i) {
        string s;
        int v;
        cin >> s >> v;
        mp[v].push_back(s);
    }
    int mn = INT_MAX, val;
    for (auto&[a, b]: mp) {
        if (mn > b.size()) {
            mn = b.size();
            val = a;
        }
    }
    cout << mp[val].front() << " " << val;
    return 0;
}