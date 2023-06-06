#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[31][31];
int arr1;

bool OOB(int x, int y) {
    return 1 <= x and x <= arr1 and 1 <= y and y <= arr1;
}

int main() {
    fastio;
    cin >> arr1;
    for (int i = 1; i <= arr1; ++i) {
        for (int j = 1; j <= arr1; ++j) {
            cin >> board[i][j];
        }
    }
    for (int i = 1; i <= arr1; ++i) {
        for (int j = 1; j <= arr1; ++j) {
            int x = i, y = j;
            char c = board[i][j];
            if (c == '.') {
                continue;
            }
            for (int k = 0; k < 8; ++k) {
                int cnt = 1;
                for (int q = 0; q < 2; ++q) {
                    int nx = x + "00122210"[k] - '1', ny = y + "12221000"[k] - '1';
                    if (OOB(nx, ny) and board[nx][ny] == c) {
                        ++cnt;0
                        x = nx;
                        y = ny;
                    } else {
                        break;
                    }
                }
                if (cnt == 3) {
                    cout << c;
                    return 0;
                }
            }
        }
    }
    cout << "ongoing";
    return 0;
}