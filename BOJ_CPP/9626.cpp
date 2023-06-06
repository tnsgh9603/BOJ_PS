#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char m[22][22];

int main() {
    fastio;
    int M, N, U, L, R, D;
    cin >> M >> N >> U >> L >> R >> D;
    for (int i = 0; i < M + U + D; ++i) {
        for (int j = 0; j < N + L + R; ++j) {
            m[i][j] = (i + j) % 2 ? '.' : '#';
        }
    }
    for (int i = U; i < M + U; ++i) {
        for (int j = L; j < N + L; ++j) {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < M + U + D; ++i) {
        cout << m[i] << "\n";
    }
    return 0;
}