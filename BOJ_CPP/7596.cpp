#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    fastio;
    int n, i = 1;
    while (cin >> n && n) {
        vector<string> v(n);
        cin.ignore();
        for (int i = 0; i < n; ++i) {
            getline(cin, v[i]);
        }
        sort(v.begin(), v.end());
        cout << i++ << '\n';
        for (int i = 0; i < n; ++i) {
            cout << v[i] << '\n';
        }
    }
    return 0;
}