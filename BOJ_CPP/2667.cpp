#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool board[26][26], visited1[26][26];
int n;

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= n;
}

int main() {
    fastio;
    cin >> n;
    char c;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> c;
            board[i][j] = (c == '1' ? 1 : 0);
        }
    }
    vector<int> v;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (board[i][j] and !visited1[i][j]) {
                int cnt = 0;
                queue<pair<int, int>> q;
                q.push({i, j});
                visited1[i][j] = 1;
                while (!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    ++cnt;
                    q.pop();
                    for (int k = 0; k < 4; ++k) {
                        int nx = x + "0121"[k] - '1';
                        int ny = y + "1210"[k] - '1';
                        if (OOB(nx, ny) and board[nx][ny] and !visited1[nx][ny]) {
                            q.push({nx, ny});
                            visited1[nx][ny] = 1;
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
        cout << i << "\n";
    }
    return 0;
}