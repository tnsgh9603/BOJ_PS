#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

char board[1001][1001];
bool visited[1001][1001];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> board[i];
    }
    int x = 0, y = 0;
    while (!visited[x][y]) {
        if (board[x][y] == 'A') {
            cout << "sushi";
            return 0;
        } else if (board[x][y] == 'B') {
            cout << "samuraj";
            return 0;
        }
        visited[x][y] = 1;
        if (board[x][y] == 'v') {
            ++x;
        }
        if (board[x][y] == '^') {
            --x;
        }
        if (board[x][y] == '>') {
            ++y;
        }
        if (board[x][y] == '<') {
            --y;
        }
    }
    cout << "cykel";
    return 0;
}