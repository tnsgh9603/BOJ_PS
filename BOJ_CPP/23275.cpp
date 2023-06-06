#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

int main() {
    fastio;
    int n;
    cin >> n;
    map<int, int> mp;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        ++mp[a];
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> a;
        ++mp[a];
    }
    vector<pair<int, int>> vec(mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), cmp);
    cout << vec.front().first;
    return 0;
}
