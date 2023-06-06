#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
int board[101][101][101], n, h, m;

bool OOB(int x, int y, int z) {
    return 0 <= x and x < h and 0 <= y and y < n and 0 <= z and z < m and !board[x][y][z];
}

int main() {
    fastio;
    int temp = 0;
    queue<int> q;
    cin >> m >> n >> h;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                int s;
                cin >> s;
                board[i][j][k] = s;
                temp += (s != -1);
                if (s == 1) {
                    q.push(i * 10000 + j * 100 + k);
                }
            }
        }
    }
    int s;
    while (q.size()) {
        s = q.front();
        q.pop();
        --temp;
        int i = s / 10000, j = (s / 100) % 100, k = s % 100;
        s = board[i][j][k];
        int d[][3] = {0, 0, 1, 0, 0, -1, 0, 1, 0, 0, -1, 0, 1, 0, 0, -1, 0, 0};
        for (int t = 0; t < 6; ++t) {
            int ni = i + d[t][0], nj = j + d[t][1], nk = k + d[t][2];
            if (OOB(ni, nj, nk)) {
                board[ni][nj][nk] = s + 1;
                q.push(ni * 10000 + nj * 100 + nk);
            }
        }
    }
    cout << (temp ? -1 : s - 1);
    return 0;
}
