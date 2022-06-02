#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
typedef pair<int, int> pii;
bool is_prime[51][51];
int board[51][51];

int main() {
    fastio;
    int N, M, d, s, pcnt = 4;
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }
    pii points[2501];
    points[0] = {N - 1, 0};
    points[1] = {N - 1, 1};
    points[2] = {N - 2, 0};
    points[3] = {N - 2, 1};
    while (M--) {
        cin >> d >> s;
        --d;
        for (int i = 0; i < pcnt; ++i) {
            int r = points[i].first, c = points[i].second;
            r = (r + s * ("10001222"[d] - '1')) % N;
            c = (c + s * ("00122210"[d] - '1')) % N;
            if (r < 0) {
                r += N;
            }
            if (c < 0) {
                c += N;
            }
            points[i] = {r, c};
            is_prime[r][c] = 1;
            ++board[r][c];
        }
        for (int i = 0; i < pcnt; ++i) {
            int r = points[i].first, c = points[i].second;
            for (int j = 1; j < 8; j += 2) {
                int nr = r + "10001222"[j] - '1', nc = c + "00122210"[j] - '1';
                if (nr < 0 || nr >= N || nc < 0 || nc >= N) {
                    continue;
                }
                if (board[nr][nc]) {
                    ++board[r][c];
                }
            }
        }
        pcnt = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (is_prime[i][j]) {
                    is_prime[i][j] = 0;
                } else if (board[i][j] >= 2) {
                    points[pcnt++] = {i, j};
                    board[i][j] -= 2;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            ans += board[i][j];
        }
    }
    cout << ans;
    return 0;
}