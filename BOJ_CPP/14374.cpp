#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

string list1[1001], list2[1001];
string s1, s2;
vector<int> v[1001];
int n, m, arr[1001];
bool visited[1001];

bool dfs(int x) {
    for (int i : v[x]) {
        if (visited[i]) {
            continue;
        }
        visited[i] = 1;
        if (arr[i] == 0 || dfs(arr[i])) {
            arr[i] = x;
            return 1;
        }
    }
    return 0;
}

int bp() {
    int ret = 0;
    for (int i = 1; i <= m; ++i) {
        arr[i] = 0;
    }
    for (int i = 1; i <= n; ++i) {
        memset(visited, 0, sizeof(visited));
        if (dfs(i)) {
            ++ret;
        }
    }
    return ret;
}

int main() {
    fastio;
    int tc, i, j, E;
    cin >> tc;
    for (int T = 1; T <= tc; ++T) {
        n = m = 0;
        cin >> E;
        for (int Q = E; Q--;) {
            cin >> s1 >> s2;
            for (i = 1; i <= n; ++i) {
                if (list1[i] == s1) {
                    break;
                }
            }
            if (i == n + 1) {
                list1[++n] = s1;
            }
            for (j = 1; j <= m; ++j) {
                if (list2[j] == s2) {
                    break;
                }
            }
            if (j == m + 1) {
                list2[++m] = s2;
            }
            v[i].push_back(j);
        }
        cout << "Case #" << T << ": " << E - ( n + m - bp()) << "\n";
        memset(list1, 0, sizeof(list1));
        memset(list2, 0, sizeof(list2));
        for (int i = 1; i <= n; ++i) {
            v[i].clear();
        }
    }
    return 0;
}