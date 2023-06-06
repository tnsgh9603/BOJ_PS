#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int weight[101], score[101];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; ++i) {
            cin >> weight[i];
        }
        cout << "Data Set " << tc << ":\n";
        int temp;
        for (int j = 0; j < n; ++j) {
            score[j] = 0;
            for (int i = 0; i < m; ++i) {
                cin >> temp;
                score[j] += temp * weight[i];
            }
        }
        int mx = score[0];
        for (int j = 1; j < n; ++j) {
            mx = max(mx, score[j]);
        }
        for (int j = 0; j < n; ++j) {
            if (score[j] == mx) {
                cout << j + 1 << "\n";
            }
        }
        cout << "\n";
    }
    return 0;
}