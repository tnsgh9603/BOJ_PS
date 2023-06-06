#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int INF = 200000000;
typedef long long ll;
vector<pair<ll, ll>> adj[501];
ll dist[501];

int main() {
    fastio;
    int vertex, edge, from, to, weight;
    cin >> vertex >> edge;
    for (int i = 1; i <= edge; ++i) {
        cin >> from >> to >> weight;
        adj[from].push_back({to, weight});
    }
    fill(dist, dist + 501, INF);
    dist[1] = 0;
    for (int i = 1; i <= vertex; ++i) {
        for (int j = 1; j <= vertex; ++j) {
            for (int k = 0; k < adj[j].size(); ++k) {
                ll next = adj[j][k].first, nextCost = adj[j][k].second + dist[j];
                if (dist[next] > nextCost && dist[j] != INF) {
                    /* 여기서 dist[j] != INF를 하는 이유는
                    해당 정점이 방문되어있는 상태여야 시작 정점에서부터 연결되어 이동할 수 있기 때문*/
                    if (i == vertex) {
                        /* 최단 경로는 같은 정점을 두 번 지날 일이 없다.
                        그래서 최단경로의 간선 개수는 많아야 v-1개인데
                        v번 돌렸을때도 이 if문을 들어온다는 것은
                        음의 사이클이 존재한다는 뜻 */
                        cout << -1;
                        return 0;
                    }
                    dist[next] = nextCost;
                }
            }
        }
    }
    for (int i = 2; i <= vertex; ++i) {
        cout << (dist[i] == INF ? -1 : dist[i]) << "\n";
    }
    return 0;
}