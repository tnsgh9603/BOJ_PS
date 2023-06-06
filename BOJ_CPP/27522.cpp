#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<pair<string, char>> v;
    int arr[] = {10, 8, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 8; ++i) {
        string s;
        char t;
        cin >> s >> t;
        v.push_back({s, t});
    }
    sort(v.begin(), v.end());
    int R = 0, B = 0;
    for (int i = 0; i < 8; ++i) {
        (v[i].second == 'R' ? R : B) += arr[i];
    }
    cout << (R > B ? "Red" : "Blue");
    return 0;
}