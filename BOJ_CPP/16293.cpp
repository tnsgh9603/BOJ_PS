#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[101][101], cnt[101];

int main() {
    fastio;
    int h, w;
    cin >> h >> w;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            char c;
            cin >> c;
            if (c != '.') {
                board[i][j] = 1;
            }
        }
    }
    for (int j = 0; j < w; ++j) {
        for (int i = 0; i < h; ++i) {
            cnt[j] += board[i][j];
        }
    }
    double l = 105, r = -1;
    for (int i = 0; i < w; ++i) {
        if (board[h - 1][i]) {
            l = min(l, (double) i - 0.5);
            r = i + 0.5;
        }
    }
    int sum = 0, temp = 0;
    for (int i = 0; i < w; ++i) {
        sum += cnt[i] * i, temp += cnt[i];
    }
    cout << ((double) sum / temp < l ? "left" : (double) sum / temp > r ? "right " : "balanced");
    return 0;
}