#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int o, cnt = 0;
    string x, y;
    cin >> o >> x >> y;
    for (int i = 0; x[i]; ++i) {
        if (x[i] - y[i]) {
            ++cnt;
        }
    }
    cout << min(o, int(x.length()) - cnt) + min(int(x.length()) - o, cnt);
    return 0;
}