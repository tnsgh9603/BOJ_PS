#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool visited[4 * 4];
int main() {
    fastio;
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; ++tc) {
        memset(visited, 0, sizeof(visited));
        int r1;
        cin >> r1;
        for(int i = 0; i < 4; ++i) {
            for(int j = 0; j < 4; ++j) {
                int v;
                cin >> v;
                if(i + 1 == r1) {
                    visited[v - 1] = 1;
                }
            }
        }
        int r2;
        cin >> r2;
        int sol = -1;
        for(int i = 0; i < 4; ++i) {
            for(int j = 0; j < 4; ++j) {
                int v;
                cin >> v;
                if(i + 1 == r2 && visited[v - 1]) {
                    sol = (sol == -1 ? v : -2);
                }
            }
        }
        cout << "Case #" << tc << ": " << (sol > 0 ? to_string(sol) : sol == -1 ? "Volunteer cheated!" : "Bad magician!") << "\n";
    }
    return 0;
}