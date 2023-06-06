#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    fastio;
    int T;
    cin >> T;
    while(T--) {
        int N, M, K;
        cin >> N >> M >> K;
        vector<int> v(N);
        for(int i=0; i<N; ++i) {
            cin >> v[i];
        }
        int cnt = 0;
        for(int i=0; i<N-M+1; ++i) {
            int mn = INT_MAX, mx = INT_MIN;
            for(int j=i; j<i+M; j++) {
                mn = min(mn, v[j]);
                mx = max(mx, v[j]);
            }
            if(mx - mn <= K) {
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
