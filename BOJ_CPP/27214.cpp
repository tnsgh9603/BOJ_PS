#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int k, w, h, t;
    cin >> k >> w >> h >> t;
    for (int j = 0; j < h; ++j) {
        for (int i = 0; i < t; ++i) {
            cout << string((t + k) * w + t, '*') << "\n";
        }
        for (int i = 0; i < k; ++i) {
            for (int g = 0; g < w; ++g) {
                cout << string(t, '*') << string(k, '.');
            }
            cout << string(t, '*') << "\n";
        }
    }
    for (int i = 0; i < t; ++i) {
        cout << string((t + k) * w + t, '*') << "\n";
    }
    return 0;
}