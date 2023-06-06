#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    map<string, map<string, map<string, int>>> v;
    string d = "-";
    for (int i = 0; i < n; ++i) {
        string a, b, c;
        cin >> a >> b >> c;
        ++v[a][b][c];
        ++v[a][b][d];
        ++v[a][d][c];
        ++v[a][d][d];
        ++v[d][b][c];
        ++v[d][b][d];
        ++v[d][d][c];
        ++v[d][d][d];
    }
    for (int i = 0; i < m; ++i) {
        string a, b, c;
        cin >> a >> b >> c;
        cout << v[a][b][c] << "\n";
    }
    return 0;
}