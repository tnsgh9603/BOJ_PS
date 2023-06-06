#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int dist[900][900], fg[900][900];
char grid[30][30];
bool visited[900];

const int MAX = 1 << 20;
int n, m;

int solve() {
    cin >> n >> m;
    vector<int> forests;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == 'T') {
                forests.push_back(i * m + j);
            }
        }
    }
    for (int v = 0; v < n * m; ++v) {
        if (grid[v / m][v % m] != '.') {
            deque<pair<int, int> > q;
            memset(visited, 0, sizeof(visited));
            q.push_back({v, 0});
            while (q.size() > 0) {
                pair<int, int> p = q.front();
                int u = p.first;
                int d = p.second;
                q.pop_front();
                if (!visited[u]) {
                    dist[v][u] = d;
                    for (int z = 0; z < 4; ++z) {
                        int x = (z / 2) + (z % 2) - 1 + u / m;
                        int y = (z / 2) - (z % 2) + u % m;
                        if (x >= 0 && x < n && y >= 0 && y < m &&
                            grid[x][y] != '.') {
                            q.push_back({x * m + y, d + 1});
                        }
                    }
                    visited[u] = 1;
                }
            }
        }
    }
    int nf = forests.size();
    for (int i = 0; i < nf; ++i) {
        for (int j = i + 1; j < nf; ++j) {
            int x = dist[forests[i]][forests[j]];
            int y = x / 2;
            int c = x * (x + 1) / 2;
            c -= y * (y + 1);
            if (x % 2 == 0) {
                c += y;
            }
            fg[i][j] = fg[j][i] = c;
        }
    }
    int mst = 0;
    memset(visited, 0, sizeof(visited));
    int sc = 0;
    visited[0] = 1;
    for (int k = 1; k < nf; k++) {
        int e = MAX;
        int rv = -1;
        for (int u = 0; u < nf; ++u) {
            if (visited[u]) {
                for (int v = 0; v < nf; ++v) {
                    if (!visited[v]) {
                        if (fg[u][v] < e) {
                            e = fg[u][v];
                            rv = v;
                        }
                    }
                }
            }
        }
        visited[rv] = 1;
        mst += e;
    }
    int result = mst;
    for (int i = 0; i < n * m; ++i) {
        if (grid[i / m][i % m] == '#') {
            int d = MAX;
            for (int f = 0; f < nf; ++f) {
                if (dist[i][forests[f]] < d) {
                    d = dist[i][forests[f]];
                }
            }
            result += d;
        }
    }
    return result;
}

int main() {
    fastio;
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        cout << "Case #" << i << ": " << solve() << "\n";
    }
    return 0;
}