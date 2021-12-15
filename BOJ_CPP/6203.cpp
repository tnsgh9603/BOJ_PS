#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int x[1001], y[1001], q[4001], f, r;
bool visited[1001];

int dist(int a, int b) {
    return (x[a] - x[b]) * (x[a] - x[b]) + (y[a] - y[b]) * (y[a] - y[b]);
}

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
        q[r++] = i;
    }
    while (r - f > 1) {
        int cur = q[f++], t = -1, mind = 0x3f3f3f3f;
        if (visited[cur]) {
            continue;
        }
        for (int i = 0; i < n; ++i)
            if (!visited[i] && i != cur) {
                int d = dist(cur, i);
                if (d < mind) {
                    mind = d;
                    t = i;
                }
            }
        visited[t] = 1;
        q[r++] = cur;
    }
    cout << q[f] + 1;
    return 0;
}
