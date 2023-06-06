#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[11];

int main() {
    fastio;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        ++arr1[s[i] - '0'];
    }
    pair<int, int> p = {arr1[0] + 2, 0};
    for (int i = 1; i < 10; ++i) {
        p = min(p, {arr1[i] + 1, i});
    }
    if (p.second == 0) {
        --p.first;
        cout << 1;
    }
    while (p.first--) {
        cout << p.second;
    }
    return 0;
}
