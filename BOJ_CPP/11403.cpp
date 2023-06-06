#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
bool graph[101][101];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }
    // k = 거쳐가는 노드
    for (int k = 0; k < n; ++k) {
        // i = 출발 노드
        for (int i = 0; i < n; ++i) {
            // j = 도착 노드
            for (int j = 0; j < n; ++j) {
                // 최단 경로가 아닌 갈 수 있는지만 체크하면 됨
                if (graph[i][k] && graph[k][j]) {
                    graph[i][j] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}