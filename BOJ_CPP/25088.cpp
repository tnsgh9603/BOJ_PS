#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T, R, C;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cin >> R >> C;
        cout << "Case #" << tc << ":\n";
        for (int i = 0; i < R * 2 + 1; ++i) {
            for (int j = 0; j < C * 2 + 1; ++j) {
                if (!i && !j || i + j == 1) {
                    cout << ".";
                } else if (i % 2 == 0 && j % 2 == 0) {
                    cout << "+";
                } else if (i % 2 == 1 && j % 2 == 0) {
                    cout << "|";
                } else if (i % 2 == 0 && j % 2 == 1) {
                    cout << "-";
                } else {
                    cout << ".";
                }
            }
            cout << "\n";
        }
    }
}