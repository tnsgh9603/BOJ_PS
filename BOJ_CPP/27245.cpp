#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int w, l, h;
    cin >> w >> l >> h;
    cout << (h * 2 <= min(w, l) && min(w, l) * 2 >= max(w, l) ? "good" : "bad");
    return 0;
}