#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

typedef pair<int, int> pi;
typedef pair<int, pi> ppi;
char board[21][21];
int ply[21][21], pry[21][21], pux[21][21], pdx[21][21], r, c, v[21][21];

priority_queue<ppi, vector<ppi>, greater<ppi> > pq;

void init() {
    memset(v, 0, sizeof(v));
    memset(ply, 0, sizeof(ply));
    memset(pry, 0, sizeof(pry));
    memset(pux, 0, sizeof(pux));
    memset(pdx, 0, sizeof(pdx));
    while (!pq.empty()) {
        pq.pop();
    }
}

void push(int x, int y, int d) {
    // OOB
    if (x < 0 || x >= r || y < 0 || y >= c || v[x][y] || board[x][y] == '#') {
        return;
    }
    pq.push(ppi(d, pi(x, y)));
}

void solve() {
    init();
    cin >> r >> c;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 'O') {
                pq.push(ppi(0, pi(i, j)));
            }
        }
    }

    // make_portal
    for (int i = 0; i < r; ++i) {
        int piv = 0;
        for (int j = 0; j < c; ++j) {
            if (board[i][j] == '#') {
                piv = j + 1;
            }
            pry[i][j] = piv;
        }
    }
    for (int i = 0; i < r; ++i) {
        int piv = c - 1;
        for (int j = c - 1; j >= 0; --j) {
            if (board[i][j] == '#') {
                piv = j - 1;
            }
            ply[i][j] = piv;
        }
    }
    for (int j = 0; j < c; ++j) {
        int piv = 0;
        for (int i = 0; i < r; ++i) {
            if (board[i][j] == '#') {
                piv = i + 1;
            }
            pdx[i][j] = piv;
        }
    }
    for (int j = 0; j < c; ++j) {
        int piv = r - 1;
        for (int i = r - 1; i >= 0; --i) {
            if (board[i][j] == '#') {
                piv = i - 1;
            }
            pux[i][j] = piv;
        }
    }

    // solve
    while (!pq.empty()) {
        ppi c = pq.top();
        pq.pop();
        int x = c.second.first;
        int y = c.second.second;
        int d = c.first;
        if (v[x][y]) {
            continue;
        }
        if (board[x][y] == 'X') {
            cout << d << "\n";
            return;
        }
        v[x][y] = 1;
        push(x - 1, y, d + 1);
        push(x, y - 1, d + 1);
        push(x + 1, y, d + 1);
        push(x, y + 1, d + 1);
        int dist = min(abs(ply[x][y] - y), abs(y - pry[x][y]));
        dist = min(dist, min(abs(pux[x][y] - x), abs(pdx[x][y] - x)));
        push(x, ply[x][y], d + dist + 1);
        push(x, pry[x][y], d + dist + 1);
        push(pux[x][y], y, d + dist + 1);
        push(pdx[x][y], y, d + dist + 1);
    }
    cout << "THE CAKE IS A LIE\n";
}

int main() {
    fastio;
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        cout << "Case #" << i << ": ";
        solve();
    }
}
