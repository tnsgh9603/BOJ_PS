#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[101][101];
bool visited[101][101], key_visited[101][101];
int cnt, n, m;
map<char, int> mp;
vector<pair<int, int>> key, document;

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m;
}

bool bfs(int st, int en, bool check_obtainable_key) {
    queue<pair<int, int>> q;
    q.push({st, en});
    memset(visited, 0, sizeof(visited));
    visited[st][en] = 1;
    while (!q.empty()) {
        auto[x, y] = q.front();
        q.pop();
        if (x == 1 or x == n or y == 1 or y == m) {
            if (check_obtainable_key) {
                char c = board[st][en];
                c = toupper(c);
                mp[c] = 1;
                return 1;
            } else {
                ++cnt;
                return 1;
            }
        }
        for (int i = 0; i < 4; ++i) {
            int nx = x + "0121"[i] - '1';
            int ny = y + "1210"[i] - '1';
            if (OOB(nx, ny) and !visited[nx][ny]) {
                // 벽이면 스킵
                if (board[nx][ny] == '*') {
                    continue;
                }
                if (isalpha(board[nx][ny])) {
                    // 지나갈 수 없는 문이면
                    if (isupper(board[nx][ny]) and !mp.count(board[nx][ny])) {
                        continue;
                    }
                }
                q.push({nx, ny});
                visited[nx][ny] = 1;
            }
        }
    }
    return 0;
}

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {

        memset(visited, 0, sizeof(visited));
        memset(key_visited, 0, sizeof(key_visited));
        mp.clear();
        key.clear();
        document.clear();
        cnt = 0;

        cin >> n >> m;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cin >> board[i][j];
                // $ 위치 체크
                if (board[i][j] == '$') {
                    document.push_back({i, j});
                }
                    // 소문자 영어(key) 체크
                else if (isalpha(board[i][j]) and islower(board[i][j])) {
                    key.push_back({i, j});
                }
            }
        }
        string s;
        cin >> s;
        if (s != "0") {
            for (char &c: s) {
                c = toupper(c);
                mp[c] = 1;
            }
        }
        // 얻을 수 있는 key들 미리 체크 + 더 이상 획득할 수 없을 때까지 반복
        while (1) {
            bool flag = 0;
            for (const auto&[x, y]: key) {
                if (!key_visited[x][y] and bfs(x, y, 1)) {
                    flag = 1;
                    key_visited[x][y] = 1;
                }
            }
            if (!flag) {
                break;
            }
        }

        // 획득할 수 있는 $들 체크
        for (const auto&[x, y]: document) {
            memset(visited, 0, sizeof(visited));
            bfs(x, y, 0);
        }

        cout << cnt << "\n";
    }
    return 0;
}