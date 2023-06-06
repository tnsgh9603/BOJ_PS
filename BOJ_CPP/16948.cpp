#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
bool is_prime[201][201];
int n;

bool OOB(int x, int y) {
    return 0 <= x and x < n and 0 <= y and y < n;
}

int main() {
    fastio;
    int r1, c1, r2, c2;
    cin >> n >> r1 >> c1 >> r2 >> c2;
    queue<tuple<int, int, int>> q;
    is_prime[r1][c1] = 1;
    q.push({r1, c1, 0});
    while (!q.empty()) {
        auto[x, y, cnt] = q.front();
        q.pop();
        if (x == r2 and y == c2) {
            cout << cnt;
            return 0;
        }
        for (int i = 0; i < 6; ++i) {
            int nx = x + "002244"[i] - '2';
            int ny = y + "130413"[i] - '2';
            if (!is_prime[nx][ny] && OOB(nx, ny)) {
                q.push({nx, ny, cnt + 1});
                is_prime[nx][ny] = 1;
            }
        }
    }
    cout << -1;
    return 0;
}