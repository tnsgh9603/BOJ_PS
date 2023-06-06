#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef pair<int, int> pi;

pi arr[7], b[7];
int n, mp, q, k;

bool visited[101][101];

bool chk() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < mp; ++j) {
            if (!visited[i][j]) {
                return 0;
            }
        }
    }
    return 1;
}

void fill(int x, int y, pi t, int v) {
    for (int i = 0; i < t.first; ++i) {
        for (int j = 0; j < t.second; ++j) {
            visited[x + i][y + j] = v;
        }
    }
}

bool fillable(int x, int y, pi t) {
    if (x + t.first > n || y + t.second > mp) {
        return 0;
    }
    for (int i = 0; i < t.first; ++i) {
        for (int j = 0; j < t.second; ++j) {
            if (visited[x + i][y + j]) {
                return 0;
            }
        }
    }
    return 1;
}


bool arr[7];

bool bktk(int d) {
    if (chk()) {
        return 1;
    }
    for (int j = 0; j < k; ++j) {
        if (!arr[j]) {
            arr[j] = 1;
            arr[d] = b[j];
            pi r(-1, -1);
            for (int a = 0; a < n; ++a) {
                for (int b = 0; b < mp; ++b) {
                    if (!visited[a][b]) {
                        r = pi(a, b);
                        break;
                    }
                }
                if (r != pi(-1, -1)) {
                    break;
                }
            }
            if (fillable(r.first, r.second, arr[d])) {
                fill(r.first, r.second, arr[d], 1);
                if (bktk(d + 1)) {
                    return 1;
                }
                fill(r.first, r.second, arr[d], 0);
            }
            swap(arr[d].first, arr[d].second);
            if (fillable(r.first, r.second, arr[d])) {
                fill(r.first, r.second, arr[d], 1);
                if (bktk(d + 1)) {
                    return 1;
                }
                fill(r.first, r.second, arr[d], 0);
            }
            arr[j] = 0;
        }
    }
    return 0;
}

int main() {
    fastio;
    cin >> n >> mp >> q;
    int x = 0;
    while (q--) {
        int p, w, h;
        cin >> p >> w >> h;
        while (p--) {
            b[k++] = pi(w, h);
        }
    }
    cout << (bktk(0) ? "yes" : "no");
    return 0;
}