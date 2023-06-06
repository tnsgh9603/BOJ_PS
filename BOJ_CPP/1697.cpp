#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
int dist[100'001];

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    fill(dist, dist + 100001, 987654321);
    queue<pair<int,int>> q;
    q.push({n, 0});
    while (!q.empty()) {
        int now = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if (now == k) {
            cout << cnt;
            break;
        }
        if (now * 2 <= 100'000 && dist[now * 2] > cnt + 1) {
            dist[now * 2] = cnt + 1;
            q.push({now * 2, cnt + 1});
        }
        if (now <= 99'999 && dist[now + 1] > cnt + 1) {
            dist[now + 1] = cnt + 1;
            q.push({now + 1, cnt + 1});
        }
        if (now >= 1 && dist[now - 1] > cnt + 1) {
            dist[now - 1] = cnt + 1;
            q.push({now - 1, cnt + 1});
        }
    }
    return 0;
}