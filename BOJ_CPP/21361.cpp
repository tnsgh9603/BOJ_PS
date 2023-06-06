#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

pair<int, int> getDir(char c) {
    switch (c) {
        case 'v':
            return {1, 0};
        case '<':
            return {0, -1};
        case '>':
            return {0, 1};
        case '^':
            return {-1, 0};
    }
}

int main() {
    fastio;
    int r, c, n;
    cin >> r >> c >> n;
    string s;
    cin >> s;
    vector<string> board(r);
    int ri = -1, ci = -1;
    for (int i = 0; i < r; ++i) {
        cin >> board[i];
        for (int j = 0; j < c; ++j) {
            if (board[i][j] == 'O') {
                ri = i;
                ci = j;
            }
        }
    }
    for (auto c: s) {
        int dr, dc;
        tie(dr, dc) = getDir(c);
        while (board[ri + dr][ci + dc] != '#') {
            ri += dr;
            ci += dc;
            board[ri][ci] = ' ';
        }
    }
    int ans = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            ans += (board[i][j] == ' ' || board[i][j] == 'O');
        }
    }
    cout << ans;
    return 0;
}