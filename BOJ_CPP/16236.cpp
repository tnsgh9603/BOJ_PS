#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[21][21], n, sz, now_x, now_y, eat;
bool visited[21][21];

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= n;
}

int distance(int x1, int y1, int x2, int y2) {
    memset(visited, 0, sizeof(visited));
    queue<tuple<int, int, int>> q;
    q.push({x1, y1, 0});
    visited[x1][y1] = 1;
    while (!q.empty()) {
        auto[x, y, cnt] = q.front();
        q.pop();
        if (x == x2 and y == y2) {
            return cnt;
        }
        for (int i = 0; i < 4; ++i) {
            int nx = x + "0121"[i] - '1';
            int ny = y + "1210"[i] - '1';
            if (OOB(nx, ny) and !visited[nx][ny] and (board[nx][ny] == 0 or board[nx][ny] <= sz)) {
                q.push({nx, ny, cnt + 1});
                visited[nx][ny] = 1;
            }
        }
    }
    return -1;
}

vector<tuple<int, int, int>> check_fish() {
    vector<tuple<int, int, int>> v;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (board[i][j] and board[i][j] < sz) {
                int dist = distance(now_x, now_y, i, j);
                if (dist != -1) {
                    v.push_back({dist, i, j});
                }
            }
        }
    }
    if (!v.empty()) {
        sort(v.begin(), v.end());
    }
    return v;
}

int main() {
    fastio;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 9) {
                now_x = i;
                now_y = j;
                board[i][j] = 0;
            }
        }
    }
    sz = 2;
    int time = 0;
    while (1) {
        vector<tuple<int, int, int>> v = check_fish();
        if (v.empty()) {
            break;
        }
        auto[a, b, c] = v[0];
        now_x = b;
        now_y = c;
        board[now_x][now_y] = 0;
        ++eat;
        if (eat == sz) {
            eat = 0;
            ++sz;
        }
        time += a;
    }
    cout << time;
    return 0;
}