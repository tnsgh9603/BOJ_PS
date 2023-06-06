#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double W, H, w, h;
    cin >> W >> H >> w >> h;
    if (H > W) {
        swap(W, H);
    }
    if (h > w) {
        swap(w, h);
    }
    if (W < w || H < h) cout << -1;
    else {
        int ans = 0;
        while (W > w) {
            ++ans;
            W /= 2;
            if (h >= W) {
                swap(h, w);
            }
        }
        while (H > h) {
            ++ans;
            H /= 2;
        }
        cout << ans;
    }
    return 0;
}