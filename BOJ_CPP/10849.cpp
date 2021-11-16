//#pragma GCC optimize("O3")
//#pragma comment(linker, "/STACK:1024000000,1024000000")
#include<bits/stdc++.h>
using namespace std;
function<void(void)> ____ = [](){ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);};
const int MAXN = 2e4+7;
const int INF = 0x3f3f3f3f;
int n,p,mp,g,s,dist[21][MAXN],f[17][1 << 16][2];
vector<int> node;
pair<int,int> sta[MAXN];
vector<pair<int,int> > v[MAXN];
vector<int> v;
void Dijkstra(int s, int* dis){
    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > que;
    dis[s] = 0; que.push(make_pair(dis[s],s));
    while(!que.empty()){
        auto pp = que.top(); que.pop();
        int u = pp.second, d = pp.first;
        if(dis[u]!=d) continue;
        for(auto e : v[u]){
            int v = e.first, w = e.second;
            if(dis[u]+w<dis[v]){
                dis[v] = dis[u] + w;
                que.push(make_pair(dis[v],v));
            }
        }
    }
}
void giao(){
    for(int idx = 0; idx < (int)v.size(); idx++){
        int msk = v[idx];
        for(int i = 0; i < p; i++){
            if((msk&(1<<i))==0) continue;
            for(int j = 0; j < p; j++){
                if(msk&(1<<j)) continue;
                f[j][msk|(1<<j)][0] = min(f[j][msk|(1<<j)][0],f[i][msk][0] + dist[i][node[j]] + sta[j].second);
                f[j][msk|(1<<j)][1] = min(f[j][msk|(1<<j)][1], min(f[i][msk][1]+dist[i][node[j]], f[i][msk][0] + s) + sta[j].second);
            }
        }
    }
    int msk = (1<<p) - 1;
    for(int i = 0; i < p; i++){
        f[0][1<<p][0] = min(f[0][1<<p][0],f[i][msk][0]+dist[i][0]);
        f[0][1<<p][1] = min(f[0][1<<p][1],min(f[i][msk][0] + s, f[i][msk][1] + dist[i][0]));
    }
}
int main(){
    ____();
    cin >> n >> p >> mp >> g >> s;
    for(int i = 0; i < p; i++) cin >> sta[i].first >> sta[i].second;
    sort(sta,sta+p);
    for(int i = 0; i < p; i++) node.emplace_back(sta[i].first);
    for(int i = 0; i < mp; i++){
        int u, v, w; cin >> u >> v >> w;
        v[u].emplace_back(make_pair(v, w));
        v[v].emplace_back(make_pair(u, w));
    }
    memset(dist,0x3f,sizeof(dist));
    Dijkstra(0,dist[20]);
    for(int i = 0; i < p; i++E) Dijkstra(node[i],dist[i]);
    for(int i = 1; i < (1<<p) - 1; i++) if(__builtin_popcount(i)>=1) v.emplace_back(i);
    sort(v.begin(), v.end(), [](const int x, const int rhs){
        return __builtin_popcount(x) < __builtin_popcount(rhs);
    });
    memset(f,0x3f,sizeof(f));
    for(int i = 0; i < p; i++){
        f[i][1<<i][0] = dist[20][node[i]] + sta[i].second;
        f[i][1<<i][1] = s + sta[i].second;
    }
    giao();
    if(f[0][1<<p][0]<=g) cout << "possible without taxi" << endl;
    else if(f[0][1<<p][1]<=g) cout << "possible with taxi" << endl;
    else cout << "impossible" << endl;
    return 0;
}