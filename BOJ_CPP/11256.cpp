#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
priority_queue<int> q;

int main() {
    fastio;
    int T;
    cin >> T;
    int j, N, R, C, cnt;
    while (T--) {
        cnt = 0;
        while (!q.empty()) {
            q.pop();
        }
        cin >> j >> N;
        while (N--) {
            cin >> R >> C;
            q.push(R * C);
        }
        while (j > 0) {
            j -= q.top();
            q.pop();
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}