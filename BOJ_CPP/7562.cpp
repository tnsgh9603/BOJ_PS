#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool visited[301][301];
int n;

bool OOB(int x, int y) {
    return 0 <= x and x < n and 0 <= y and y < n;
}

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        cin >> n;
        int st_x, st_y, en_x, en_y;
        cin >> st_x >> st_y >> en_x >> en_y;
        memset(visited, 0, sizeof(visited));
        queue<tuple<int, int, int>> q;
        q.push({st_x, st_y, 0});
        visited[st_x][st_y] = 1;
        while (!q.empty()) {
            auto[x, y, cnt] = q.front();
            q.pop();
            if (x == en_x and y == en_y) {
                cout << cnt << "\n";
                break;
            }
            for (int i = 0; i < 8; ++i) {
                int nx = x + "01344310"[i] - '2';
                int ny = y + "34431001"[i] - '2';
                if (OOB(nx, ny) and !visited[nx][ny]) {
                    visited[nx][ny] = 1;
                    q.push({nx, ny, cnt + 1});
                }
            }
        }
    }
    return 0;
}