#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, x, k;
double a, b, c, tab[2][2];
double solve(){
    cin >> n >> x >> k >> a >> b >> c;
    a /= 100;
    b /= 100;
    c /= 100;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            double ans[2];
            ans[i] = 1, ans[1 - i] = 0;
            for(int k=1; k<=n; k++){
                double nxt[2] = {};
                nxt[0 & j] += a * ans[0];
                nxt[1 & j] += a * ans[1];
                nxt[0 | j] += b * ans[0];
                nxt[1 | j] += b * ans[1];
                nxt[0 ^ j] += c * ans[0];
                nxt[1 ^ j] += c * ans[1];
                ans[0] = nxt[0];
                ans[1] = nxt[1];
            }
            tab[i][j] = ans[1];
        }
    }
    double ans = 0;
    for(int i=0; i<30; i++){
        ans += tab[(x >> i) & 1][(k >> i) & 1] * (1 << i);
    }
    return ans;
}
int main(){
    int tc;
    cin >> tc;
    for(int i=1; i<=tc; ++i) {
        printf("Case #%d: %.10f\n", i, solve());
    }
}