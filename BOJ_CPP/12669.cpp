#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3005;
using pi = pair<int, int>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int n, m;
char str[55][55];
int idx[55][55];

struct mf{
    struct edg{ int pos, cap, rev; };
    vector<edg> gph[MAXN];
    void clear(){
        for(int i=0; i<MAXN; i++) gph[i].clear(); }
    void add_edge(int s, int e, int x){
        gph[s].push_back({e, x, (int)gph[e].size()});
        gph[e].push_back({s, 0, (int)gph[s].size()-1});
    }
    int dis[MAXN], pnt[MAXN];
    bool bfs(int src, int sink){
        memset(dis, 0, sizeof(dis));
        memset(pnt, 0, sizeof(pnt));
        queue<int> que;
        que.push(src);
        dis[src] = 1;
        while(!que.empty()){
            int x = que.front();
            que.pop();
            for(auto &e : gph[x]){
                if(e.cap > 0 && !dis[e.pos]){
                    dis[e.pos] = dis[x] + 1;
                    que.push(e.pos);
                }
            }
        }
        return dis[sink] > 0;
    }
    int dfs(int x, int sink, int f){
        if(x == sink) return f;
        for(; pnt[x] < gph[x].size(); pnt[x]++){
            edg e = gph[x][pnt[x]];
            if(e.cap > 0 && dis[e.pos] == dis[x] + 1){
                int w = dfs(e.pos, sink, min(f, e.cap));
                if(w){
                    gph[x][pnt[x]].cap -= w;
                    gph[e.pos][e.rev].cap += w;
                    return w;
                }
            }
        }
        return 0;
    }
    int match(int src, int sink){
        int ret = 0;
        while(bfs(src, sink)){
            int r;
            while((r = dfs(src, sink, 2e9))) ret += r;
        }
        return ret;
    }
}mf;

bool ok(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool conf(char x, char y){
    return (x == '#' && y == '.') || (x == '.' && y == '#');
}

int solve(){
    int cnt = 0;
    int dap = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(str[i][j] == '?'){
                idx[i][j] = ++cnt;
            }
            if(j + 1 < m && conf(str[i][j], str[i][j+1])) dap++;
            if(i + 1 < n && conf(str[i][j], str[i+1][j])) dap++;
        }
    }
    vector<pi> drog;
    mf.clear();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(str[i][j] == '?'){
                int acost = 0, bcost = 0;
                for(int k=0; k<4; k++){
                    if(ok(i + dx[k], j + dy[k])){
                        if(str[i + dx[k]][j + dy[k]] == '#'){
                            acost++;
                        }
                        else if(str[i + dx[k]][j + dy[k]] == '.'){
                            bcost++;
                        }
                        else{
                            drog.emplace_back(idx[i][j], idx[i + dx[k]][j + dy[k]]);
                        }
                    }
                }
                if(i % 2 == j % 2){
                    swap(acost, bcost);
                }
                dap += acost + bcost;
                mf.add_edge(0, idx[i][j], acost);
                mf.add_edge(idx[i][j], cnt + 1, bcost);
            }
        }
    }
    dap += drog.size() / 2;
    for(auto &i : drog){
        mf.add_edge(i.first, i.second, 1);
    }
    return dap - mf.match(0, cnt + 1);
}

int main(){
    int tc;
    scanf("%d",&tc);
    for(int i=1; i<=tc; i++){
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            cin >> (str[i] + 1);
            str[i][0] = str[i][m+1] = '.';
        }
        fill(str[0], str[0] + m + 2, '.');
        fill(str[n+1], str[n+1] + m + 2, '.');
        n += 2;
        m += 2;
        printf("Case #%d: %d\n", i, solve());
    }
}
