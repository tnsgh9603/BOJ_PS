#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int visited1[256], visited2[256];

int main() {
    fastio;
    string s1, s2;
    cin >> s1 >> s2;
    vector<char> v;
    for (int i = 0; i < s1.length(); ++i) {
        ++visited1[s1[i]];
    }
    for (int i = 0; i < s2.length(); ++i) {
        ++visited2[s2[i]];
    }
    for (int i = 0; i < 256; ++i) {
        if (visited1[i] && visited2[i]) {
            for (int j = 0; j < min(visited1[i], visited2[i]); ++j) {
                v.push_back(char(i));
            }
        }
    }
    sort(v.begin(), v.end());
    for (auto i: v) {
        cout << i;
    }
    return 0;
}