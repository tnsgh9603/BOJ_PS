#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int num[2001];

int main() {
    fastio;
    int K;
    cin >> K;
    for (int i = 1; i <= K; ++i) {
        int c, m;
        cin >> c >> m;
        for (int i = 1; i <= c; ++i) {
            cin >> num[i];
        }
        for (int i = 0; i < m; ++i) {
            int b;
            cin >> b;
            --num[b];
        }
        int res = 0;
        for (int i = 1; i <= c; ++i) {
            res = max(res, num[i]);
        }
        cout << "Data Set " << i << ":\n" << res << "\n\n";
    }
    return 0;
}