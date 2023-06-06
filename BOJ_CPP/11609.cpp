#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
pair<string, string> p[101];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p[i].second >> p[i].first;
    }
    sort(p, p + n);
    for (int i = 0; i < n; ++i) {
        cout << p[i].second << " " << p[i].first << '\n';
    }
    return 0;
}