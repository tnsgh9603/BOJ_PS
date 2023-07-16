#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool board[101][101], visited1[101][101];
int n, m, k;

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m;
}

int main() {
    fastio;
    cin >> m >> n >> k;
    fill(&board[0][0], &board[100][101], 1);
    while (k--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i = a + 1; i <= c; ++i) {
            for (int j = b + 1; j <= d; ++j) {
                board[i][j] = 0;
            }
        }
    }
    vector<int> v;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (board[i][j] and !visited1[i][j]) {
                int cnt = 0;
                queue<pair<int, int>> q;
                q.push({i, j});
                visited1[i][j] = 1;
                while (!q.empty()) {
                    auto[x, y] = q.front();
                    q.pop();
                    ++cnt;
                    for (int k = 0; k < 4; ++k) {
                        int nx = x + "0121"[k] - '1';
                        int ny = y + "1210"[k] - '1';
                        if (OOB(nx, ny) and !visited1[nx][ny] and board[nx][ny]) {
                            visited1[nx][ny] = 1;
                            q.push({nx, ny});
                        }
                    }
                }
                v.push_back(cnt);
            }
        }
    }
    cout << v.size() << "\n";
    sort(v.begin(), v.end());
    for (int &i: v) {
        cout << i << " ";
    }
    return 0;
}