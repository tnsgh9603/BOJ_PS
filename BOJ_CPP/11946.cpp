#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[101][16];
pair<int, pair<int, int>> r[101];

int main() {
    fastio;
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; ++i) {
        r[i].second.second = i;
    }
    for (int i = 0; i < q; ++i) {
        int a, b, c;
        string s;
        cin >> a >> b >> c >> s;
        if (arr[b][c] != -1) {
            if (s == "AC") {
                r[b].second.first += arr[b][c] + a;
                arr[b][c] = -1;
                --r[b].first;
            } else {
                arr[b][c] += 20;
            }
        }
    }
    sort(r + 1, r + n + 1);
    for (int i = 1; i <= n; ++i) {
        cout << r[i].second.second << " " << -r[i].first << " " << r[i].second.first << "\n";
    }
    return 0;
}