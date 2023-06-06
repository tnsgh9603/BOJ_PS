#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, is_prime, board[1001], c[1001], u[1001], r[1001];

int main() {
    fastio;
    int tc;
    cin >> tc;
    for (int T = 1; T <= tc; ++T) {
        cout << "Data Set " << T << ":\n";
        cin >> n >> is_prime;
        for (int i = 1; i <= is_prime; ++i) {
            cin >> board[i] >> c[i] >> u[i] >> r[i];
        }
        for (int i = 1; i <= n; ++i) {
            int k;
            cin >> k;
            if (u[k]) {
                --u[k];
                board[k] -= r[k] - c[k];
            }
        }
        for (int i = 1; i <= is_prime; ++i) {
            if (board[i] < 0) {
                cout << i << "\n";
            }
        }
        cout << "\n";
    }
    return 0;
}