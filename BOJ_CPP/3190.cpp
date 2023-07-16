#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, k, l, arr, b;
bool board[101][101];

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= n;
}

int change_dir(int x, char c) {
    if (c == 'L') {
        --x;
        if (x < 0) {
            x = 3;
        }
    } else {
        ++x;
        if (x == 4) {
            x = 0;
        }
    }
    return x;
}

// 방향대로 앞으로 이동하는 함수
pair<int, int> go(int x, int y, int dir) {
    if (dir == 0) {
        return {x - 1, y};
    } else if (dir == 1) {
        return {x, y + 1};
    } else if (dir == 2) {
        return {x + 1, y};
    } else {
        return {x, y - 1};
    }
}

int main() {
    fastio;
    char c;
    cin >> n >> k;
    for (int i = 0; i < k; ++i) {
        cin >> arr >> b;
        board[arr][b] = 1;
    }
    cin >> l;
    vector<pair<int, char>> v;
    for (int i = 0; i < l; ++i) {
        cin >> b >> c;
        v.push_back({b, c});
    }
    deque<pair<int, int>> snake;
    snake.push_back({1, 1});
    // 0 : 북, 1 : 동, 2 : 남, 3 : 서
    int now_dir = 1, time = 0, idx = 0;
    while (1) {
        ++time;
        int x = snake[0].first, y = snake[0].second;
        auto[nx, ny] = go(x, y, now_dir);
        if (!OOB(nx, ny)) {
            cout << time;
            return 0;
        }
        // 사과를 먹어서 증가했을 때
        if (board[nx][ny]) {
            for (int i = 0; i < snake.size(); ++i) {
                if (nx == snake[i].first and ny == snake[i].second) {
                    cout << time;
                    return 0;
                }
            }
            snake.push_front({nx, ny});
            board[nx][ny] = 0;
        }
        // 사과 못 먹음 ㅠㅠ
        else {
            for (int i = 0; i < snake.size(); ++i) {
                if (nx == snake[i].first and ny == snake[i].second) {
                    cout << time;
                    return 0;
                }
            }
            snake.push_front({nx, ny});
            snake.pop_back();
        }
        if (idx < v.size() and v[idx].first == time) {
            now_dir = change_dir(now_dir, v[idx].second);
            ++idx;
        }
    }
}