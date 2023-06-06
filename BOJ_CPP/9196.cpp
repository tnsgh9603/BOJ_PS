#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    set<pair<int, int>> S;
    int W, H;
    for (int i = 1; i <= 150; ++i) {
        for (int j = 1; j < i; ++j) {
            S.insert(pair<int, int>(i * i + j * j, j));
        }
    }
    while (cin >> H >> W && H) {
        int h = S.upper_bound(pair<int, int>(H * H + W * W, H))->second;
        int sq = S.upper_bound(pair<int, int>(H * H + W * W, H))->first;
        int w = (int) sqrt(sq - h * h);
        cout << h << " " << w << "\n";
    }
    return 0;
}